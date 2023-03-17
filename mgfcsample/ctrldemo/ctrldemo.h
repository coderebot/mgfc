#ifndef CTRL_DEMO_H
#define CTRL_DEMO_H
#include "mgwnd.h"
#include "mgctrl.h"
#include "mgwndhlp.h"
#include "mggdi.h"

#define IDM_FILE_EXIT     101
#define IDM_CTRL_STATICS  201
#define IDM_CTRL_BUTTONS  202

#define IDM_HELP_ABOUT    301

class MGCtrlDemo:public MGMainWnd
{
public:
	MGCtrlDemo(){}
	~MGCtrlDemo(){}

	BOOL Create();
	DECLARE_MSG_MAP;

protected:
	void OnExit();
	void OnAbout();
	void OnPaint(HDC hdc);
	void OnStatic();
	void OnButton();
};

class MGDemoDlg:public MGMainWnd
{
public:
	MGDemoDlg(){}
	~MGDemoDlg(){}

	BOOL Create(HWND hWndParent,const char* strCaption,int width=520,int height=390);

protected:
	void OnClose();
	DECLARE_MSG_MAP;
};


/////////////////////////////////////////////
class MGStaticsDemo:public MGDemoDlg
{
public:
	MGStaticsDemo(){}
	~MGStaticsDemo(){}

	void DoMode(HWND hWnd);

protected:
	DECLARE_MSG_MAP;
};

/////////////////////////////////////////////
class MGButtonsDemo:public MGDemoDlg
{
public:
	MGButtonsDemo(){}
	~MGButtonsDemo(){}

	void DoMode(HWND hWnd);
protected:
	DECLARE_MSG_MAP;

	void OnCmdRang(int ctrlId);
};

#endif

