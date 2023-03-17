#include <stdio.h>
#include <string.h>
#include "mgwnd.h"
#include "mgapp.h"

#ifdef _MISC_MOUSECALIBRATE
static void mouse_calibrate(void)
{
	POINT src_pts[5] = {{5,10},{600,20},{620,450},{20,470},{310,234}};
	POINT dst_pts[5] = {{0,0},{639,0},{639,479},{0,479},{320,240}};
	
	SetMouseCalibrationParameters(src_pts,dst_pts);
}
#endif

class HelloMainWnd:public MGMainWnd
{
public:
	HelloMainWnd(const char* wellCome=NULL){
		if(wellCome==NULL)
			strcpy(m_szWelcom,"wellcome to the MGFC\n");
		else
			strcpy(m_szWelcom,wellCome);	
	};
	~HelloMainWnd(){};
	
	BOOL Create(const char *caption="Hello World");
	
protected:
	char m_szWelcom[256];
	BOOL WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret);
};


BOOL HelloMainWnd::Create(const char *caption)
{
	if(MGMainWnd::Create(WS_VISIBLE|WS_BORDER|WS_CAPTION,caption,0,0,g_rcScr.right,g_rcScr.bottom))
	{
		return TRUE;
	}
	return FALSE;
}

BOOL HelloMainWnd::WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret)
{
	HDC hdc;
	switch(iMsg)
	{
	case MSG_PAINT:
		hdc = BeginPaint();
		TextOut(hdc,10,10,m_szWelcom);
		EndPaint(hdc);
		RETURN(0);
	case MSG_CLOSE:
		Destroy();
		PostQuitMessage();
		RETURN(0);
	}
	return FALSE;
}

int MiniGUIMain(int args, const char* argv[])
{
	MSG msg;
	HelloMainWnd mainWnd;
	InitClientLayer(args,argv);
	mainWnd.Create();
	
	while(GetMessage(&msg,mainWnd)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	MainWindowThreadCleanup(mainWnd.Detach());
}
