/*
 * file mgwndhelp.cpp
 *
 * MGFC -MiniGUI Foundation Classes, The C++ Classes based on MiniGUI
 * CopyRight (c) 2007
 * Author: vecodo doon. (vecodo@sohu.com)
 * http://www.mgfc.org.cn  http://www.minigui.org
 * Any question e-mail: mgfc888@sohu.com, mgfc666@sina.com
 *
 * GPL Stander
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#include "mgwndhlp.h"
#include "mggdi.h"
#include <minigui/fixedmath.h>

#define PI   ftofix(3.1415926)

#define BUTTON_WIDTH    80
#define BUTTON_HEIGHT   24

//About Dlg
#ifdef MGWNDHLP_USE_DEFAULT
#define ABOUT_WIDTH  300
#define ABOUT_HEIGHT 200
CTRLDATA MGAboutDlg::_controls[]=
{
	{
		"static",
		WS_VISIBLE|SS_CENTER,
		10,10,ABOUT_WIDTH-20,ABOUT_HEIGHT-BUTTON_HEIGHT-10,
		IDC_ABOUT_INFO,
		"This is the MiniGUI Foundation Classes Application. Version 0.1",
		0
	},
	{
		"button",
		WS_VISIBLE|BS_PUSHBUTTON|WS_TABSTOP,
		/*110,96,*/(ABOUT_WIDTH-BUTTON_WIDTH)/2,ABOUT_HEIGHT-BUTTON_HEIGHT-70,BUTTON_WIDTH,BUTTON_HEIGHT,
		IDOK,
		"OK",
		0
	}
};

DLGTEMPLATE MGAboutDlg::_dlgs={
	WS_BORDER|WS_CAPTION,
	WS_EX_NONE,
	0,0,ABOUT_WIDTH,ABOUT_HEIGHT,
	"About...",
	0,0,
	2,MGAboutDlg::_controls,
	0
};
#endif

#ifdef MGWNDHLP_USE_DEFAULT
MGAboutDlg::MGAboutDlg(HWND hParent,PDLGTEMPLATE pDlgTemplate/*=NULL*/,char const* caption/*=NULL*/,char const* aboutInfo/*=NULL*/)
#else
MGAboutDlg::MGAboutDlg(HWND hParent,PDLGTEMPLATE pDlgTemplate)
#endif
{
#ifdef MGWNDHLP_USE_DEFAULT
	if(pDlgTemplate==NULL)
	{
		pDlgTemplate = &MGAboutDlg::_dlgs;
	}
#endif
	Create(hParent,pDlgTemplate);
#ifdef MGWNDHLP_USE_DEFAULT
	if(caption)
		SetCaption(caption);
	if(aboutInfo)
		SetChildText(IDC_ABOUT_INFO,aboutInfo);
#endif
	CenterWindow();
}

BOOL MGAboutDlg::WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret)
{
	switch(iMsg)
	{
	case MSG_INITDIALOG:
		RETURN(1);
	case MSG_COMMAND:
		if(wParam==IDOK || wParam==IDCANCEL)
		{
			EndDialog(0);
		}
		return TRUE;
	case MSG_CLOSE:
		EndDialog(0);
		return TRUE;
	}
	return FALSE;
}

///////////////////////////////////////////////////////////////////////////

#if 0
#ifdef MGWNDHLP_USE_DEFAULT
MGFileDlg::MGFileDlg(HWND hParent,const char*caption,const char* filter/*=NULL*/,const char*initPath/*=NULL*/,BOOL IsOpen=/*TRUE*/,BOOL isMutliSelect=FALSE,BOOL bReadOnly/*=TRUE*/,PDLGTEMPLATE pDlgTemplate/*=NULL*/)
#else
MGFileDlg::MGFileDlg(HWND hParent,const char*caption,const char* filter/*=NULL*/,const char*initPath/*=NULL*/,BOOL IsOpen=/*TRUE*/,BOOL isMutliSelect=FALSE,BOOL bReadOnly/*=TRUE*/,PDLGTEMPLATE pDlgTemplate)
#endif
{
#ifdef MGWNDHLP_USE_DEFAULT
	if(pDlgTemplate==NULL)
	{
	    int nMinW = w;
	    int nMinH = h;
	    int totalW = nMinW-4*SPACE_WIDTH;
	    int nCharW = GetSysCCharWidth();
	    int nCharH = GetSysCharHeight() +2;
	    int nRet;
	}
#endif
}
#endif

/////////////////////////////////////////////////////////////////////////////////
#ifdef MGWNDHLP_USE_DEFAULT
#define FINDREPLACE_WIDTH   380
#define FINDREPLACE_HEIGHT  200
CTRLDATA MGFindReplaceDlg::_controls[]={
	{
		CTRL_STATIC,
		WS_VISIBLE | SS_SIMPLE | SS_LEFT,
		10,10,40,24,
		-1,
		"Find:",
		0
	},
	{
		CTRL_EDIT,
		WS_VISIBLE | ES_LEFT | ES_AUTOHSCROLL | WS_BORDER,
		70,10,200,24,
		IDC_EDIT_FIND,
		"",
		0
	},
	{
		CTRL_STATIC,
		WS_VISIBLE | SS_SIMPLE | SS_LEFT,
		10,40,40,24,
		IDC_STATIC_REPLACE,
		"Replace:",
		0
	},
	{
		CTRL_EDIT,
		WS_VISIBLE | ES_LEFT | ES_AUTOHSCROLL | WS_BORDER,
		70,40,200,24,
		IDC_EDIT_REPLACE,
		"",
		0
	},
	{
		CTRL_BUTTON,
		WS_VISIBLE | BS_PUSHBUTTON,
		280,10,80,24,
		IDC_FIND_NEXT,
		"Find Next",
		0
	},
	{
		CTRL_BUTTON,
		WS_VISIBLE | BS_PUSHBUTTON,
		280,40,80,24,
		IDC_REPLACE,
		"Replace",
		0
	},
	{
		CTRL_BUTTON,
		WS_VISIBLE | BS_PUSHBUTTON,
		280,70,80,24,
		IDC_REPLACE_ALL,
		"Replace All",
		0
	},
	{
		CTRL_BUTTON,
		WS_VISIBLE | BS_PUSHBUTTON,
		280,100,80,24,
		IDCANCEL,
		"Cancel",
		0
	},
	{
		CTRL_BUTTON,
		WS_VISIBLE | BS_AUTOCHECKBOX,
		10,70,100,24,
		IDC_CAPS,
		"Caps Lock",
		0
	},
	{
		CTRL_BUTTON,
		WS_VISIBLE | BS_AUTOCHECKBOX,
		10,100,100,24,
		IDC_ISREPLACE,
		"Replace",
		0
	},
	{
		CTRL_BUTTON,
		WS_VISIBLE | BS_AUTORADIOBUTTON | WS_GROUP,
		120,70,160,24,
		IDC_UP,
		"Up",
		0
	},
	{
		CTRL_BUTTON,
		WS_VISIBLE | BS_AUTORADIOBUTTON | WS_GROUP,
		120,100,160,24,
		IDC_DOWN,
		"Down"
	}
};

DLGTEMPLATE MGFindReplaceDlg::_dlg={
	WS_BORDER|WS_CAPTION,
	WS_EX_TOPMOST,
	0,0,FINDREPLACE_WIDTH,FINDREPLACE_HEIGHT,
	"Find & Replace",
	0,0,
	sizeof(MGFindReplaceDlg::_controls)/sizeof(CTRLDATA),MGFindReplaceDlg::_controls,
	0	
};
#endif

MGFindReplaceDlg::MGFindReplaceDlg()
{
}

MGFindReplaceDlg::~MGFindReplaceDlg()
{
}

BOOL MGFindReplaceDlg::Create(HWND hWndParent, PDLGTEMPLATE pDlgTemplate/* = NULL*/)
{
#ifdef MGWNDHLP_USE_DEFAULT
	if(pDlgTemplate==NULL)
	{
		pDlgTemplate = &_dlg;
	}
#endif
	if(MGMainWnd::Create(hWndParent,pDlgTemplate))
	{
		CenterWindow();

		CheckRadioButton(IDC_UP, IDC_DOWN, IDC_DOWN);
		
		return TRUE;
	}
	
	return FALSE;
}

BEGIN_MSG_MAP(MGFindReplaceDlg)
	MAP_INITDIALOG(OnInitDialog)
	MAP_CLOSE(OnClose)
	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			MAP_COMMAND(IDCANCEL,OnCancel)
			MAP_COMMAND(IDC_FIND_NEXT,OnFindNext)
			MAP_COMMAND(IDC_REPLACE,OnReplace)
			MAP_COMMAND(IDC_REPLACE_ALL,OnReplaceAll)
			MAP_COMMAND_RANGE(IDC_UP,IDC_DOWN,OnDirect)
			MAP_COMMAND(IDC_ISREPLACE,OnIsReplace)
		END_COMMAND_MAP
	END_COMMAND
END_MSG_MAP

BOOL MGFindReplaceDlg::OnInitDialog(HWND hWndFocus, LPARAM lParam)
{
	return TRUE;
}

void MGFindReplaceDlg::OnClose()
{
	ShowWindow(SW_HIDE);
}

void MGFindReplaceDlg::OnCancel()
{
	ShowWindow(SW_HIDE);
}

void MGFindReplaceDlg::OnFindNext()
{
	SendFindReplaceMsg(0);
}

void MGFindReplaceDlg::OnReplace()
{
	SendFindReplaceMsg(FRF_REPLACE);
}

void MGFindReplaceDlg::OnReplaceAll()
{
	SendFindReplaceMsg(FRF_REPLACEALL);
}

void MGFindReplaceDlg::SendFindReplaceMsg(int flag)
{
	FIND_REPLACE_INFO fri;
	int len;
	fri.flag = flag;
	if(IsDlgButtonChecked(IDC_CAPS))
		fri.flag |= FRF_CAP;
	if(IsDlgButtonChecked(IDC_UP))
		fri.flag |= FRF_UP;
	fri.pFind = GetChildText(IDC_EDIT_FIND,&len);
	if(flag&FRF_REPLACE || flag&FRF_REPLACEALL)
		fri.pReplace = GetChildText(IDC_EDIT_REPLACE,&len);
	else
		fri.pReplace = NULL;
	::SendMessage(GetHosting(),MSG_FR_FINDREPLACE,0,(LPARAM)&fri);
	if(fri.pFind)
		free(fri.pFind);
	if(fri.pReplace)
		free(fri.pReplace);
}

void MGFindReplaceDlg::OnIsReplace()
{
	BOOL bEnable = IsDlgButtonChecked(IDC_ISREPLACE);

	EnableChild(IDC_EDIT_REPLACE,bEnable);
	EnableChild(IDC_REPLACE,bEnable);
	EnableChild(IDC_REPLACE_ALL,bEnable);
}

void MGFindReplaceDlg::OnDirect(int ctrlId)
{
	MyCheckRadioButton(IDC_UP,IDC_DOWN,ctrlId);
}

void MGFindReplaceDlg::ShowFind()
{
	ClearDlgItemCheck(IDC_ISREPLACE);
	OnIsReplace();
	ShowWindow();
	SetChildFocus(IDC_EDIT_FIND);
}

void MGFindReplaceDlg::ShowReplace()
{
	SetDlgItemCheck(IDC_ISREPLACE);
	OnIsReplace();
	ShowWindow();
	SetChildFocus(IDC_EDIT_FIND);
}



//////////////////////////////////////////////////////////////////////////////
//MGQuartzClock
BOOL MGQuartzClock::Register()
{
	return  MGUserCtrl::Register(MGFC_CTRL_QUARTZ,0,WS_CHILD,WS_EX_NONE,GetSystemCursor (IDC_ARROW),GetWindowElementColor (BKC_CONTROL_DEF));
}

void MGQuartzClock::OnLButtonDown(int x,int y,DWORD key_status)
{

}

void MGQuartzClock::OnLButtonUp(int x,int y,DWORD key_status)
{
}

void MGQuartzClock::OnMouseMove(int x,int y,DWORD key_status)
{
}

void MGQuartzClock::OnPaint(HDC hdc)
{
#if 0
	MGRect rt;
	MGDC   dc(hdc);
	GetClientRect(&rt);
	fixed r; // raidus of clock
	int x0,y0;
	int x,y;
	int j;
	r = itofix(rt.Width()/2);
	printf("RECT(%d,%d,%d,%d)\n",rt.left,rt.top,rt.right,rt.bottom);

	x0 = rt.left + rt.Width()/2;
	y0 = rt.top + rt.Width()/2;
	printf("r=%d,x0=%d,y0=%d\n",fixtoi(r),x0,y0);
	//draw the clock face
	j = 0;
	for(fixed i=0;j<60;i = fixadd(i,fixdiv(PI,itofix(30))),j++)
	{
		x = x0 + fixtoi(fixmul(r,fixcos(i)));
		y = y0 + fixtoi(fixmul(r,fixsin(i)));
		printf("x=%d,y=%d,i=%f,sin=%f,cos=%f,%f\n",x,y,fixtof(i),fixtof(fixsin(i)),fixtof(fixcos(i)),fixtof(PI));
		if(j%5==0)
		{
			dc.DrawPoint(x,y,3,0,0,0);
		}
		else
		{
			dc.DrawPoint(x,y,2,10,10,10);
		}
	}
	
	// draw hour handle
	dc.setPenWidth(4);
	fixed hourLen = fixdiv(fixmul(r,70),100);
	fixed d = itofix((m_time.hour%2)*PI/6);
	x = x0 + fixtoi(fixmul(hourLen,fixcos(d)));
	y = y0 + fixtoi(fixmul(hourLen,fixsin(d)));
	dc.Line(x0,y0,x,y);
	
	// draw minute handle
	dc.setPenWidth(2);
	fixed minuteLen = fixdiv(fixmul(r,85),100);
	d = itofix(m_time.minute*6*PI/30);
	x = x0 + fixtoi(fixmul(minuteLen,fixcos(d)));
	y = y0 + fixtoi(fixmul(minuteLen,fixsin(d)));
	dc.Line(x0,y0,x,y);	
	// draw seconde handle
	dc.setPenWidth(1);
	d = itofix(m_time.seconde*6/60);
	x = x0 + fixtoi(fixmul(r,fixcos(d)));
	y = y0 + fixtoi(fixmul(r,fixsin(d)));
	dc.Line(x0,y0,x,y);
#endif
	MGRect rt;
	MGDC   dc(hdc);
	GetClientRect(&rt);
	int size = rt.Width()-4;
	float r; // raidus of clock
	int x0,y0;
	int x,y;
	int j;
	r = size/2.;

	x0 = rt.left + size/2;
	y0 = rt.top + size/2;
	//draw the clock face
	j = 0;
	for(float i=0.0;j<60;j++,i+=(3.1415926/30))
	{
		x = x0 + cos(i)*r;
		y = y0 + sin(i)*r;
		//printf("x=%d,y=%d\n",x,y);
		if(j%5==0)
		{
			dc.DrawPoint(x,y,3,0,0,0);
		}
		else
		{
			dc.DrawPoint(x,y,2,10,10,10);
		}
	}
	
	// draw hour handle
	dc.SetPenWidth(3);
	float hourLen = r*60./100.;
	float d = (m_time.hour+9)*(3.1415926/6);
	x = x0 + hourLen*cos(d);
	y = y0 + hourLen*sin(d);
	dc.Line(x0,y0,x,y);
	
	// draw minute handle
	dc.SetPenWidth(2);
	float minuteLen = r*80./100.;
	d = (m_time.minute+45)*(3.1415926/30.);
	x = x0 + minuteLen*cos(d);
	y = y0 + minuteLen*sin(d);
	dc.Line(x0,y0,x,y);	
	// draw seconde handle
	dc.SetPenWidth(1);
	d = (m_time.seconde+45)*(3.1415926/30.);
	x = x0 + r*cos(d);
	y = y0 + r*sin(d);
	dc.Line(x0,y0,x,y);
}

void MGQuartzClock::OnTimer(int id)
{
	MGClientDC dc(this);
	if(m_time.Update()!=0)
	{
		//printf("%d:%d:%d\n",m_time.hour,m_time.minute,m_time.seconde);
		InvalidateRect();
	}
}

void MGQuartzClock::OnDestroy()
{
	KillTimer(1);
}

void MGQuartzClock::SetTime(int hour,int minute,int seconde)
{
	m_time.hour = hour;
	m_time.minute = minute;
	m_time.seconde = seconde;
	MGClientDC dc(this);
	OnPaint(dc);
}

void MGQuartzClock::SetCurTime()
{
	m_time.SetCurTime();
}

int  MGQuartzClock::Gethour()
{
	return m_time.hour;
}

int  MGQuartzClock::GetMinute()
{
	return m_time.minute;
}

int  MGQuartzClock::GetSeconde()
{
	return m_time.seconde;
}


void MGQuartzClock::SetSettingMode()
{
	SetModeAdjust();
}

void MGQuartzClock::ClrSettingMode()
{
	ClrModeAdjust();
}

int  MGQuartzClock::SaveCurTime() //save the control's time as system's time
{
	return m_time.SaveCurTime();
}


BEGIN_MSG_MAP(MGQuartzClock)
	MAP_LBUTTONDOWN(OnLButtonDown)
	MAP_LBUTTONUP(OnLButtonUp)
	MAP_MOUSEMOVE(OnMouseMove)
	MAP_PAINT(OnPaint)
	MAP_TIMER(OnTimer)
	MAP_DESTROY(OnDestroy)
END_MSG_MAP

///////////////////////////////////////////////////////////////////////////

BOOL MGTimeEditor::Create(HWND hParent,DWORD dwStyle,int x,int y,int Id)
{
	BOOL bvisible = dwStyle&WS_VISIBLE;
	BOOL bret = MGCtrlWnd::Create(hParent,x,y,0,0,WS_CHILD|ES_CENTER|ES_BASELINE|(dwStyle&~WS_VISIBLE),WS_EX_NONE,Id);
	if(bret)
	{
		/* 创建编辑框使用的逻辑字体 */
		PLOGFONT timefont = CreateLogFont (NULL, "Arial", "ISO8859-1",
				FONT_WEIGHT_BOOK, FONT_SLANT_ROMAN, FONT_SETWIDTH_NORMAL,
				FONT_SPACING_CHARCELL, FONT_UNDERLINE_NONE, FONT_STRUCKOUT_NONE,
				30, 0);
		
		MGClientDC dc(this);
		SIZE  size; 
		dc.SelectFont(timefont);
		dc.GetTextExtent("00:00:00",-1,&size);
		//printf("font size:%d,%d\n",size.cx,size.cy);
		MoveWindow(x,y,size.cx+10,size.cy+16,FALSE);

		SetWindowFont(timefont);
		
		if(bvisible)
			ShowWindow(SW_SHOWNORMAL);
		bret = Subclass();

		SetTimer(1,50);
		Update();
	}
	return bret;
}

BOOL MGTimeEditor::OnKeyDown(int scancode,DWORD key_status)
{
	switch (scancode) {
	case SCANCODE_CURSORBLOCKUP:
		m_time.OffsetSeconde(1);
		break;
	case SCANCODE_CURSORBLOCKDOWN:
		m_time.OffsetSeconde(-1);
		break;
	case SCANCODE_PAGEUP:
		m_time.OffsetSeconde(10);
		break;
	case SCANCODE_PAGEDOWN:
		m_time.OffsetSeconde(-10);
		break;
	default:
		return TRUE;
	}
	Update();
	return TRUE;
}

void MGTimeEditor::OnTimer(int id)
{
	if(m_time.Update()!=0)
	{
		//printf("%d:%d:%d\n",m_time.hour,m_time.minute,m_time.seconde);
		Update();
	}
}

void MGTimeEditor::OnDestroy()
{
	KillTimer(1);
}

BEGIN_MSG_MAP(MGTimeEditor)
	MAP_KEYDOWN(OnKeyDown)
	MAP_TIMER(OnTimer)
	MAP_DESTROY(OnDestroy)
END_MSG_MAP

void MGTimeEditor::Update()
{
	char szText[10];
	sprintf(szText,"%02d:%02d:%02d",m_time.hour,m_time.minute,m_time.seconde);
	SetWindowText(szText);
}
