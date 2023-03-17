
#include <stdio.h>
#include <string.h>
#include "mgwnd.h"
#include "mgctrl.h"
#include "mggdi.h"
#include "mgwndhlp.h"
#include "mgapp.h"
#include <minigui/newfiledlg.h>
#include <time.h>

#define LANG_ENG   0
#define LANG   LANG_ENG

#define IDM_FILE_NEW      101
#define IDM_FILE_OPEN     102
#define IDM_FILE_SAVE     103
#define IDM_FILE_SAVE_AS  104
#define IDM_FILE_PRINT    105
#define IDM_FILE_EXIT     106

#define IDM_EDIT_UNDO     201
#define IDM_EDIT_COPY     202
#define IDM_EDIT_CUT      203
#define IDM_EDIT_PASTE    204
#define IDM_EDIT_DELETE   205
#define IDM_EDIT_SELECT_ALL   206
#define IDM_EDIT_INSERT_TIME  207
#define IDM_EDIT_AUTO_SPERATE 208

#define IDM_SEARCH_FIND     301
#define IDM_SEARCH_REPLACE  302

#define IDM_HELP_ABOUT      303

#if LANG == LANG_ENG

#define S_MAIN_CAPTION     "Notepad"

#define S_FILE              "File"
#define S_FILE_NEW          "New            "
#define S_FILE_OPEN         "Open           "
#define S_FILE_SAVE         "Save           "
#define S_FILE_SAVE_AS      "Save As        "
#define S_FILE_PRINT        "Print          "
#define S_FILE_EXIT         "Exit           "

#define S_EDIT              "Edit"
#define S_EDIT_UNDO         "Undo           "
#define S_EDIT_COPY         "Copy           "
#define S_EDIT_CUT          "Cut            "
#define S_EDIT_PASTE        "Paste          "
#define S_EDIT_DELETE       "Delete         "
#define S_EDIT_SELECT_ALL   "Select All     "
#define S_EDIT_INSERT_TIME  "Insert Time    "
#define S_EDIT_AUTO_SPERATE "Auto Sperate   "

#define S_SEARCH            "Search"
#define S_SEARCH_FIND       "Find           "
#define S_SEARCH_REPLACE    "Replace        "

#define S_HELP              "Help"
#define S_HELP_ABOUT        "About          "

#define S_MSGBOX_WARNNING   "Warnning"
#define S_MSGBOX_SAVE       "The Text is modified, Do you Want to Save?"
#define S_MSGBOX_ERROR      "Error"
#define S_MSGBOX_OPEN_ERROR "Cannot open the file \"%s\"."
#define S_MSGBOX_ALLOC_MEM  "Cannot alloc the Memory."

#define S_MSGBOX_NOT_FIND   "Cannot find string \"%s\"."

#define S_ABOUT_CAPTION     "MGFC Notepad"
#define S_ABOUT_INFO        "MGFC Notepad is the Applaction based on MiniGUI Foundation Classes\n" \
								"MGFC is a seriale classes of MiniGUI."

#endif

#ifdef _MISC_MOUSECALIBRATE
static void mouse_calibrate(void)
{
	POINT src_pts[5] = {{5,10},{600,20},{620,450},{20,470},{310,234}};
	POINT dst_pts[5] = {{0,0},{639,0},{639,479},{0,479},{320,240}};
	
	SetMouseCalibrationParameters(src_pts,dst_pts);
}
#endif


class Notepad:public MGMainWnd
{
public:
	Notepad();
	~Notepad();

	BOOL Create();

	DECLARE_MSG_MAP;

protected:
	void OnActive();
	BOOL OnSize(PRECT prcWin,PRECT prcClient);

	void OnFileNew();
	void OnFileOpen();
	void OnFileSave();
	void OnFileSaveAs();
	void OnFilePrint();
	void OnFileExit();

	void OnEditUndo();
	void OnEditCopy();
	void OnEditCut();
	void OnEditPaste();
	void OnEditDelete();
	void OnEditSelectAll();
	void OnEditInsertTime();
	void OnEditAutoSperate();

	void OnSearchFind();
	void OnSearchReplace();

	void OnHelpAbout();

	BOOL OnFindReplace(WPARAM wParam,LPARAM lParam,int *pret);

	void OnEditChange(HWND hCtrl,int code,int ctrlId);
	
private:
	MGEdit m_mgEdit;
	MGMenu m_mainMenu;
	char   m_lastFillPath[MY_PATHMAX + MY_NAMEMAX + 1];
	BOOL   m_isModified;
	MGFindReplaceDlg m_findReplace;

	BOOL   SaveUpdate();

	BOOL   LoadFile();
	BOOL   SaveFile();
	

	static MENUBARTEMPLATE  _menubar;
	static MENUITEMTEMPLATE _menuItems[];
	
	static POPMENUTEMPLATE  _pop_file_menu;
	static MENUITEMTEMPLATE _file_items[];

	static POPMENUTEMPLATE  _pop_edit_menu;
	static MENUITEMTEMPLATE _edit_items[];

	static POPMENUTEMPLATE  _pop_search_menu;
	static MENUITEMTEMPLATE _search_items[];

	static POPMENUTEMPLATE  _pop_help_menu;
	static MENUITEMTEMPLATE _help_items[];
};
/*
int MiniGUIMain(int args, const char* argv[])
{
	MSG msg;
	Notepad mainWnd;

	#ifdef _MISC_MOUSECALIBRATE
	mouse_calibrate();
	#endif

	if(!InitMiniGUIExt())
		return 0;

	mainWnd.Create();
	
	while(GetMessage(&msg,mainWnd)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	MainWindowThreadCleanup(mainWnd.Detach());

	MiniGUIExtCleanUp();
}*/
MGWndMain(Notepad)


// main wnd resource
MENUITEMTEMPLATE Notepad::_menuItems[] = {
	{0,	MFS_ENABLED,S_FILE,&Notepad::_pop_file_menu},
	{0,	MFS_ENABLED,S_EDIT,&Notepad::_pop_edit_menu},
	{0,	MFS_ENABLED,S_SEARCH,&Notepad::_pop_search_menu},
	{0,	MFS_ENABLED,S_HELP,&Notepad::_pop_help_menu}
};
MENUBARTEMPLATE Notepad::_menubar={
	sizeof(Notepad::_menuItems)/sizeof(MENUITEMTEMPLATE),
	Notepad::_menuItems
};


MENUITEMTEMPLATE Notepad::_file_items[]=
{
	{IDM_FILE_NEW,MFS_ENABLED,S_FILE_NEW,NULL},
	{IDM_FILE_OPEN,MFS_ENABLED,S_FILE_OPEN,NULL},
	{-1, /*seprate */MFS_ENABLED,NULL,NULL},
	{IDM_FILE_SAVE,MFS_ENABLED,S_FILE_SAVE,NULL},
	{IDM_FILE_SAVE_AS,MFS_ENABLED,S_FILE_SAVE_AS,NULL},
	{-1,0,NULL,NULL},
	{IDM_FILE_PRINT,MFS_ENABLED,S_FILE_PRINT,NULL},
	{-1,0,NULL,NULL},
	{IDM_FILE_EXIT,MFS_ENABLED,S_FILE_EXIT,NULL}
};
POPMENUTEMPLATE  Notepad::_pop_file_menu={
	S_FILE,
	sizeof(Notepad::_file_items)/sizeof(MENUITEMTEMPLATE),
	Notepad::_file_items
};

MENUITEMTEMPLATE Notepad::_edit_items[]={
	{IDM_EDIT_UNDO,MFS_ENABLED,S_EDIT_UNDO,NULL},
	{-1,0,NULL,NULL},
	{IDM_EDIT_COPY,MFS_ENABLED,S_EDIT_COPY,NULL},
	{IDM_EDIT_CUT,MFS_ENABLED,S_EDIT_CUT,NULL},
	{IDM_EDIT_PASTE,MFS_ENABLED,S_EDIT_PASTE,NULL},
	{IDM_EDIT_DELETE,MFS_ENABLED,S_EDIT_DELETE,NULL},
	{-1,0,NULL,NULL},
	{IDM_EDIT_SELECT_ALL,MFS_ENABLED,S_EDIT_SELECT_ALL,NULL},
	{IDM_EDIT_INSERT_TIME,MFS_ENABLED,S_EDIT_INSERT_TIME,NULL},
	{IDM_EDIT_AUTO_SPERATE,MFS_ENABLED,S_EDIT_AUTO_SPERATE,NULL}
};
POPMENUTEMPLATE  Notepad::_pop_edit_menu={
	S_EDIT,
	sizeof(Notepad::_edit_items)/sizeof(MENUITEMTEMPLATE),
	Notepad::_edit_items
};

MENUITEMTEMPLATE Notepad::_search_items[]={
	{IDM_SEARCH_FIND,MFS_ENABLED,S_SEARCH_FIND,NULL},
	{IDM_SEARCH_REPLACE,MFS_ENABLED,S_SEARCH_REPLACE,NULL}
};
POPMENUTEMPLATE  Notepad::_pop_search_menu={
	S_SEARCH,
	sizeof(Notepad::_search_items)/sizeof(MENUITEMTEMPLATE),
	Notepad::_search_items
};

MENUITEMTEMPLATE Notepad::_help_items[]={
	{IDM_HELP_ABOUT,MFS_ENABLED,S_HELP_ABOUT}
};
POPMENUTEMPLATE  Notepad::_pop_help_menu={
	S_HELP,
	sizeof(Notepad::_help_items)/sizeof(MENUITEMTEMPLATE),
	Notepad::_help_items
};

/////////////////////////////////////////////////////////////////////
Notepad::Notepad()
{
}

Notepad::~Notepad()
{
}

BOOL Notepad::Create()
{
	BOOL bret;
	MGRect rt;

	//create main menu
	bret = m_mainMenu.LoadMenuBar(&_menubar);
	if(bret==FALSE) return bret;
	
	//create main window
	bret = MGMainWnd::Create(WS_VISIBLE|WS_BORDER|WS_CAPTION,S_MAIN_CAPTION,0,0,g_rcScr.right,g_rcScr.bottom,HWND_DESKTOP,(HCURSOR)0,m_mainMenu);
	if(bret==FALSE) return bret;

	GetClientRect(&rt);
	//create Edit Control
	bret = m_mgEdit.Create(m_hWnd,0,0,rt.Width(),rt.Height(),WS_VISIBLE|ES_MULTILINE|ES_LEFT|ES_AUTOVSCROLL,0,0);

	if(!bret)
		return FALSE;

	m_findReplace.Create(m_hWnd,NULL);

	getcwd(m_lastFillPath,sizeof(m_lastFillPath));

	m_isModified = FALSE;

	return bret;
}

BEGIN_MSG_MAP(Notepad)
	MAP_ACTIVE(OnActive)
	MAP_SIZECHANGED(OnSize)
	MAP_MESSAGE(MSG_FR_FINDREPLACE,OnFindReplace)

	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			//File
			MAP_COMMAND(IDM_FILE_NEW,OnFileNew)
			MAP_COMMAND(IDM_FILE_OPEN,OnFileOpen)
			MAP_COMMAND(IDM_FILE_SAVE,OnFileSave)
			MAP_COMMAND(IDM_FILE_SAVE_AS,OnFileSaveAs)
			MAP_COMMAND(IDM_FILE_PRINT,OnFilePrint)
			MAP_COMMAND(IDM_FILE_EXIT,OnFileExit)
			//Edit
			MAP_COMMAND(IDM_EDIT_UNDO,OnEditUndo)
			MAP_COMMAND(IDM_EDIT_COPY,OnEditCopy)
			MAP_COMMAND(IDM_EDIT_CUT,OnEditCut)
			MAP_COMMAND(IDM_EDIT_PASTE,OnEditPaste)
			MAP_COMMAND(IDM_EDIT_DELETE,OnEditDelete)
			MAP_COMMAND(IDM_EDIT_SELECT_ALL,OnEditSelectAll)
			MAP_COMMAND(IDM_EDIT_INSERT_TIME,OnEditInsertTime)
			MAP_COMMAND(IDM_EDIT_AUTO_SPERATE,OnEditAutoSperate)
			//search
			MAP_COMMAND(IDM_SEARCH_FIND,OnSearchFind)
			MAP_COMMAND(IDM_SEARCH_REPLACE,OnSearchReplace)
			//about
			MAP_COMMAND(IDM_HELP_ABOUT,OnHelpAbout)
		END_COMMAND_MAP

		BEGIN_NOTIFY_MAP
			MAP_NOTIFY(EN_CHANGE,OnEditChange)
		END_NOTIFY_MAP
	END_COMMAND

END_MSG_MAP

BOOL Notepad::SaveUpdate()
{
	if(m_isModified)
	{
		int ret = YesNoCancelBox(S_MSGBOX_WARNNING,S_MSGBOX_SAVE);
		if(ret==IDOK)
		{
			OnFileSave();
		}
		else if(ret==IDCANCEL)
		{
			return FALSE;
		}
	}
	m_isModified = FALSE;
	return TRUE;
}

BOOL Notepad::LoadFile()
{
	FILE *f;
	int   fileLeng;
	char *strText;
	f = fopen(m_lastFillPath,"rt");
	if(f==NULL)
	{
		MessageBox(S_MSGBOX_ERROR,MB_OK|MB_ICONINFORMATION,S_MSGBOX_OPEN_ERROR,m_lastFillPath);
		return FALSE;
	}
	fseek(f,0,SEEK_END);
	fileLeng = ftell(f);
	if(fileLeng<=0)
	{
		m_mgEdit.SetWindowText("");
		fclose(f);
		return TRUE;
	}

	strText = new char[fileLeng+1];
	if(strText==NULL)
	{
		MessageBox(S_MSGBOX_ERROR,MB_OK|MB_ICONINFORMATION,S_MSGBOX_ALLOC_MEM);
		fclose(f);
		return FALSE;
	}

	fseek(f,0,SEEK_SET);
	fread(strText,1,fileLeng,f);
	strText[fileLeng] = '\0';
	fclose(f);

	m_mgEdit.SetWindowText(strText);
	delete[] strText;
	
	return TRUE;
}

BOOL Notepad::SaveFile()
{
	FILE *f;
	char *szText;
	int   flen;
	f = fopen(m_lastFillPath,"wt");
	if(f==NULL)
	{
		MessageBox(S_MSGBOX_ERROR,MB_OK|MB_ICONINFORMATION,S_MSGBOX_OPEN_ERROR,m_lastFillPath);
		return FALSE;
	}

	szText = m_mgEdit.GetWindowText(&flen);
	if(szText)
	{
		fwrite(szText,1,flen,f);
	}
	fclose(f);
	return TRUE;
}


void Notepad::OnActive()
{
	m_mgEdit.Focus();
}

BOOL Notepad::OnSize(PRECT prcWin,PRECT prcClient)
{
	m_mgEdit.MoveWindow(0,0,prcClient->right-prcClient->left,prcClient->bottom-prcClient->top,FALSE);
	return FALSE;
}

void Notepad::OnFileNew()
{
	if(!SaveUpdate()) return ;
	m_mgEdit.SetWindowText("");
}

void Notepad::OnFileOpen()
{
	NEWFILEDLGDATA  nfd;
	const char* strFilePath;

	if(!SaveUpdate()) return ;
	
	memset(&nfd,0,sizeof(nfd));
	nfd.IsSave = 0;
	strcpy(nfd.filter,"All(*.*) | TextFile(*.txt)");
	strFilePath = strrchr(m_lastFillPath,'/');
	strncpy(nfd.filepath,m_lastFillPath,strFilePath?(strFilePath-m_lastFillPath+1):strlen(m_lastFillPath));

	if(ShowOpenDialog(m_hWnd,10,10,320,240,&nfd)==IDOK)
	{
		strcpy(m_lastFillPath,nfd.filefullname);
		//printf("get file:%s\n",m_lastFillPath);
		LoadFile();
	}
}
void Notepad::OnFileSave()
{
	if(m_isModified)
	{
		NEWFILEDLGDATA  nfd;
		const char * strFilePath;
		nfd.IsSave = TRUE;
		strcpy(nfd.filter,"All(*.*) | TextFile(*.txt)");
		strFilePath = strrchr(m_lastFillPath,'/');
		strncpy(nfd.filepath,m_lastFillPath,strFilePath?(strFilePath-m_lastFillPath+1):strlen(m_lastFillPath));
		if(ShowOpenDialog(m_hWnd,10,10,320,240,&nfd)==IDOK)
		{
			strcpy(m_lastFillPath,nfd.filefullname);
			SaveFile();
		}		
	}
	m_isModified = FALSE;
}
void Notepad::OnFileSaveAs()
{
	m_isModified = TRUE;
	OnFileSave();
}
void Notepad::OnFilePrint()
{
	
}
void Notepad::OnFileExit()
{
	PostQuitMessage();
	Destroy();
}

void Notepad::OnEditUndo()
{
	m_mgEdit.Undo();
}
void Notepad::OnEditCopy()
{
	m_mgEdit.Copy();
}
void Notepad::OnEditCut()
{
	m_mgEdit.Cut();
}
void Notepad::OnEditPaste()
{
	m_mgEdit.Paste();
}
void Notepad::OnEditDelete()
{
	m_mgEdit.InsertText("",1);
}
void Notepad::OnEditSelectAll()
{
	m_mgEdit.SelectAll();
}
void Notepad::OnEditInsertTime()
{
	time_t  t = time(NULL);
	m_mgEdit.InsertText(ctime(&t));
}
void Notepad::OnEditAutoSperate()
{
	
}

void Notepad::OnSearchFind()
{
	m_findReplace.ShowFind();
}
void Notepad::OnSearchReplace()
{
	m_findReplace.ShowReplace();
}

void Notepad::OnHelpAbout()
{
	MGAboutDlg aboutDlg(m_hWnd,(PDLGTEMPLATE)NULL,S_ABOUT_CAPTION,S_ABOUT_INFO);
	aboutDlg.DoMode();
}

void Notepad::OnEditChange(HWND hCtrl,int code,int ctrlId)
{
	m_isModified = TRUE;
}

BOOL Notepad::OnFindReplace(WPARAM wParam, LPARAM lParam, int * pret)
{
	FIND_REPLACE_INFO *pfri=(FIND_REPLACE_INFO*)lParam;
	BOOL fDown = (pfri->flag&FRF_UP)?FALSE:TRUE;
	BOOL fCaps = (pfri->flag&FRF_CAP)?TRUE:FALSE;
	int  ret = 0;
	if(pfri->flag&FRF_REPLACE)
		ret = m_mgEdit.Replace(pfri->pFind,pfri->pReplace,fDown,fCaps);
	else if(pfri->flag&FRF_REPLACEALL)
		m_mgEdit.ReplaceAll(pfri->pFind,pfri->pReplace,fCaps);
	else
		ret = m_mgEdit.Find(pfri->pFind,fDown,fCaps);

	if(ret<0)
	{	
		m_findReplace.ShowWindow(SW_HIDE);
		InfoBox(S_MSGBOX_WARNNING,S_MSGBOX_NOT_FIND,pfri->pFind);
		m_findReplace.ShowWindow(SW_SHOWNORMAL);
	}
	
	return FALSE;
}

