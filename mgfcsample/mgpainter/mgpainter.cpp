#include "mgpainter.h"
#include "mgwndhlp.h"

#define IDC_TOOLBAR   2001

#define ID_FILE_EXIT  120
#define ID_HELP_ABOUT 801

#define ID_IMG_TOOL   1000
#define ID_IMG_PREV   1001
#define ID_IMG_NEXT   1002
#define ID_IMG_FULL   1003
#define ID_IMG_SMALL  1004
#define ID_IMG_BIG    1005

#define ID_SHARP_BEGIN  3000

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

#define MAX_TOOLBAR_ITEM  4

BOOL MGPainter::Create()
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

	MGRect rt;
	DWORD dwFlag=0;
	int i;
	GetClientRect(&rt);
	printf("toobar\n");
	m_toolbar_bmp = new BITMAP;
	LoadBitmapFromFile((HDC)NULL,m_toolbar_bmp,"./res/painter.jpg");
	NTBINFO ntbi;
	ntbi.image = m_toolbar_bmp;
	ntbi.h_cell = 0;
	ntbi.w_cell = 0;
	ntbi.nr_cells = 4;
	ntbi.nr_cols = 4;
	m_toolbar.Create(m_hWnd,0,0,rt.Width(),36,WS_VISIBLE,&ntbi,0,IDC_TOOLBAR);
	//printf("tool wnd:%d\n",(HWND)m_toolbar);
	//m_toolbar_bmp = m_toolbar.SetBitmap("./res/painter.jpg",32,32,MAX_TOOLBAR_ITEM,4);
	i = 0;
	while(i<MAX_TOOLBAR_ITEM)
	{
		dwFlag |= NTBIF_CHECKBUTTON;
		m_toolbar.AddItem(MTB_WHICH_FLAGS|MTB_WHICH_ID|MTB_WHICH_CELL,
			dwFlag,ID_SHARP_BEGIN+1+i,NULL,NULL,i,NULL,NULL);
		i++;
	}

	return bret;
}

BEGIN_MSG_MAP(MGPainter)
	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			MAP_COMMAND(ID_FILE_EXIT,OnExit)
			MAP_COMMAND(ID_HELP_ABOUT,OnAbout)
		END_COMMAND_MAP
	END_COMMAND
END_MSG_MAP

void MGPainter::OnExit()
{
	PostQuitMessage();
}

void MGPainter::OnAbout()
{
	MGAboutDlg about(m_hWnd,NULL,"MGPainter About","MGPainter is a GDI print application Base On MGFC");
	about.DoMode();
}

int MiniGUIMain(int args, const char* argv[])
{
	MSG msg;
	MGPainter mainWnd;

	if(!InitMiniGUIExt())
		return 0;
	
	MGPaintCtrl::Register();

	mainWnd.Create();
	
	while(GetMessage(&msg,mainWnd)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	MainWindowThreadCleanup(mainWnd.Detach());

	MiniGUIExtCleanUp();
}

