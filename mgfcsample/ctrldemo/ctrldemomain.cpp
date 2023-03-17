
#include "ctrldemo.h"


// menu resource
MENUITEMTEMPLATE ctrlsMenuItems[]={
	{IDM_CTRL_STATICS,MFS_ENABLED,"Static Controls  ",NULL},
	{IDM_CTRL_BUTTONS,MFS_ENABLED,"Button Controls  ",NULL}
};

POPMENUTEMPLATE ctrlsPopupMenu={
	"Controls",
	sizeof(ctrlsMenuItems)/sizeof(MENUITEMTEMPLATE),
	ctrlsMenuItems
};

MENUITEMTEMPLATE helpMenuItems[]={
	{IDM_HELP_ABOUT,MFS_ENABLED,"About      ",NULL}
};
POPMENUTEMPLATE helpPopupMenu={
	"Help",
	sizeof(helpMenuItems)/sizeof(MENUITEMTEMPLATE),
	helpMenuItems
};

MENUITEMTEMPLATE fileMenuItems[]={
	{IDM_FILE_EXIT,MFS_ENABLED,"Exit        ",NULL},
};
POPMENUTEMPLATE filePopupMenu={
	"File",
	sizeof(fileMenuItems)/sizeof(MENUITEMTEMPLATE),
	fileMenuItems
};

MENUITEMTEMPLATE mainMenuBarItems[]={
	{0,	MFS_ENABLED,"File",&filePopupMenu},
	{0,	MFS_ENABLED,"Controls",&ctrlsPopupMenu},
	{0,	MFS_ENABLED,"Help",&helpPopupMenu}
};

MENUBARTEMPLATE mainMenuBar={
	sizeof(mainMenuBarItems)/sizeof(MENUITEMTEMPLATE),
	mainMenuBarItems
};

BOOL MGCtrlDemo::Create()
{
	BOOL bret;
	MGMenu mainMenu;
	bret = mainMenu.LoadMenuBar(&mainMenuBar);
	if(!bret)
		return FALSE;
	bret = MGMainWnd::Create(WS_VISIBLE|WS_BORDER|WS_CAPTION,"Control Demo",50,100,400,200,HWND_DESKTOP,(HCURSOR)0,mainMenu);
	return bret;
}

BEGIN_MSG_MAP(MGCtrlDemo)
	MAP_PAINT(OnPaint)
	MAP_CLOSE(OnExit)
	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			MAP_COMMAND(IDM_FILE_EXIT,OnExit)
			MAP_COMMAND(IDM_HELP_ABOUT,OnAbout)
			MAP_COMMAND(IDM_CTRL_STATICS,OnStatic)
			MAP_COMMAND(IDM_CTRL_BUTTONS,OnButton)
		END_COMMAND_MAP
	END_COMMAND
END_MSG_MAP

void MGCtrlDemo::OnPaint(HDC hdc)
{
	MGDC dc(hdc);
	dc.TextOut(0,0,"Please Choose a command from menu...");
}

void MGCtrlDemo::OnAbout()
{
	MGAboutDlg about(m_hWnd,NULL,"CtrlDemo","CtrlDemo is a test application for MGFC");
	about.DoMode();
}

void MGCtrlDemo::OnExit()
{
	PostQuitMessage();
	Destroy();
}

void MGCtrlDemo::OnStatic()
{
	MGStaticsDemo staticsDemo;
	staticsDemo.DoMode(m_hWnd);
}

void MGCtrlDemo::OnButton()
{
	MGButtonsDemo buttonsDemo;
	buttonsDemo.DoMode(m_hWnd);
}

int MiniGUIMain(int args, const char* argv[])
{
	MSG msg;
	MGCtrlDemo mainWnd;

	if(!InitMiniGUIExt())
		return 0;

	mainWnd.Create();
	
	while(GetMessage(&msg,mainWnd)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	MainWindowThreadCleanup(mainWnd.Detach());

	MiniGUIExtCleanUp();
}

/////////////////////////////////////////////////////////////////////////////
// MGDemoDlg
BOOL MGDemoDlg::Create(HWND hWndParent,const char* strCaption,int width/*=400*/,int height/*=300*/)
{
	return MGMainWnd::Create(WS_VISIBLE|WS_BORDER|WS_CAPTION,
		strCaption,
		10,10,width+10,height+10,
		hWndParent,
		(HCURSOR)0,
		(HMENU)0,
		(HICON)0,
		GetWindowElementColor (BKC_CONTROL_DEF));
}

void MGDemoDlg::OnClose()
{
	EndDialog(0);
}

BEGIN_MSG_MAP(MGDemoDlg)
	MAP_CLOSE(OnClose)
END_MSG_MAP

