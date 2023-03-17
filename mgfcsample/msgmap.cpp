#include <stdio.h>
#include <string.h>
#include "mgwnd.h"
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

class MsgMapMainWnd:public MGMainWnd
{
public:
	MsgMapMainWnd();
	~MsgMapMainWnd();

	BOOL Create();
	
	DECLARE_MSG_MAP;

protected:
	BOOL OnMainWndCreate(MAINWINCREATE *pCreateInfo);
	void OnPaint(HDC hdc);
	BOOL OnKeyDown(int scancode,DWORD key_status);
	BOOL OnKeyUp(int scancode,DWORD key_status);
	BOOL OnChar(int ch,DWORD key_status);
	void OnLButtonDown(int x,int y,DWORD key_status);
	void OnLButtonUp(int x,int y,DWORD key_status);
	void OnMouseMove(int x,int y,DWORD key_status);

private:
	char m_szCurText[128];
	void DrawInfo(HDC hdc = (HDC)NULL);

	const char* KeyStatusInfo(DWORD key_status);
};

/*
int MiniGUIMain(int args, const char* argv[])
{
	MSG msg;
	MsgMapMainWnd mainWnd;
#ifdef _MISC_MOUSECALIBRATE
	mouse_calibrate();
#endif
	mainWnd.Create();
	
	while(GetMessage(&msg,mainWnd)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	MainWindowThreadCleanup(mainWnd.Detach());
	return 0;
}*/

MsgMapMainWnd::MsgMapMainWnd()
{
	strcpy(m_szCurText,"This is the message map showing application!");
}

MsgMapMainWnd::~MsgMapMainWnd()
{
}

BOOL MsgMapMainWnd::Create()
{
printf("%d\n",__LINE__);
	BOOL bret = MGMainWnd::Create(
		WS_VISIBLE|WS_BORDER|WS_CAPTION,
		"message map show...",
		0,0,g_rcScr.right,g_rcScr.bottom
		);  
printf("%d\n",__LINE__);
	return bret;
}


BEGIN_MSG_MAP(MsgMapMainWnd)
	MAP_MAINWNDCREATE(OnMainWndCreate)
	MAP_PAINT(OnPaint)
	MAP_KEYDOWN(OnKeyDown)
	MAP_KEYUP(OnKeyUp)
	MAP_CHAR(OnChar)
	MAP_LBUTTONDOWN(OnLButtonDown)
	MAP_LBUTTONUP(OnLButtonUp)
	MAP_MOUSEMOVE(OnMouseMove)
END_MSG_MAP


BOOL MsgMapMainWnd::OnMainWndCreate(MAINWINCREATE *pCreateInfo)
{
printf("%d\n",__LINE__);
	strcpy(m_szCurText,"The MSG_CREATE has been called");
printf("%d\n",__LINE__);
	return TRUE;
}

void MsgMapMainWnd::OnPaint(HDC hdc)
{

printf("%d\n",__LINE__);
	TextOut(hdc,10,10,"Use Keyboard or Mouse to Input data. \nThis Application Can"
		" Show your input.");
	
	DrawInfo(hdc);
}

BOOL MsgMapMainWnd::OnKeyDown(int scancode,DWORD key_status)
{
	sprintf(m_szCurText,"MSG_KEYDOWN: SCANCODE=%d,%s",scancode,KeyStatusInfo(key_status));
	DrawInfo();
	return TRUE;
}

BOOL MsgMapMainWnd::OnKeyUp(int scancode,DWORD key_status)
{
	sprintf(m_szCurText,"MSG_KEYUP: SCANCODE=%d,%s",scancode,KeyStatusInfo(key_status));
	DrawInfo();
	return TRUE;
}

BOOL MsgMapMainWnd::OnChar(int ch,DWORD key_status)
{
	sprintf(m_szCurText,"MSG_CHAR: SCANCODE=%c,%s",ch,KeyStatusInfo(key_status));
	DrawInfo();
	return TRUE;
}

void MsgMapMainWnd::OnLButtonDown(int x,int y,DWORD key_status)
{
	sprintf(m_szCurText,"MSG_LBUTTONDOWN: x=%d,y=%d,%s",x,y,KeyStatusInfo(key_status));
	DrawInfo();
}

void MsgMapMainWnd::OnLButtonUp(int x,int y,DWORD key_status)
{
	sprintf(m_szCurText,"MSG_LBUTTONUP: x=%d,y=%d,%s",x,y,KeyStatusInfo(key_status));
	DrawInfo();
}
void MsgMapMainWnd::OnMouseMove(int x,int y,DWORD key_status)
{
	sprintf(m_szCurText,"MSG_MOUSEMOVE: x=%d,y=%d,%s",x,y,KeyStatusInfo(key_status));
	DrawInfo();
}

void MsgMapMainWnd::DrawInfo(HDC hdc)
{
	HDC hdcdst;
	RECT rt;
	if(hdc==(HDC)NULL)
		hdcdst = GetClientDC();
	else
		hdcdst = hdc;

	GetClientRect(&rt);
	rt.left = 10;
	rt.top  = 100;
	rt.bottom = 200;

	FillBox(hdcdst,rt.left,rt.top,rt.right-rt.left,rt.bottom-rt.top);

	TextOut(hdcdst,rt.left,rt.top,m_szCurText);

	if(hdc==(HDC)NULL)
		ReleaseDC(hdcdst);
}

const char* MsgMapMainWnd::KeyStatusInfo(DWORD key_status)
{
	static char _szKeyStatus[128];
	memset(_szKeyStatus,0,sizeof(_szKeyStatus));
	int len = 0;
	if(key_status&KS_LEFTALT)
		len += sprintf(_szKeyStatus+len,"LeftAlt ");
	if(key_status&KS_RIGHTALT)
		len += sprintf(_szKeyStatus+len,"RightAlt ");
	if(key_status&KS_LEFTCTRL)
		len += sprintf(_szKeyStatus+len,"LeftCtrl ");
	if(key_status&KS_RIGHTCTRL)
		len += sprintf(_szKeyStatus+len,"RightCtrl ");
	if(key_status&KS_LEFTSHIFT)
		len += sprintf(_szKeyStatus+len,"LeftShift ");
	if(key_status&KS_RIGHTSHIFT)
		len += sprintf(_szKeyStatus+len,"RightShift ");
	if(key_status&KS_CAPSLOCK)
		len += sprintf(_szKeyStatus+len,"Capslock ");

	return _szKeyStatus;
}

MGWndMain(MsgMapMainWnd)
