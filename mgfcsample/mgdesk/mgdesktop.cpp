#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "desktop.h"
#include <minigui/newfiledlg.h>

ServerMain(MGDesktopApp)
/*int MiniGUIAppMain (int args, const char* argv[]); 
int main (int args, const char* argv[]) { int
iRet = 0; 
	if (InitGUI (args, argv) != 0) { return 1; } 
	iRet = MiniGUIAppMain (args, argv); 
	TerminateGUI (iRet); return iRet; } 

int MiniGUIAppMain(int argc,const char* argv[]) { 
	MGDesktopApp ServerApp; 
	if(!ServerApp.InitServer()) return -1; 
	return MGMainLoop(__mg_hwnd_desktop); 
}*/

BOOL MGDesktopApp::InitServer(int nr_globals/*=0*/,int def_nr_topmosts/*=0*/,int def_nr_normals/*=0*/)
{
	BOOL bret;
	if(!MGServerApp::InitServer(nr_globals,def_nr_topmosts,def_nr_normals))
		return FALSE;
	bret = m_taskBar.Create();
	if(!bret)
		return FALSE;
	m_taskBar.UpdateWindow();
	m_taskBar.ShowWindow();
	return bret;
}

BOOL MGDesktopApp::OnNewClient(MGClient* pClient)
{
	printf("----- new client ----\n");
	return TRUE;
}
BOOL MGDesktopApp::OnDeleteClient(MGClient* pClient)
{
	printf("--- delete client ---\n");
	return TRUE;
}

BOOL MGDesktopApp::OnJoinClient(MGLayer* pLayer,MGClient *pClient)
{
	printf("---join client--\n");
	return TRUE;
}

BOOL MGDesktopApp::OnRemoveClient(MGLayer* pLayer,MGClient *pClient)
{
	printf("--- remove client --\n");
	return TRUE;
}

BOOL MGDesktopApp::OnTopMostChanged(MGLayer* pLayer,MGClient *pClient)
{
	printf(" --- OnTopMosetChanged ---\n");
	return TRUE;
}

BOOL MGDesktopApp::OnActiveChanged(MGLayer* pLayer,MGClient *pClient)
{
	printf("-- onActiveChanged ---\n");
	return TRUE;
}

BOOL MGDesktopApp::OnNewLayer(MGLayer *pLayer,MGClient *pClient)
{
	printf("-- OnNewLayer --\n");
	return TRUE;
}

BOOL MGDesktopApp::OnDeleteLayer(MGLayer *pLayer,MGClient *pClient)
{
	printf("--- OnDeleteLayer--\n");
	return TRUE;
}

/////////////////////////////////////////////
// MGTaskBar
BOOL MGTaskBar::Create()
{
	BOOL bret;
//	printf("%d,%d,%d,%d\n",0,g_rcScr.bottom-HEIGHT_TASKBAR,g_rcScr.right,HEIGHT_TASKBAR);
	bret = MGMainWnd::Create(WS_VISIBLE|WS_ABSSCRPOS,
		"",
		0,
		g_rcScr.bottom-HEIGHT_TASKBAR,
		g_rcScr.right,
		g_rcScr.bottom,
		HWND_DESKTOP,
		(HCURSOR)0,
		(HMENU)0,
		(HICON)0,
		COLOR_lightgray,
		WS_EX_TOOLWINDOW);

//	printf("hwnd:%d,visible:%s\n",m_hWnd,IsVisible()?"true":"false");
	if(!bret)
		return FALSE;
	
	//create time show control
	m_time.Create("",m_hWnd, 
	 g_rcScr.right-_WIDTH_TIME,
         _MARGIN,
	 _WIDTH_TIME,
         _HEIGHT_CTRL,
         WS_CHILD | WS_BORDER | WS_VISIBLE | SS_CENTER);

	//create start buttom 
	m_btnStart.Create("Start",m_hWnd,
		_MARGIN,_MARGIN,
		60+_MARGIN,_HEIGHT_CTRL,
		WS_CHILD | WS_VISIBLE,
		0,IDC_START);
	//create application bar
	/*m_appBars.Create("",m_hWnd,
		_MARGIN*2+60,_MARGIN,
		g_rcScr.right-_WIDTH_TIME-_MARGIN*2,
		HEIGHT_TASKBAR,
		WS_CHILD | WS_VISIBLE);
	*/
	SetTimer(1,100);
	return TRUE;	
}

BEGIN_MSG_MAP(MGTaskBar)
	MAP_MAINCREATE(OnMainCreate)
	MAP_CLOSE(OnClose)
	MAP_TIMER(OnTimer)
	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			MAP_COMMAND_RANGE(BEGIN_CLIENT_BUTTON,END_CLIENT_BUTTON,OnClientButton)
			MAP_COMMAND(IDC_START,OnStart)
			MAP_COMMAND(IDC_EXIT,OnExit)
			MAP_COMMAND(IDC_RUN,OnRun)
		END_COMMAND_MAP
	END_COMMAND
END_MSG_MAP

/////////////////////////////////
// start menu
static MENUITEMTEMPLATE _start_menus[]={
	{IDC_RUN,MFS_ENABLED,"Run      ",NULL},
	{IDC_EXIT,MFS_ENABLED,"Exit    ",NULL}
};
static POPMENUTEMPLATE _start_menu_pop={
	"",
	sizeof(_start_menus)/sizeof(MENUITEMTEMPLATE),
	_start_menus
};

BOOL MGTaskBar::OnMainCreate(PMAINWINCREATE create_info)
{
	m_startMenu.LoadPopupMenu(&_start_menu_pop);
	m_startMenu.StripPopupHead();
	return TRUE;
}

void MGTaskBar::OnTimer(int timer_id)
{
	char buff[100];
	time_t tim = time(NULL);
	struct tm* cm = localtime(&tim);
	sprintf(buff,"%2d:%2d",cm->tm_hour,cm->tm_min);
	m_time.SetWindowText(buff);
}

void MGTaskBar::OnClose()
{
	KillTimer(1);
}

void MGTaskBar::OnClientButton(int buttonId)
{
	
}

void MGTaskBar::OnStart()
{
	m_startMenu.TrackPopupMenu(_MARGIN,
		g_rcScr.bottom-HEIGHT_TASKBAR+_MARGIN,
		m_hWnd,
		TPM_LEFTALIGN|TPM_BOTTOMALIGN
	);
}

void MGTaskBar::OnExit()
{
	PostQuitMessage();
}

//mg run
#define RUNDLG_WIDTH  300
#define RUNDLG_HEIGHT 160 
#define IDC_RUN_COMBOX 5001
#define IDC_RUN_MORE   5002
static CTRLDATA rundlgCtrls[] = {
	{
		"static",
		WS_VISIBLE|SS_LEFT,
		10,10,RUNDLG_WIDTH-10,50,
		-1,
		"Please input the application names, MGFC will open it",
		0
	},
	{
		"static",
		WS_VISIBLE|SS_LEFT,
		10,60,40,24,
		-1,
		"Open: ",
		0
	},
	{
		"combobox",
		WS_VISIBLE|CBS_DROPDOWNLIST | CBS_NOTIFY,
		60,60, RUNDLG_WIDTH-120,24,
		IDC_RUN_COMBOX,
		"",
		0
	},
	{
		"button",
		WS_VISIBLE|WS_CHILD,
		RUNDLG_WIDTH-55,60,40,24,
		IDC_RUN_MORE,
		"...",
		0
	},
	{
		"button",
		WS_VISIBLE|WS_CHILD|BS_DEFPUSHBUTTON,
		100,100,60,24,
		IDOK,
		"OK",
		0
	},
	{
		"button",
		WS_VISIBLE|WS_CHILD,
		200,100,60,24,
		IDCANCEL,
		"Cancel",
		0
	}	
};
static DLGTEMPLATE rundlgTmp = {
	WS_VISIBLE|WS_BORDER|WS_CAPTION,
	WS_EX_NONE,
	0,0,//g_rcScr.bottom-RUNDLG_HEIGHT-HEIGHT_TASKBAR,
	RUNDLG_WIDTH,RUNDLG_HEIGHT,
	"Run Application",
	0,0,
	sizeof(rundlgCtrls)/sizeof(CTRLDATA),
	rundlgCtrls,
	0	
};

class MGRunDlg:public MGMainWnd
{
public:
	MGRunDlg(){
		m_strFile = NULL;
	}
	~MGRunDlg(){
		if(m_strFile)
			free(m_strFile);
	}
	BOOL Create(HWND hParent){ return MGMainWnd::Create(hParent,&rundlgTmp); }
	DECLARE_MSG_MAP;
	char *m_strFile;
protected:
	BOOL OnMainCreate(PMAINWINCREATE create_info)
	{
		return TRUE;
	}
	void OnOK(){
		m_strFile = GetChildText(IDC_RUN_COMBOX,NULL);
	}
	void OnCancel(){
		m_strFile = NULL;
	}
	void OnBrowser(){
	        NEWFILEDLGDATA  nfd;
        	memset(&nfd,0,sizeof(nfd));
	        nfd.IsSave = 0;
        	strcpy(nfd.filter,"All(*.*)");
	        //strFilePath = strrchr(m_lastFillPath,'/');
        	//strncpy(nfd.filepath,m_lastFillPath,strFilePath?(strFilePath-m_lastFillPath+1):strlen(m_lastFillPath));
		strcpy(nfd.filepath,".");
       		if(ShowOpenDialog(m_hWnd,10,10,320,240,&nfd)==IDOK)
		{
			SetChildText(IDC_RUN_COMBOX,nfd.filefullname);
		}
	}
};
BEGIN_MSG_MAP(MGRunDlg)
	MAP_MAINCREATE(OnMainCreate)
	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			MAP_COMMAND(IDC_RUN_MORE,OnBrowser)
			MAP_COMMAND(IDOK,OnOK)
			MAP_COMMAND(IDCANCEL,OnCancel)
		END_COMMAND_MAP
	END_COMMAND
END_MSG_MAP

void MGTaskBar::OnRun()
{
	MGRunDlg dlg;
	dlg.Create(m_hWnd);
	dlg.DoMode();
	//dlg.ShowWindow();
}

////////////////////////////////////////////////////////////
//MGTaskBtn

MGMainWnd* MGTaskBtn::_pTaskBar=NULL;
MGRect MGTaskBtn::_rtTaskBtns(0,0,0,0);
int  MGTaskBtn::_btnHeight=0;

void MGTaskBtn::InitTaskBtns(MGMainWnd *pMainWnd,const RECT* rt,int btnHeight)
{
	_pTaskBar = pMainWnd;
	if(rt) _rtTaskBtns = *rt;
	_btnHeight = btnHeight;
}

MGTaskBtn::MGTaskBtn(MGClient *client,int cliCount)
{
	if(client==NULL)
		throw("client is null\n");
	if(cliCount<=0)
		throw("invalidate client count\n");

	Create(client->name,_pTaskBar->GetHandle(),
			0,0,0,0,
			WS_CHILD|WS_VISIBLE|BS_CHECKBOX|BS_PUSHLIKE|BS_CENTER);
	AdjustBox((MGClient*)mgClients,cliCount);
}

MGTaskBtn::~MGTaskBtn()
{
}

void MGTaskBtn::AdjustBox(MGClient* pClients,int newcliCount)
{
	if(newcliCount<=0 || pClients==NULL)
		return ;

//	int boxwidth = 
}

