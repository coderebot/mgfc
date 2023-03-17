#include "mgwnd.h"
#include "mggdi.h"
#include "mgapp.h"
#include "mgwndhlp.h"


#ifdef _MISC_MOUSECALIBRATE
static void mouse_calibrate(void)
{
	POINT src_pts[5] = {{5,10},{600,20},{620,450},{20,470},{310,234}};
	POINT dst_pts[5] = {{0,0},{639,0},{639,479},{0,479},{320,240}};
	
	SetMouseCalibrationParameters(src_pts,dst_pts);
}
#endif


#ifdef LANG_ENG 

#endif

#define IDC_CALENDAR   100
#define IDC_TIMEEDITOR 101
#define IDC_QUARZCLOCK 102
#define IDC_SPINBOX    103

class Calendar:public MGMainWnd
{
public:
	Calendar(){}
	~Calendar(){}

	BOOL Create();

protected:
	MGMonthCalendar  m_calendar;
	MGTimeEditor     m_timeEditor;
	MGQuartzClock    m_quartzClock;
	MGSpinbox        m_spinBox;

	DECLARE_MSG_MAP;
	void OnClose();
};
/*
int MiniGUIMain(int args, const char* argv[])
{
	MSG msg;
	Calendar mainWnd;

	#ifdef _MISC_MOUSECALIBRATE
	mouse_calibrate();
	#endif

	if(!InitMiniGUIExt())
		return 0;

	if(MGQuartzClock::Register())
		printf("register success\n");
	else
		printf("register failed\n");

	mainWnd.Create();
	
	while(GetMessage(&msg,mainWnd)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	MainWindowThreadCleanup(mainWnd.Detach());

	MiniGUIExtCleanUp();
}*/
MGWndMainInitFunc(Calendar,MGQuartzClock::Register())


BOOL Calendar::Create()
{
	//Create MainWindow
	BOOL bret = MGMainWnd::Create(WS_CAPTION|WS_BORDER|WS_VISIBLE,
			"Calendar",
			0,0,360,210,
			HWND_DESKTOP,
			(HCURSOR)0,
			(HMENU)0,
			(HICON)0,
			GetWindowElementColor (BKC_CONTROL_DEF));
	//printf("%d\n",m_hWnd);
	if(bret)
	{
		//create MGMonthCalendar
		m_calendar.Create(m_hWnd,10,10,200,150,WS_CHILD|WS_VISIBLE|MCS_NOTIFY|MCS_CHN,WS_EX_NONE,IDC_CALENDAR);
		m_timeEditor.Create(m_hWnd,WS_VISIBLE|WS_CHILD,240,125,IDC_TIMEEDITOR);
		MGRect rt;
		m_timeEditor.GetWindowRect(&rt);
		//printf("rect (%d,%d,%d,%d)\n",rt.left,rt.top,rt.right,rt.bottom);
		m_spinBox.Create(m_hWnd,rt.right+2,rt.top+(rt.Height()-14)/2,15,rt.Height(),WS_CHILD|WS_VISIBLE,WS_EX_NONE,IDC_SPINBOX);
		m_spinBox.SetTarget(m_timeEditor);
		m_quartzClock.Create(m_hWnd,240,10,100,IDC_QUARZCLOCK);
		ShowWindow();
		UpdateWindow();
	}
	return bret;
}

BEGIN_MSG_MAP(Calendar)
	MAP_CLOSE(OnClose)
END_MSG_MAP

void Calendar::OnClose()
{
	PostQuitMessage();
	Destroy();
}

