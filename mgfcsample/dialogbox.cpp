#include <stdio.h>
#include <string.h>
#include "mgwnd.h"
#include "mgwndhlp.h"
#include "mgapp.h"

#define IDC_MODE 101
#define IDC_MODELESS 102
#define IDC_HIDE 103

#ifdef _MISC_MOUSECALIBRATE
static void mouse_calibrate(void)
{
	POINT src_pts[5] = {{5,10},{600,20},{620,450},{20,470},{310,234}};
	POINT dst_pts[5] = {{0,0},{639,0},{639,479},{0,479},{320,240}};
	
	SetMouseCalibrationParameters(src_pts,dst_pts);
}
#endif


class ModeDlg:public MGMainWnd
{
public:
	ModeDlg(){}
	~ModeDlg(){}
	BOOL Create(HWND hHosting);
protected:
	BOOL WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret);
};

class ModelessDlg:public MGMainWnd
{
public:
	ModelessDlg(){}
	~ModelessDlg(){}
	BOOL Create(HWND hHosting);
protected:
	BOOL WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret);
};

class MainDlg:public MGMainWnd
{
public:
	MainDlg();
	~MainDlg(){}

protected:
	BOOL WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret);

	ModelessDlg m_modless;
};

/*
main dialog's template
*/
static CTRLDATA mainDlgCtls[]=
{
	{
		"static",
		WS_VISIBLE | SS_SIMPLE,
		10,10,200,32,
		IDC_STATIC,
		"The Dialog demo:\nmode dialog ----modeless dialog",
		0
	},
	{
		"button",
		WS_TABSTOP | WS_VISIBLE | BS_DEFPUSHBUTTON,
		20,40,60,25,
		IDC_MODE,
		"Mode",
		0
	},
	{
		"button",
		WS_TABSTOP | WS_VISIBLE | BS_DEFPUSHBUTTON,
		120,40,60,25,
		IDC_MODELESS,
		"Modeless",
		0
	}
};

static DLGTEMPLATE mainDlgTemplate=
{
	WS_BORDER | WS_CAPTION,
	WS_EX_NONE,
	120,150,300,200,
	"mode/modeless show",
	0,0,
	sizeof(mainDlgCtls)/sizeof(CTRLDATA),mainDlgCtls,
	0
};

MainDlg::MainDlg()
{
	Create(HWND_DESKTOP,&mainDlgTemplate);
}

BOOL MainDlg::WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret)
{
	switch(iMsg)
	{
	case MSG_COMMAND:
		switch(wParam)
		{
		case IDC_MODE:
			{
				ModeDlg dlg;
				dlg.Create(m_hWnd);
				dlg.DoMode();
			}
			break;
		case IDC_MODELESS:
			if(!m_modless.IsWindow())
			{
				m_modless.Create(m_hWnd);
			}
			m_modless.ShowWindow(SW_SHOWNORMAL);
							
			break;
		}
		break;
	case MSG_CLOSE:
		EndDialog(0);
		RETURN(0);
	}
	return FALSE;
}


static CTRLDATA modeDlgCtls[]=
{
	{
		"static",
		WS_VISIBLE | SS_SIMPLE | SS_CENTER,
		10,10,200,32,
		IDC_STATIC,
		"The Dialog is Mode dialog\n",
		0
	},
	{
		"button",
		WS_TABSTOP | WS_VISIBLE | BS_DEFPUSHBUTTON,
		70,40,60,25,
		IDOK,
		"OK",
		0
	}
};

static DLGTEMPLATE modeDlgTemplate=
{
	WS_BORDER | WS_CAPTION,
	WS_EX_NONE,
	170,200,150,100,
	"mode-dialog",
	0,0,
	sizeof(modeDlgCtls)/sizeof(CTRLDATA),modeDlgCtls,
	0
};

BOOL ModeDlg::Create(HWND hHostting)
{
	return MGMainWnd::Create(hHostting,&modeDlgTemplate);
}

BOOL ModeDlg::WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret)
{
	switch(iMsg)
	{
	case MSG_COMMAND:
		if(wParam==IDOK)
			EndDialog(1);
		break;
	}
	return FALSE;
}

static CTRLDATA modelessDlgCtls[]=
{
	{
		"static",
		WS_VISIBLE | SS_SIMPLE | SS_CENTER,
		10,10,200,32,
		IDC_STATIC,
		"The Dialog is Modeless dialog\n",
		0
	},
	{
		"button",
		WS_TABSTOP | WS_VISIBLE | BS_DEFPUSHBUTTON,
		70,40,60,25,
		IDC_HIDE,
		"Hide",
		0
	}
};

static DLGTEMPLATE modelessDlgTemplate=
{
	WS_BORDER | WS_CAPTION,
	WS_EX_NONE,
	170,200,200,100,
	"modeless-dialog",
	0,0,
	sizeof(modelessDlgCtls)/sizeof(CTRLDATA),modelessDlgCtls,
	0
};

BOOL ModelessDlg::Create(HWND hHostting)
{
	return MGMainWnd::Create(hHostting,&modelessDlgTemplate);
}

BOOL ModelessDlg::WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret)
{
	switch(iMsg)
	{
	case MSG_COMMAND:
		if(wParam==IDC_HIDE)
			ShowWindow(SW_HIDE);
		break;
	case MSG_CLOSE:
		Destroy();
		RETURN(0);
	}
	return FALSE;
}

MGDlgMain(MainDlg)


