#include "ctrldemo.h"

#define IDC_BUTTON    100
#define IDC_CHECKBOX  200
#define IDC_RADIOBUTTON 300
#define IDC_BUTTON_END  399
#define IDC_CLOSE     400
void MGButtonsDemo::DoMode(HWND hWnd)
{
	MGButton btn[18];
	MGStatic st[2];
	if(!MGDemoDlg::Create(hWnd,"Button Demo"))
		return;
	btn[0].Create("Push Button",
		m_hWnd,
		10,10,80,40,
		BS_PUSHBUTTON|BS_CHECKED|WS_VISIBLE,
		0,IDC_BUTTON);
	btn[1].Create("Multiple Lines Push Button",
		m_hWnd,
		110,10,80,40,
		BS_PUSHBUTTON|BS_MULTLINE|WS_VISIBLE,
		0,IDC_BUTTON+1);
	btn[2].Create("Normal check box",
		m_hWnd,
		220,10,150,40,
		BS_CHECKBOX|BS_CHECKED|WS_VISIBLE,
		0,IDC_BUTTON+2);
	btn[3].Create("Normal radio button",
		m_hWnd,
		390,10,150,40,
		BS_RADIOBUTTON|WS_VISIBLE,
		0,IDC_BUTTON+3);
	btn[4].Create("Auto 3-state check box",
		m_hWnd,
		10,60,150,30,
		BS_AUTO3STATE|WS_VISIBLE,
		0,IDC_CHECKBOX);
	btn[5].Create("Auto check box on left",
		m_hWnd,
		190,60,150,30,
		BS_AUTOCHECKBOX|BS_LEFTTEXT|BS_RIGHT|WS_VISIBLE,
		0,IDC_CHECKBOX+1);
	btn[6].Create("Push-link check box",
		m_hWnd,
		390,65,110,20,
		BS_AUTOCHECKBOX|BS_PUSHLIKE|WS_VISIBLE,
		0,IDC_CHECKBOX+2);
	st[0].Create("A Group Box",
		m_hWnd,
		10,100,180,140,
		SS_GROUPBOX|WS_VISIBLE);
	btn[7].Create("Auto Radio Button 1",
		m_hWnd,
		20,120,130,30,
		BS_AUTORADIOBUTTON|WS_VISIBLE|WS_GROUP,
		0,IDC_RADIOBUTTON);
	btn[8].Create("Auto Radio Button 2",
		m_hWnd,
		20,160,130,30,
		BS_AUTORADIOBUTTON|WS_VISIBLE,
		0,IDC_RADIOBUTTON+1);
	btn[9].Create("Auto Radio Button 3",
		m_hWnd,
		20,200,130,30,
		BS_AUTORADIOBUTTON|WS_VISIBLE,
		0,IDC_RADIOBUTTON+2);
	st[1].Create("A Group Box",
		m_hWnd,
		220,100,170,140,
		BS_GROUPBOX|WS_VISIBLE);
	btn[10].Create("Auto Radio Button 1",
		m_hWnd,
		230,120,140,30,
		BS_AUTORADIOBUTTON|BS_LEFTTEXT|BS_RIGHT|WS_VISIBLE|WS_GROUP,
		0,IDC_RADIOBUTTON+3);
	btn[11].Create("Auto Radio Button 2",
		m_hWnd,
		230,160,140,30,
		BS_AUTORADIOBUTTON|BS_LEFTTEXT|BS_RIGHT|WS_VISIBLE,
		0,IDC_RADIOBUTTON+4);
	btn[12].Create("Auto Radio Button 3",
		m_hWnd,
		230,200,140,30,
		BS_AUTORADIOBUTTON|BS_LEFTTEXT|BS_RIGHT|WS_VISIBLE,
		0,IDC_RADIOBUTTON+5);
	btn[13].Create("Push-like Radio 1",
		m_hWnd,
		10,260,100,30,
		BS_AUTORADIOBUTTON|BS_PUSHLIKE|WS_VISIBLE|WS_GROUP,
		0,IDC_RADIOBUTTON+3);
	btn[14].Create("Push-like Radio 2",
		m_hWnd,
		120,260,100,30,
		BS_AUTORADIOBUTTON|BS_PUSHLIKE|WS_VISIBLE,
		0,IDC_RADIOBUTTON+4);
	btn[15].Create("Push-like Radio 3",
		m_hWnd,
		230,260,100,30,
		BS_AUTORADIOBUTTON|BS_PUSHLIKE|WS_VISIBLE,
		0,IDC_RADIOBUTTON+5);
	btn[16].Create("Close",
		m_hWnd,
		340,260,100,30,
		BS_PUSHBUTTON|BS_ICON|BS_REALSIZEIMAGE|BS_NOTIFY|WS_VISIBLE,
		0,IDC_BUTTON+4,
		(DWORD)GetLargeSystemIcon(IDI_APPLICATION));
	btn[17].Create("Close",
		m_hWnd,
		450,260,60,30,
		BS_PUSHBUTTON|WS_VISIBLE,
		0,IDC_CLOSE);

	MGMainWnd::DoMode();	
}

BEGIN_MSG_MAP(MGButtonsDemo)
	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			MAP_COMMAND(IDC_CLOSE,OnClose)
			MAP_COMMAND_RANGE(IDC_BUTTON,IDC_BUTTON_END,OnCmdRang)
		END_COMMAND_MAP
	END_COMMAND
	CALL_BASE_CLASS_MAPS(MGDemoDlg)
END_MSG_MAP

void MGButtonsDemo::OnCmdRang(int ctrlId)
{
	printf("Notification from buttons: ID %d\n",ctrlId);
}

