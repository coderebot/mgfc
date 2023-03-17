/*
 * file mgctrl.cpp - the minigui control of MGFC
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
#include "mgctrl.h"
#if 0
template<class TMGCtrlWnd>
WNDPROC TMGStaticSubclass<TMGCtrlWnd>::_oldProc = NULL;

template<class TMGCtrlWnd>
BOOL TMGStaticSubclass<TMGCtrlWnd>::Subclass()
{
	// m_hWnd from the TMGCtrlWnd
	WNDPROC oldProc;
	oldProc = SetWindowCallbackProc(m_hWnd,_newCtrlProc);
	if(oldProc==NULL)
		return FALSE;
	if(_oldProc==NULL)
		_oldProc = oldProc;
	return TRUE;
}

template<class TMGCtrlWnd>
int TMGStaticSubclass<TMGCtrlWnd>::_newCtrlProc(HWND hWnd,int iMsg,WPARAM wParam,LPARAM lParam)
{
	TMGStaticSubclass<TMGCtrlWnd> *pThis = (TMGStaticSubclass<TMGCtrlWnd>*)
		GetWindowAdditionalData(hWnd);
	if(pThis)
	{
		int ret=0;
		if(pThis->WndProc(iMsg,wParam,lParam,&ret))
			return ret;
		if(_oldProc)
			return (*_oldProc)(hWnd,iMsg,wParam,lParam);
	}
	
	return DefaultControlProc(hWnd,iMsg,wParam,lParam);
}

////////////////////////////////////////////////////////////////////////
//
template<class TMGCtrlWnd>
BOOL TMGDynanicSubclass<TMGCtrlWnd>::Subclass()
{
	m_oldProc = SetWindowCallbackProc(MGSUBCLASS_HWND, _newCtrlProc);
	return m_oldProc!=NULL;
}

template<class TMGCtrlWnd>
int TMGDynanicSubclass<TMGCtrlWnd>::_newCtrlProc(HWND hWnd,int iMsg,WPARAM wParam,LPARAM lParam)
{
	TMGDynanicSubclass<TMGCtrlWnd> *pThis = (TMGDynanicSubclass<TMGCtrlWnd>*)
		GetWindowAdditionalData(hWnd);
	if(pThis)
	{
		int ret = 0;
		if(pThis->WndProc(iMsg,wParam,lParam,&ret))
			return ret;
		if(pThis->m_oldProc)
			return (*pThis->m_oldProc)(iMsg,wParam,lParam,&ret);
	}

	return DefaultControlProc(hWnd,iMsg,wParam,lParam);
}
template<class TMGCtrlWnd>
WNDPROC TMGStaticSubclass<TMGCtrlWnd>::_oldProc = NULL;
#endif 

//MGUserCtrl
BOOL MGUserCtrl::Register(const char* spClass,DWORD opMask, DWORD dwStyle/* = WS_CHILD*/, DWORD dwStyleEx/* = WS_EX_NONE*/, HCURSOR hCursor /*=(HCURSOR)0*/, int iBkColor/* = COLOR_lightgray*/)
{
	WNDCLASS wndCls;
	wndCls.dwAddData = 0;
	wndCls.dwExStyle = dwStyleEx;
	wndCls.dwStyle = dwStyle;
	wndCls.hCursor = hCursor;
	wndCls.iBkColor = iBkColor;
	wndCls.opMask = opMask;
	wndCls.spClassName = (char*) spClass;
	wndCls.WinProc = (WNDPROC) MGUserCtrl::_WndProc;
	return RegisterWindowClass(&wndCls);
}

int MGUserCtrl::_WndProc(HWND hWnd, int iMsg, WPARAM wParam, LPARAM lParam)
{
	MGUserCtrl* pThis = (MGUserCtrl*)GetWindowAdditionalData(hWnd);
	if(pThis)
	{
		int ret;
		if(pThis->WndProc(iMsg,wParam,lParam,&ret))
			return ret;
	}
	return DefaultControlProc(hWnd,iMsg,wParam,lParam);
}

///////////////////////////////////////////////////////////////////////
// Edit
//WNDPROC TMGStaticSubclass<MGEdit>::_oldProc = NULL;
void TransPos(const char* pstr,char plinesep,int ipos,int *pline_pos,int *pchar_pos)
{
	int line_pos = 0;
	int char_pos = 0;
	int i = 0;
	while(i<ipos)
	{
		if(pstr[i]==plinesep)
		{
			line_pos ++;
			char_pos = 0;
		}
		else
		{
			char_pos ++;
		}
		i ++;
	}
	if(pline_pos)
		*pline_pos = line_pos;
	if(pchar_pos)
		*pchar_pos = char_pos;
}

int MGEdit::Find(const char* pFind,BOOL fDown/*=TRUE*/,BOOL fCaps/*=FALSE*/)
{
	int len;
	int editLen;
	int old_caret_line_pos;
	int old_caret_char_pos;
	int old_sel_line_pos;
	int old_sel_char_pos;
	int caret_line_pos;
	int caret_char_pos;
	int sel_line_pos;
	int sel_char_pos;
	char *ptext=NULL;
	int textLen;
	int ipos;
	int ret;
	
	if(pFind == NULL)
		return -1;
	len = strlen(pFind);
	if(len<=0)
		return -1;
	
	editLen = GetWindowTextLength();
	//printf("editLen:%d\n",editLen);
	if(editLen<len)
		return -1;

	ret = GetCaretPos(&old_caret_line_pos,&old_caret_char_pos);
	ret = GetSelPos(&old_sel_line_pos,&old_sel_char_pos);
	if(ret<0)
	{
		old_sel_line_pos = old_caret_line_pos;
		old_sel_char_pos = old_caret_char_pos;
	}
	
	if(fDown)
	{
		caret_line_pos = max(old_caret_line_pos,old_sel_line_pos);
		caret_char_pos = max(old_caret_char_pos,old_sel_char_pos);
		sel_line_pos = GetLineCount()-1;
		sel_char_pos = 0;//editLen;
		//textLen = editLen-sel_char_pos + 1;
	}
	else
	{
		caret_line_pos = 0;
		caret_char_pos = 0;
		sel_line_pos = min(old_caret_line_pos,old_sel_line_pos);
		sel_char_pos = min(old_caret_char_pos,old_sel_char_pos);

		//textLen = sel_char_pos;
	}

	//printf("caret_line_pos=%d,caet_char_pos=%d\n",caret_line_pos,caret_char_pos);
	//printf("sel_line_pos=%d,sel_char_pos=%d\n",sel_line_pos,sel_char_pos);

	SetCaretPos(caret_line_pos,caret_char_pos);

	ptext = (char*)malloc(editLen);
	if(ptext==NULL)
		goto FAIL;

	SetSel(sel_line_pos,sel_char_pos);

	textLen = GetSelText(ptext,editLen);

	//printf("----------------%d:%s\n",textLen,ptext);

	//return -1;
	
	if(textLen<len)
	{
		ipos = -1;
		goto FAIL;
	}

	if(fDown)
	{
		if(fCaps)
			ipos = KMPMatch_Forward(ptext,textLen,pFind,len);
		else 
			ipos = KMPMatch_Forward_NoCaps(ptext,textLen,pFind,len);
	}
	else
	{
		if(fCaps)
			ipos = KMPMatch_Backward(ptext,textLen,pFind,len);
		else
			ipos = KMPMatch_Backward_NoCaps(ptext,textLen,pFind,len);
	}

	//printf("ipos:%d\n",ipos);

	if(ipos<0)
		goto FAIL;

	//find the pos of line_pos and char_pos
	{
		int line_pos,char_pos;
		TransPos(ptext,'\n',ipos,&line_pos,&char_pos);
		if(fDown)
		{
			sel_line_pos = line_pos + caret_line_pos;
			sel_char_pos = char_pos;
			if(line_pos==0)
			{
				sel_char_pos += caret_char_pos;
			}
		}
		else
		{
			sel_line_pos = line_pos;
			sel_char_pos = char_pos;
		}
	}

	//printf("sel_line_pos=%d,sel_char_pos=%d\n",sel_line_pos,sel_char_pos);

	free(ptext);

	SetCaretPos(sel_line_pos,sel_char_pos);
	SetSel(sel_line_pos,sel_char_pos+len);
	return ipos;
	
FAIL:
	if(ptext)
		free(ptext);
	SetCaretPos(old_caret_line_pos,old_caret_char_pos);
	SetSel(old_sel_line_pos,old_sel_char_pos);
	return -1;
}

////////////////////////////////////////////////////////////////////////////////////
// MGSheetPage
BOOL MGSheetPage::OnInitPage(DLGTEMPLATE *pdlg_temp)
{
	return TRUE;
}

BOOL MGSheetPage::OnShowPage(HWND focus_hwnd,int show_cmd)
{
	return TRUE;
}

int MGSheetPage::OnSheetCmd(WPARAM wParam,LPARAM lParam)
{
	return 0;
}

BOOL MGSheetPage::WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret)
{
	switch(iMsg){
	case MSG_INITPAGE:
		OnInitPage((DLGTEMPLATE*)lParam);
		break;
	case MSG_SHOWPAGE:
		OnShowPage((HWND)wParam,(int)lParam);
		break;
	case MSG_SHEETCMD:
		switch(wParam){
		case IDOK:
			OnOK(lParam);
			break;
		case IDCANCEL:
			OnCancel(lParam);
			break;
		case IDAPPLY:
			OnApply(lParam);
			break;
		default:
			OnSheetCmd(wParam,lParam);
			break;
		}
	}
	*pret = DefaultPageProc(m_hWnd,iMsg,wParam,lParam);
	return TRUE;
}
