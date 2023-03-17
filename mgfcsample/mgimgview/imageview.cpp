
#include "imageview.h"
#include "mgwndhlp.h"
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>
#include "mgapp.h"

#define ID_FILE_EXIT  120
#define ID_HELP_ABOUT 801

#define ID_IMG_TOOL   1000
#define ID_IMG_PREV   1001
#define ID_IMG_NEXT   1002
#define ID_IMG_FULL   1003
#define ID_IMG_SMALL  1004
#define ID_IMG_BIG    1005

MENUITEMTEMPLATE file_menu[] = {
	{ID_FILE_EXIT,MFS_ENABLED,"Exit      ",NULL}
};

POPMENUTEMPLATE pop_file_menu={
	"File",
	sizeof(file_menu)/sizeof(MENUITEMTEMPLATE),
	file_menu
};

MENUITEMTEMPLATE help_menu[] = {
	{ID_HELP_ABOUT,MFS_ENABLED,"About    ",NULL}
};

POPMENUTEMPLATE pop_help_menu={
	"Help",
	sizeof(help_menu)/sizeof(MENUITEMTEMPLATE),
	help_menu
};

MENUITEMTEMPLATE main_menu[] = {
	{0,MFS_ENABLED,"File",&pop_file_menu},
	{0,MFS_ENABLED,"Help",&pop_help_menu}
};

MENUBARTEMPLATE main_menu_bar={
	sizeof(main_menu)/sizeof(MENUITEMTEMPLATE),
	main_menu
};


MGImageView::MGImageView()
{
}

MGImageView::~MGImageView()
{
}

BOOL MGImageView::Create()
{
	BOOL bret;
	MGMenu mainMenu;
	mainMenu.LoadMenuBar(&main_menu_bar);
	bret = MGMainWnd::Create(WS_VISIBLE|WS_BORDER|WS_CAPTION|WS_MINIMIZEBOX|WS_MAXIMIZEBOX|WS_SYSMENU,
			"Image Viewer",
			0,0,g_rcScr.right,g_rcScr.bottom,
			HWND_DESKTOP,(HCURSOR)0,mainMenu,
			(HICON)0,
			GetWindowElementColor (BKC_CONTROL_DEF));
	if(bret==FALSE)
		return FALSE;

	//char szpath[MAX_PATH+1];
	//getcwd(szpath,MAX_PATH);
	//m_pathEdit.Create(m_hWnd,10,5,g_rcScr.right-60,30,WS_VISIBLE|WS_BORDER|ES_LEFT);
	//m_pathEdit.SetWindowText(szpath);

	//MGButton upbutton;
	//upbutton.Create(m_hWnd,g_rcScr.right-50,5,40,30,WS_VISIBLE|BS_PUSHBUTTON);
	//upbutton.SetWindowText("UP");

	m_dirTree.Create(m_hWnd,10,40-35,150,g_rcScr.bottom-100+35,WS_VISIBLE|WS_HSCROLL|WS_VSCROLL|WS_BORDER|TVS_SORT/*TVS_WITHICON*/);
	m_dirTree.SetDir("/");

	m_fileList.Create(m_hWnd,160,40-35,g_rcScr.right-170,80+35,WS_VISIBLE|WS_HSCROLL|WS_VSCROLL|WS_BORDER|LVS_NOTIFY);
	m_fileList.AddColumn(0,200,"File",0,NULL,0);
	m_fileList.AddColumn(1,100,"Size",0,NULL,0);
	m_fileList.AddColumn(2,200,"Last Modify",0,NULL,0);
	m_fileList.SetDir("/");
	m_fileList.SelectItem(0,0);

	char *str_toolbar_item[]={
		"previous",
		"next",
		"full",
		"small",
		"big"
	};
	MGToolBar toolbar;
	toolbar.Create(m_hWnd,160,125,26*TABLESIZE(str_toolbar_item),16,WS_VISIBLE|WS_CHILD,22,16,0,ID_IMG_TOOL);
	for(int i=0;i<TABLESIZE(str_toolbar_item);i++)
	{
		char szNBmpPath[MAX_NAME+1];
		char szHBmpPath[MAX_NAME+1];
		char szDBmpPath[MAX_NAME+1];
		sprintf(szNBmpPath,"res/%s1.bmp",str_toolbar_item[i]);
		sprintf(szHBmpPath,"res/%s2.bmp",str_toolbar_item[i]);
		sprintf(szDBmpPath,"res/%s3.bmp",str_toolbar_item[i]);
		toolbar.AddItem(i+1, ID_IMG_PREV+i, szNBmpPath, szHBmpPath, szDBmpPath);
	}
	m_imgCtrl.Create(m_hWnd,160,145,g_rcScr.right-170,g_rcScr.bottom-205,WS_VISIBLE|WS_CHILD|SS_SIMPLE|SS_NOTIFY|WS_HSCROLL|WS_VSCROLL|WS_BORDER,WS_EX_STATICEDGE);
	m_imgCtrl.ShowScrollBar(SB_HORZ,FALSE);
	m_imgCtrl.ShowScrollBar(SB_VERT,FALSE);
	OnItemExpend(m_fileList,0,0);

	return TRUE;
}

BEGIN_MSG_MAP(MGImageView)
	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			MAP_COMMAND(ID_FILE_EXIT,OnExit)
			MAP_COMMAND(ID_HELP_ABOUT,OnAbout)
		END_COMMAND_MAP

		BEGIN_NOTIFY_MAP
			MAP_NOTIFY(TVN_DBLCLK,OnItemExpend)
			MAP_NOTIFY(TVN_ENTER,OnItemExpend)
			MAP_NOTIFY(TVN_SELCHANGE,OnItemSelChange)
			MAP_NOTIFY(ID_IMG_PREV,OnImgPrev)
			MAP_NOTIFY(ID_IMG_NEXT,OnImgNext)
			MAP_NOTIFY(ID_IMG_FULL,OnImgFull)
			MAP_NOTIFY(ID_IMG_SMALL,OnImgSmall)
			MAP_NOTIFY(ID_IMG_BIG,OnImgBig)
			//MAP_NOTIFY(LVN_SELCHANGE,OnFileSelChange)
		END_NOTIFY_MAP
	END_COMMAND
END_MSG_MAP

void MGImageView::OnItemExpend(HWND hCtrl, int notify_msg, int ctrlId)
{
	//printf("OnItemExpend\n");
	if(hCtrl==m_dirTree)
	{
		GHANDLE hItem =0;
		hItem = m_dirTree.GetSelItem();
		if(hItem==m_dirTree.GetRoot())
			return ;
		printf("\n");
		if(hItem)
		{
			if(m_dirTree.GetItemAddData(hItem)==0)
			{
				char szPath[MAX_PATH+1];
				int  idx;
				//m_dirTree.GetItemText(hItem,szPath);
				if(m_dirTree.GetPath(hItem,szPath,MAX_PATH)<=0)
					return ;
				//printf("%s\n",szPath);
				//printf("item:%d\n",hItem);
				idx = m_dirTree.InitDirItem(szPath,hItem);
				m_dirTree.SetItemAddData(hItem,idx+1);
			}
		}
	}else if(hCtrl==m_fileList)
	{
		char szpath[MAX_PATH+MAX_NAME+1];
		//printf("----------\n");
		if(m_fileList.GetCurFile(szpath,sizeof(szpath)))
		{
			//printf("img:%s\n",szpath);
			m_imgCtrl.SetImageFile(szpath);
			m_imgCtrl.InvalidateRect();
		}
	}
}

void MGImageView::OnItemSelChange(HWND hCtrl, int notify_msg, int ctrlId)
{
	//printf("OnItemSelChange\n");
	if(hCtrl==m_dirTree)
	{
		GHANDLE hItem;
		hItem = m_dirTree.GetSelItem();
		//printf("\n");
		if(hItem)
		{
			char szPath[MAX_PATH+1];
			if(m_dirTree.GetPath(hItem,szPath,hItem)<=0)
				return ;
			//printf("===%s\n",szPath);
			m_fileList.SetDir(szPath);
			m_fileList.SelectItem(0,0);
			goto SET_IMG_FILE;
		}
	}
	else if(hCtrl==m_fileList)
	{
SET_IMG_FILE:
		char szpath[MAX_PATH+MAX_NAME+1];
		//printf("----------\n");
		if(m_fileList.GetCurFile(szpath,sizeof(szpath)))
		{
			//printf("img:%s\n",szpath);
			m_imgCtrl.SetImageFile(szpath);
			m_imgCtrl.InvalidateRect();
		}
	}
}

void MGImageView::OnExit()
{
	PostQuitMessage();
	Destroy();
}

void MGImageView::OnAbout()
{
	const char * pstrAbout = "Image Viewer is a image view application base on MGFC. \n" \
		"MGFC is MiniGUI Foundation Calsses.";
	MGAboutDlg about(m_hWnd,NULL,"Image Viewer",pstrAbout);
	about.DoMode();
}

void MGImageView::OnImgPrev(HWND hCtrl,int notify_msg,int ctrlId)
{
	HLVITEM cur = m_fileList.GetSelectedItem();
	if(cur)
	{
		cur = m_fileList.GetPrevSlibingItem(cur);
		if(cur)
		{
			char szFile[MAX_PATH+MAX_NAME+1];
			m_fileList.SelectItem(0,cur);
			m_fileList.GetFile(cur,szFile,sizeof(szFile));
			m_imgCtrl.SetImageFile(szFile);
			m_imgCtrl.InvalidateRect();
		}
	}
}

void MGImageView::OnImgNext(HWND hCtrl,int notify_msg,int ctrlId)
{
	HLVITEM cur = m_fileList.GetSelectedItem();
	if(cur)
	{
		cur = m_fileList.GetNextSlibingItem(cur);
		if(cur)
		{
			char szFile[MAX_PATH+MAX_NAME+1];
			m_fileList.SelectItem(0,cur);
			m_fileList.GetFile(cur,szFile,sizeof(szFile));
			m_imgCtrl.SetImageFile(szFile);
			m_imgCtrl.InvalidateRect();
		}
	}	
}

void MGImageView::OnImgFull(HWND hCtrl,int notify_msg,int ctrlId)
{
	m_imgCtrl.ImageSize();
}

void MGImageView::OnImgSmall(HWND hCtrl,int notify_msg,int ctrlId)
{
	m_imgCtrl.ZoomIn();
}

void MGImageView::OnImgBig(HWND hCtrl,int notify_msg,int ctrlId)
{
	m_imgCtrl.ZoomOut();
}

//////////////////////////////////////////////////////////
// MGDirTree
MGDirTree::MGDirTree()
{
	memset(m_szPath,0,sizeof(m_szPath));
}

MGDirTree::~MGDirTree()
{

}

BOOL MGDirTree::SetDir(const char * pdir)
{
	GHANDLE hRoot = GetRoot();
	SetItemInfo(hRoot,"/");
	InitDirItem("/",hRoot);
	return FALSE;
}

int MGDirTree::InitDirItem(const char* strDir,GHANDLE hParent)
{
	struct   dirent* pDirEnt;
	DIR*     dir;
	struct   stat ftype;
	char     szpath[MAX_PATH+1];
	int      len;
	int idx=0;

	//printf("--%s\n",strDir);
	if(strDir==NULL)
		return idx;
	len=strlen(strDir);
	//printf("len:%d\n",len);
	if(len<=0)
		return idx;
	
	strcpy(szpath,strDir);
	
	if(szpath[len-1]!='/')
	{
		szpath[len++] = '/';
		szpath[len] = '\0';
	}
	//printf("---%s\n",szpath);
	dir = opendir(szpath);
	//printf("dir:%d\n",dir);
	if(dir==NULL)
		return idx;
	while((pDirEnt=readdir(dir))!=NULL)
	{
		if ( strcmp (pDirEnt->d_name, ".") == 0 || strcmp (pDirEnt->d_name, "..") == 0) 
		    continue;
		//printf("==%s\n",pDirEnt->d_name);
		strcpy(szpath+len,pDirEnt->d_name);
		if (stat (szpath, &ftype) < 0 )
		{
			continue;
		}
		// is directroy
		if (S_ISDIR (ftype.st_mode))
		{
			AddItem(hParent,pDirEnt->d_name,0);
			idx ++;
		}
	}
	closedir(dir);
	return idx;
}

int MGDirTree::GetPath(GHANDLE hItem,char* pdir,int nMax)
{
	char szName[MAX_NAME+1];
	int len=0;
	int i;
	int nlen;
	pdir[len] = 0;
	GetItemText(hItem,szName);
	//printf("%s\n",szName);
	//printf("Item:%d nMax:%d\n",hItem,nMax);
	while(hItem && hItem!=GetRoot() && len<nMax)
	{
		nlen = GetItemText(hItem,szName);
		//printf("***%d:%s\n",nlen,szName);
		if(nlen<=0)
			break;
		for(i=len-1;i>=0;i--)
		{
			pdir[i+nlen+1]=pdir[i];
		}
		pdir[nlen] = '/';
		for(i=0;i<nlen;i++)
			pdir[i] = szName[i];
		len += (nlen+1);
		hItem = GetParentItem(hItem);
	}
	nlen = GetItemText(hItem,szName);
	//printf("***Root:%d=%s\n",nlen,szName);
	for(i=len-1;i>=0;i--)
	{
		pdir[i+nlen]=pdir[i];
	}
	for(i=0;i<nlen;i++)
		pdir[i]=szName[i];
	len += nlen;
	pdir[len] = '\0';
	return len;
}

///////////////////////////////////////////////////////////////////////////////////////////
MGFileList::MGFileList()
{
	m_szPath[0]='\0';
}

MGFileList::~MGFileList()
{

}

BOOL MGFileList::SetDir(const char * pdir)
{
	struct   dirent* pDirEnt;
	DIR*     dir;
	struct   stat ftype;
	char     szpath[MAX_PATH+1];
	int      len;
	int      idx=0;

	if(pdir==NULL)
		return FALSE;
	len=strlen(pdir);
	//printf("len:%d\n",len);
	if(len<=0)
		return FALSE;
	strcpy(szpath,pdir);
	if(szpath[len-1]!='/')
	{
		szpath[len++] = '/';
		szpath[len] = '\0';
	}
	//printf("%s\n",szpath);
	dir = opendir(szpath);
	if(dir==NULL)
		return FALSE;
	DeleteAllItem();
	while((pDirEnt=readdir(dir))!=NULL)
	{
		//printf("---%s\n",pDirEnt->d_name);
		if ( strcmp (pDirEnt->d_name, ".") == 0 || strcmp (pDirEnt->d_name, "..") == 0) 
		    continue;
		
		strcpy(szpath+len,pDirEnt->d_name);
		if (stat (szpath, &ftype) < 0 )
		{
			continue;
		}
		// is directroy
		if (S_ISDIR (ftype.st_mode))
		{
			continue;
		}

		const char*pext = strrchr(pDirEnt->d_name,'.');
		if(pext==NULL)
			continue;

		pext ++;
		for(int i=0;imag_support_files[i];i++)
		{
			//printf("strmcp %s==%s\n",imag_support_files[i],pext);
			if(strcasecmp(imag_support_files[i],pext)==0)
			{
				HLVITEM hlvItem = AddItem((HLVITEM)NULL,idx++,28,0);
				if(hlvItem)
				{
					char buffer[16];
					SetSubitemText(hlvItem,0,pDirEnt->d_name);
					sprintf(buffer,"%d",ftype.st_size);
					SetSubitemText(hlvItem,1,buffer);
					SetSubitemText(hlvItem,2,ctime(&ftype.st_mtime));
				}
				break;
			}
		}
	}
	closedir(dir);
	szpath[len] = '\0';
	strcpy(m_szPath,szpath);
	return TRUE;
}

BOOL MGFileList::GetFile(HLVITEM pi, char * pfile, int nMax)
{
	char szFileName[MAX_NAME];
	if(!pi || pfile==NULL || nMax<=0)
		return FALSE;
	GetSubitemText(pi,0,szFileName,sizeof(szFileName));
	sprintf(pfile,"%s%s",m_szPath,szFileName);
	return TRUE;
}

///////////////////////////////////////////////////
MGImageCtrl::MGImageCtrl()
{
	m_zoom    = 100;
	//m_dwFlags = 0;
}

MGImageCtrl::~MGImageCtrl()
{

}

BOOL MGImageCtrl::SetImageFile(const char* file)
{
	if(m_img.Load(file))
	{
		UpdateScrollBar();
		return TRUE;
	}
	return FALSE;
}

void MGImageCtrl::ZoomIn()
{
	if(m_zoom>100)
		m_zoom -= 100;
	else if(m_zoom>25)
		m_zoom /= 2;
	else
		return ;
	if(m_zoom<25) 
		m_zoom = 25;
	//printf("Zoom:%d\n",m_zoom);
	UpdateScrollBar();
	InvalidateRect();
}

void MGImageCtrl::ZoomOut()
{
	if(m_zoom>1000)
		return;
	else if(m_zoom>100)
		m_zoom += 100;
	else
		m_zoom *= 2;
	if(m_zoom>1000)
		m_zoom = 1000;
	//printf("Zoom:%d\n",m_zoom);
	UpdateScrollBar();
	InvalidateRect();
}

void MGImageCtrl::ImageSize()
{
	if(m_zoom!=100)
		m_zoom = 100;
	else
		return;
	UpdateScrollBar();
	InvalidateRect();
}

BEGIN_MSG_MAP(MGImageCtrl)
	MAP_PAINT(OnPaint)
	MAP_HSCROLL(OnHScroll)
	MAP_VSCROLL(OnVScroll)
END_MSG_MAP

void MGImageCtrl::OnPaint(HDC hdc)
{
	MGDC dc(hdc);
	int  x,y;
	int  w,h;
	MGRect rcClient;
	//GetWindowRect(&rcClient);
	//printf("[%d,%d,%d,%d]\n",rcClient.left,rcClient.top,rcClient.right,rcClient.bottom);

	GetClientRect(&rcClient);
	//dc.textOut(100,100,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	
	w = m_img.getWidth() * m_zoom / 100;
	h = m_img.getHeight() * m_zoom / 100;
	x = rcClient.left + (rcClient.Width()-w) / 2;
	y = rcClient.top + (rcClient.Height()-h) / 2;
	if(x<0)
		x = -GetScrollPos(SB_HORZ);
	if(y<0)
		y = -GetScrollPos(SB_VERT);

	m_img.Draw(&dc,x,y,w,h);
}

void MGImageCtrl::UpdateScrollWnd(int newXPos,int newYPos,DWORD dwFlag)
{
	InvalidateRect();
}

void MGImageCtrl::UpdateScrollBar()
{
	int w,h;
	MGRect rt;
	w = m_img.getWidth();
	h = m_img.getHeight();
	if(w<=0 || h<=0)
		return;
	GetClientRect(&rt);
	UpdateScroll(SB_HORZ,w*m_zoom/100,rt.Width(),TRUE);
	UpdateScroll(SB_VERT,h*m_zoom/100,rt.Height(),TRUE);
}

/////////////////////////////////////////////////////////////////////////////////////
// main

#ifdef _MISC_MOUSECALIBRATE1
static void mouse_calibrate(void)
{
	POINT src_pts[5] = {{5,10},{600,20},{620,450},{20,470},{310,234}};
	POINT dst_pts[5] = {{0,0},{639,0},{639,479},{0,479},{320,240}};
	
	SetMouseCalibrationParameters(src_pts,dst_pts);
}
#endif
/*
int MiniGUIMain(int args, const char* argv[])
{
	MSG msg;
	MGImageView mainWnd;

	#ifdef _MISC_MOUSECALIBRATE1
	mouse_calibrate();
	#endif

	if(!InitMiniGUIExt())
		return 0;
	
	MGImageCtrl::Register();

	mainWnd.Create();
	
	while(GetMessage(&msg,mainWnd)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	MainWindowThreadCleanup(mainWnd.Detach());

	MiniGUIExtCleanUp();
}*/
MGWndMainInitFunc(MGImageView,MGImageCtrl::Register())

//////////////////////////////////////////////////////////////////////////////////////
