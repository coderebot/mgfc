/*
 * file mgwnd.cpp the window classes of MGFC
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
#include "mgwnd.h"
#include "mggdi.h"

MGWnd * MGWnd::WndFromHandle(HWND hWnd)
{
	if(::IsWindow(hWnd))
	{
		return (MGWnd*)GetWindowAdditionalData(hWnd);
	}
	return NULL;
}


int MGLoadControls(HWND hWnd,PCTRLDATA pCtrlData,int controls)
{
	int i;
	int num = 0;
	HWND hCtrl;
	if(!IsWindow(hWnd) || controls<=0 ||  pCtrlData==NULL)
	{
		return num;
	}
	
	for (i = 0; i < controls; i++) 
	{
	  if (pCtrlData[i].class_name) 
	  {
	      hCtrl = CreateWindowEx (pCtrlData[i].class_name,
	                    pCtrlData[i].caption,
	                    pCtrlData[i].dwStyle | WS_CHILD,
	                    pCtrlData[i].dwExStyle,
	                    pCtrlData[i].id,
	                    pCtrlData[i].x,
	                    pCtrlData[i].y,
	                    pCtrlData[i].w,
	                    pCtrlData[i].h,
	                    hWnd,
	                    pCtrlData[i].dwAddData);
	      if(hCtrl!=HWND_INVALID)
	      	num ++;
	    }
	}
	return num;
}
#if 0
static int DefPanelProc(HWND hPanel,int iMsg,WPARAM wParam,LPARAM lParam)
{
	HWND hParent;
	if(iMsg==MSG_INITDIALOG)
		return 1;
	else if(iMsg==MSG_COMMAND)
	{
		hParent = GetParent(hPanel);
		if(hParent)
		{
			return SendMessage(hParent,iMsg,wParam,lParam);
		}
	}
	else if(iMsg==MSG_GETDLGCODE)
	{
  	return DLGC_WANTTAB | DLGC_WANTARROWS;
  }
  
	return DefaultControlProc(hPanel,iMsg,wParam,lParam);
}

HWND MGCreatePanel(HWND hWndParent,int x,int y,int w,int h,PCTRLDATA pCtrlData,int controls,DWORD dwStyle/*=WS_VISIBLE*/,DWORD dwAddData/*=0*/,int id/*=IDC_STATIC*/,WNDPROC panelProc/*=NULL*/)
{
	HWND hPanel;
	if(!IsWindow(hWndParent))
	{
		return HWND_INVALID;
	}
	
	dwStyle |= WS_CHILD;
	hPanel = CreateWindowEx(CTRL_STATIC,"",SS_LEFT|dwStyle,WS_EX_NONE,
					id,
					x,y,w,h,
					hWndParent,
					dwAddData
				);
	if(hPanel==HWND_INVALID)
		return hPanel;
	MGLoadControls(hPanel,pCtrlData,controls);

	if(panelProc==NULL)
		panelProc = DefPanelProc;	
	
	SetWindowCallbackProc(hPanel,panelProc);
	
	if(SendMessage(hPanel,MSG_INITDIALOG,0,dwAddData))
		return hPanel;
		
	MGDestroyPanel(hPanel);
	return HWND_INVALID;
}

void MGDestroyPanel(HWND hPanel)
{
	if(IsWindow(hPanel))
	{
		DestroyWindow(hPanel);
	}
}
#endif
//////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////////////////

MGMainWnd::MGMainWnd()
	:MGWnd()
{
}

MGMainWnd::~MGMainWnd()
{
	Destroy();
}

BOOL MGMainWnd::Create(DWORD dwStyle,
					const char* spCaption,
					int x,int y,int rx,int by,
					HWND host/*=HWND_DESKTOP*/,
					HCURSOR hCursor/*=(HCURSOR)0*/,
					HMENU hMenu/*=(HMENU)0*/,
					HICON hIcon/*=(HICON)0*/,
					int iBackColor/*=COLOR_lightwhite*/,
					DWORD dwStyleEx/*=WS_EX_NONE*/)
{
	MAINWINCREATE CreateInfo;
	
	if(hCursor==(HCURSOR)0)
	{
		hCursor = GetSystemCursor(0);
	}
	
	host = GetMainWindowHandle(host);
	
	CreateInfo.dwStyle   = dwStyle;
	CreateInfo.dwExStyle = dwStyleEx;
	CreateInfo.spCaption = spCaption;
	CreateInfo.hMenu     = hMenu;
	CreateInfo.hCursor   = hCursor;
	CreateInfo.hIcon     = hIcon;
	CreateInfo.MainWindowProc = MGMainWnd::_mainWndProc;
	CreateInfo.lx        = x;
	CreateInfo.ty        = y;
	CreateInfo.rx        = rx;
	CreateInfo.by        = by;
	CreateInfo.iBkColor  = iBackColor;
	CreateInfo.dwAddData = (DWORD)this;
	CreateInfo.hHosting  = host;
	CreateInfo.dwReserved= 0;
	
	m_hWnd = CreateMainWindow(&CreateInfo);
	
	if(!IsMainWindow())
	{
		m_hWnd = HWND_INVALID;
		return FALSE;
	}
	
	if(dwStyle&WS_VISIBLE)
	{
		ShowWindow();
	}
	return TRUE;
}

BOOL MGMainWnd::Create(HWND hWndParent,PDLGTEMPLATE pDlgTemplate)
{
	MAINWINCREATE CreateInfo;
	HWND hFocus;
	
	if (pDlgTemplate->controlnr > 0 && !pDlgTemplate->controls)
        return FALSE;
  
  hWndParent = GetMainWindowHandle(hWndParent);

	CreateInfo.dwStyle        = pDlgTemplate->dwStyle;
	CreateInfo.dwExStyle      = pDlgTemplate->dwExStyle;
	CreateInfo.spCaption      = pDlgTemplate->caption;
	CreateInfo.hMenu          = pDlgTemplate->hMenu;
	CreateInfo.hCursor        = GetSystemCursor (IDC_ARROW);
	CreateInfo.hIcon          = pDlgTemplate->hIcon;
	CreateInfo.MainWindowProc = MGMainWnd::_mainWndProc;
	CreateInfo.lx             = pDlgTemplate->x;
	CreateInfo.ty             = pDlgTemplate->y;
	CreateInfo.rx             = pDlgTemplate->x + pDlgTemplate->w;
	CreateInfo.by             = pDlgTemplate->y + pDlgTemplate->h;
	CreateInfo.iBkColor       = GetWindowElementColor (BKC_DIALOG);
	CreateInfo.dwAddData      = (DWORD)this;
	CreateInfo.hHosting       = hWndParent;
	
	m_hWnd = CreateMainWindow (&CreateInfo);
	if(m_hWnd==HWND_INVALID)
		return FALSE;

	LoadControls(pDlgTemplate->controls,pDlgTemplate->controlnr);
	
	hFocus = GetNextTabItem((HWND)0);
	//send initdialog msg
	if(!SendMessage(MSG_INITDIALOG,(WPARAM)hFocus))
	{
		return FALSE;
	}
	
	//here clear the wnd;
	
	return TRUE;
}

DWORD MGMainWnd::DoMode()
{
	HWND hWndParent,hFocus;
	MSG  msg;
	DWORD dwRetCode = 0;
	int  isActive;
	
	if(!IsMainWindow())
		return 0;
	
	SetWindowAdditionalData2(m_hWnd,(DWORD)(&dwRetCode));
	
	hWndParent = GetHosting();
	if(hWndParent)
	{
		::EnableWindow(hWndParent,FALSE);
	}
	
	hFocus = GetNextTabItem((HWND)0);
	if(hFocus)
	{
		SetFocus(hFocus);
	}
	
	ShowWindow(SW_SHOWNORMAL);
	
	while( GetMessage (&msg, m_hWnd) ) {
        TranslateMessage (&msg);
        DispatchMessage (&msg);
  }
  
  ThrowAwayMessages(m_hWnd);
  
  isActive = (GetActiveWindow() == m_hWnd);
  
  if(hWndParent)
	{
		::EnableWindow(hWndParent,TRUE);
		if(isActive)
		{
			::ShowWindow(hWndParent,SW_SHOWNORMAL);
			::SetActiveWindow(hWndParent);
		}
	}
	
	return dwRetCode;
}


int MGMainWnd::_mainWndProc(HWND hWnd,int iMsg,WPARAM wParam,LPARAM lParam)
{
	MGMainWnd *pThis;
	pThis = (MGMainWnd*)GetWindowAdditionalData(hWnd);
	if(pThis)
	{
		int ret=0;
		if(pThis->WndProc(iMsg,wParam,lParam,&ret))
			return ret;
	}

	return DefaultMainWinProc(hWnd,iMsg,wParam,lParam);
}


void MGMainWnd::Destroy()
{
	if(IsMainWindow())
	{
		DestroyAllControls(m_hWnd);
		DestroyMainWindow(m_hWnd);
		m_hWnd = HWND_INVALID;
	}
}

//////////////////////////////////////////////////////////////////////

BOOL MGMenu::LoadMenuBar(PMENUBARTEMPLATE pMenuBarTemplate)
{
	int i;
	if(!pMenuBarTemplate)
		return FALSE;
	if(!CreateMenu())
		return FALSE;
	for(int i=0;i<pMenuBarTemplate->MenuItemCnt;i++)
	{
		LoadMenuItem(m_hMenu,i,pMenuBarTemplate->pMenuItems+i,TRUE);
	}
	return TRUE;
}
BOOL MGMenu::LoadPopupMenu(PPOPMENUTEMPLATE pPopMenuTemplate)
{
	m_hMenu = ::LoadPopMenuItem(pPopMenuTemplate);
	return m_hMenu!=(HMENU)NULL;
}

BOOL LoadMenuItem(HMENU hMenu,int iPos,PMUENUITEMTEMPLATE pMenuItemTempl,BOOL fStripPopMenu/*=FALSE*/)
{
	MENUITEMINFO mii;
	if(pMenuItemTempl==NULL)
		return FALSE;
	memset(&mii,0,sizeof(mii));

	mii.mask = MIIM_TYPE;
	if(pMenuItemTempl->Id==-1)
	{
		mii.type = MFT_SEPARATOR;
	}
	else
	{
		mii.type = MFT_STRING;
		mii.id = pMenuItemTempl->Id;
		mii.mask |= (MIIM_ID|MIIM_STATE);
	}
	mii.state = pMenuItemTempl->initState;
	mii.typedata = (DWORD)pMenuItemTempl->strCaption;
	if(pMenuItemTempl->strCaption)
		mii.mask |= MIIM_STRING;
	if(pMenuItemTempl->subMenu)
	{
		mii.hsubmenu = LoadPopMenuItem(pMenuItemTempl->subMenu,fStripPopMenu);
		if(mii.hsubmenu)
			mii.mask |= MIIM_SUBMENU;
	}
	return InsertMenuItem(hMenu,iPos,MF_BYPOSITION,&mii)==0;
}

HMENU LoadPopMenuItem(PPOPMENUTEMPLATE pPopMenuTemplate,BOOL fStripPopMenu/*=FALSE*/)
{
	int i;
	MENUITEMINFO mii;
	HMENU hMenu;
	if(!pPopMenuTemplate)
	{
		return FALSE;
	}	
	memset(&mii,0,sizeof(mii));
	mii.type = MFT_STRING;
	mii.typedata = (DWORD)pPopMenuTemplate->strCaption;
	hMenu = CreatePopupMenu(&mii);
	if(hMenu==(HMENU)NULL)
		return FALSE;
	for(i=0;i<pPopMenuTemplate->menuItemCnt;i++)
	{
		LoadMenuItem(hMenu,i,pPopMenuTemplate->pMenuItems+i,TRUE);
	}
	if(fStripPopMenu)
		hMenu = StripPopupHead(hMenu);
	return hMenu;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////
// kmp string search
// forward search
unsigned char* KMPFailureFunc_Forward(const char* p,int m)
{
	int i=1,j=0;
	unsigned char* tbl = (unsigned char*)malloc(m);
	tbl[0] = 0;
	while(i<m)
	{
		if(p[j]==p[i])
		{
			tbl[i] = j+1;
			i++;
			j++;
		}
		else if(j>0)
		{
			j = tbl[j-1];
		}
		else 
		{
			tbl[i]=0;
			i++;
		}
	}
	return tbl;
}

int KMPMatch_Forward(const char *t,int n,const char* p,int m)
{
	int i=0;
	int j=0;
	int ipos = -1;
	unsigned char* tbl = KMPFailureFunc_Forward(p,m);
	
	while(i<n)
	{
		if(p[j]==t[i])
		{
			if(j==m-1)
			{
				ipos = i-m+1;
				goto RETURN;
			}
			i++;
			j++;
		}
		else if(j>0)
		{
			j = tbl[j-1];
		}
		else
		{
			i++;
		}
	}
RETURN:
	free(tbl);
	return ipos;
}


//backward search
unsigned char * KMPFailureFunc_Backward(const char* p,int m)
{
	int i=m-2,j=m-1;
	unsigned char* tbl = (unsigned char*)malloc(m);
	tbl[j] = m-1;

	while(i>=0)
	{
		if(p[j]==p[i])
		{
			tbl[i] = m-j-1;
			i--;
			j--;
		}
		else if(j<m-1)
		{
			j = tbl[j+1];
		}
		else 
		{
			tbl[i]=m-1;
			i--;
		}		
	}
	return tbl;
}

int KMPMatch_Backward(const char* t,int n,const char* p,int m)
{
	int i=n-1;
	int j=m-1;
	int ipos = -1;
	unsigned char* tbl = KMPFailureFunc_Backward(p,m);
	
	while(i>=0)
	{
		if(p[j]==t[i])
		{
			if(j==0)
			{
				ipos = i;
				goto RETURN;
			}
			i--;
			j--;
		}
		else if(j<m-1)
		{
			j = tbl[j+1];
		}
		else
		{
			i--;
		}
	}
RETURN:
	free(tbl);
	return ipos;	
}


/////////////////////////////////////
// with upper, no caps
inline char upper(char ch)  { return ch>'a'&&ch<'z'?(ch+'A'-'a'):ch; }
// forward search
unsigned char* KMPFailureFunc_Forward_NoCaps(const char* p,int m)
{
	int i=1,j=0;
	unsigned char* tbl = (unsigned char*)malloc(m);
	tbl[0] = 0;
	while(i<m)
	{
		if(upper(p[j])==upper(p[i]))
		{
			tbl[i] = j+1;
			i++;
			j++;
		}
		else if(j>0)
		{
			j = tbl[j-1];
		}
		else 
		{
			tbl[i]=0;
			i++;
		}
	}
	return tbl;
}

int KMPMatch_Forward_NoCaps(const char *t,int n,const char* p,int m)
{
	int i=0;
	int j=0;
	int ipos = -1;
	unsigned char* tbl = KMPFailureFunc_Forward_NoCaps(p,m);
	
	while(i<n)
	{
		if(upper(p[j])==upper(t[i]))
		{
			if(j==m-1)
			{
				ipos = i-m+1;
				goto RETURN;
			}
			i++;
			j++;
		}
		else if(j>0)
		{
			j = tbl[j-1];
		}
		else
		{
			i++;
		}
	}
RETURN:
	free(tbl);
	return ipos;
}


//backward search
unsigned char * KMPFailureFunc_Backward_NoCaps(const char* p,int m)
{
	int i=m-2,j=m-1;
	unsigned char* tbl = (unsigned char*)malloc(m);
	tbl[j] = m-1;

	while(i>=0)
	{
		if(upper(p[j])==upper(p[i]))
		{
			tbl[i] = m-j-1;
			i--;
			j--;
		}
		else if(j<m-1)
		{
			j = tbl[j+1];
		}
		else 
		{
			tbl[i]=m-1;
			i--;
		}		
	}
	return tbl;
}

int KMPMatch_Backward_NoCaps(const char* t,int n,const char* p,int m)
{
	int i=n-1;
	int j=m-1;
	int ipos = -1;
	unsigned char* tbl = KMPFailureFunc_Backward_NoCaps(p,m);
	
	while(i>=0)
	{
		if(upper(p[j])==upper(t[i]))
		{
			if(j==0)
			{
				ipos = i;
				goto RETURN;
			}
			i--;
			j--;
		}
		else if(j<m-1)
		{
			j = tbl[j+1];
		}
		else
		{
			i--;
		}
	}
RETURN:
	free(tbl);
	return ipos;	
}

