
#include "ctrldemo.h"

#define IDC_STATIC1   501
#define IDC_STATIC2   502
#define IDC_STATIC3   503
#define IDC_STATIC4   504
#define IDC_CLOSE     520

void MGStaticsDemo::DoMode(HWND hWnd)
{
	//Create Dialog
	if(MGDemoDlg::Create(hWnd,"Static control"))
	{
		MGStatic   st[25];
		st[0].Create("This is a simple static control.",
			m_hWnd,
			10,10,180,20,
			SS_NOTIFY|SS_SIMPLE|WS_VISIBLE|WS_BORDER,0,IDC_STATIC1);
		st[1].Create("This is a left-aligned static control(auto-wrap)",
			m_hWnd,
			10,40,180,45,
			SS_NOTIFY|SS_LEFT|WS_VISIBLE|WS_BORDER,0,IDC_STATIC2);
		st[2].Create("This is a right-aligned static control(auto-wrap).",
			m_hWnd,
			10,90,180,45,
			SS_NOTIFY|SS_RIGHT|WS_VISIBLE|WS_BORDER,0,IDC_STATIC3);
		st[3].Create("This is a center-aligned static control(auto-wrap).",
			m_hWnd,
			10,140,180,45,
			SS_NOTIFY|SS_CENTER|WS_VISIBLE|WS_BORDER,0,IDC_STATIC4);
		st[4].Create("An Icon static control: ",
			m_hWnd,
			250,40,150,20,
			SS_RIGHT|WS_VISIBLE);
		st[5].Create("",
			m_hWnd,
			420,20,50,50,
			SS_ICON|WS_VISIBLE,
			0,IDC_STATIC,
			(DWORD)GetLargeSystemIcon(IDI_INFORMATION));
		st[6].Create("A bitmap static control: ",
			m_hWnd,
			250,100,150,20,
			SS_RIGHT|WS_VISIBLE);
		st[7].Create("",
			m_hWnd,
			420,80,50,50,
			SS_ICON|WS_VISIBLE,
			0,IDC_STATIC,
			(DWORD)GetLargeSystemIcon(IDI_APPLICATION));
		st[8].Create("A bitmap static control (center): ",
			m_hWnd,
			250,160,150,20,
			SS_RIGHT|WS_VISIBLE);
		st[9].Create("",
			m_hWnd,
			420,140,50,50,
			SS_ICON|SS_REALSIZEIMAGE|SS_CENTERIMAGE|WS_VISIBLE,
			0,IDC_STATIC,
			(DWORD)GetLargeSystemIcon(IDI_STOP));
		st[10].Create("A black box: ",
			m_hWnd,
			10,200,100,20,
			WS_VISIBLE);
		st[11].Create(m_hWnd,
			110,200,50,20,
			SS_BLACKRECT|WS_VISIBLE);
		st[12].Create("A gray box: ",
			m_hWnd,
			10,230,100,20,
			WS_VISIBLE);
		st[13].Create(m_hWnd,
			110,230,50,20,
			SS_GRAYRECT|WS_VISIBLE);
		st[14].Create("A white box: ",
			m_hWnd,
			10,260,100,20,
			WS_VISIBLE);
		st[15].Create(m_hWnd,
			110,260,50,20,
			SS_WHITERECT|WS_VISIBLE);
		st[16].Create("A black frame: ",
			m_hWnd,
			170,200,90,20,
			WS_VISIBLE);
		st[17].Create(m_hWnd,
			260,200,50,20,
			SS_BLACKFRAME|WS_VISIBLE);
		st[18].Create("A gray frame: ",
			m_hWnd,
			170,230,100,20,
			WS_VISIBLE);
		st[19].Create(m_hWnd,
			260,230,50,20,
			SS_GRAYFRAME|WS_VISIBLE);
		st[20].Create("A white frame: ",
			m_hWnd,
			170,260,100,20,
			WS_VISIBLE);
		st[21].Create(m_hWnd,
			260,260,50,20,
			SS_WHITEFRAME|WS_VISIBLE);
		st[22].Create("A Group Box",
			m_hWnd,
			350,190,160,90,
			SS_GROUPBOX|WS_VISIBLE);
		st[23].Create("SS_LEFTNOWORDWRAP: "
				"\t Tabs are expanded, but words are not wrapped. "
				"Text that extends past the end of a line is clipped.",
				m_hWnd,
				10,290,500,30,
				SS_LEFTNOWORDWRAP|WS_VISIBLE|WS_BORDER);

		MGButton btn;
		btn.Create("Close",m_hWnd,450,330,60,25,BS_PUSHBUTTON|WS_VISIBLE,0,IDC_CLOSE);
		MGMainWnd::DoMode();
	}
}

BEGIN_MSG_MAP(MGStaticsDemo)
	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			MAP_COMMAND(IDC_CLOSE,OnClose)
		END_COMMAND_MAP
	END_COMMAND
	CALL_BASE_CLASS_MAPS(MGDemoDlg)
END_MSG_MAP

