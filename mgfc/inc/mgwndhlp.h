/*
 * file mgwndhlp.h the help function for MGFC
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
#ifndef MINIGUI_WND_HELP_H
#define MINIGUI_WND_HELP_H
/*
   this file define some common wnd,for example, About Dlg
*/

#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/time.h>

#include "mgwnd.h"
#include "mgctrl.h"
#include "mggdi.h"

#define IDC_ABOUT_INFO  100

/*
 * the common About dialog
 */
class MGAboutDlg:public MGMainWnd
{
public:
#ifdef MGWNDHLP_USE_DEFAULT
	MGAboutDlg(HWND hParent,PDLGTEMPLATE pDlgTemplate=NULL,char const* caption=NULL,char const* aboutInfo=NULL);
#else
	MGAboutDlg(HWND hParent,PDLGTEMPLATE pDlgTemplate);
#endif
	~MGAboutDlg(){}

protected:
	BOOL WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret);

private:
#ifdef MGWNDHLP_USE_DEFAULT
	static CTRLDATA _controls[];
	static DLGTEMPLATE _dlgs;
#endif
};

///////////////////////////////////////////////////////////////////////////////////////////////
#if 0
#define MGFDF_ISOPEN          0x01
#define MGFDF_ISMULTISELECT   0x02
#define MGFDF_READONLY        0x04
class MGFileDlg:public MGMainWnd
{
public:
#ifdef MGWNDHLP_USE_DEFAULT
	MGFileDlg(HWND hParent,const char*caption,const char* filter=NULL,const char*initPath=NULL,BOOL IsOpen=TRUE,BOOL isMutliSelect=FALSE,BOOL bReadOnly=TRUE,PDLGTEMPLATE pDlgTemplate=NULL);
#else
	MGFileDlg(HWND hParent,const char*caption,const char* filter=NULL,const char*initPath=NULL,BOOL IsOpen=TRUE,BOOL isMutliSelect=FALSE,BOOL bReadOnly=TRUE,PDLGTEMPLATE pDlgTemplate);
#endif
	~MGFileDlg();

	int GetFileCount();
	const char* GetFile(int idx=0);

protected:
	BOOL WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret);

	const char* m_strFile; //get the file
private:
#ifdef MGWNDHLP_USE_DEFAULT
	static CTRLDATA _controls[];
	static DLGTEMPLATE _dlg;
#endif
};
#endif


///////////////////////////////////////////////////////////////////////////////////////////////
// find replace 
/*
 * the common find & replace dialog
 */
#define FRF_CAP     0x01
#define FRF_UP      0x02
#define FRF_REPLACE 0x04
#define FRF_REPLACEALL 0x08
typedef struct _find_replace_info{
	int flag;
	char* pFind;
	char* pReplace;
}FIND_REPLACE_INFO;

#define MSG_FIND_REPLACE   MSG_USER+50000
//
#define MSG_FR_FINDREPLACE        MSG_FIND_REPLACE+1

#define IDC_EDIT_FIND    101
#define IDC_EDIT_REPLACE 102
#define IDC_FIND_NEXT    103
#define IDC_REPLACE      104
#define IDC_REPLACE_ALL  105
#define IDC_CAPS         106
#define IDC_UP           107
#define IDC_DOWN         108
#define IDC_STATIC_REPLACE  109
#define IDC_ISREPLACE    110
class MGFindReplaceDlg:public MGMainWnd
{
public:
	MGFindReplaceDlg();
	~MGFindReplaceDlg();
	
	BOOL Create(HWND hWndParent,PDLGTEMPLATE pDlgTemplate=NULL);

	void ShowFind();
	void ShowReplace();

	DECLARE_MSG_MAP;

protected:
	BOOL OnInitDialog(HWND hWndFocus,LPARAM lParam);
	void OnClose();
	void OnCancel();
	void OnFindNext();
	void OnReplace();
	void OnReplaceAll();
	//void OnCapsLock();
	void OnIsReplace();
	void OnDirect(int ctrlId);
private:
#ifdef MGWNDHLP_USE_DEFAULT
	static DLGTEMPLATE  _dlg;
	static CTRLDATA     _controls[];
#endif

	void SendFindReplaceMsg(int flag);
};

/////////////////////////////////////////////////////////////////
//class Timer
class MGTimer
{
public:
	char hour;
	char minute;
	char seconde;
	time_t tmpt;
	MGTimer(){SetCurTime(); }
	MGTimer(int hour,int minute,int seconde){SetTime(hour,minute,seconde); }
	~MGTimer(){}
	inline void SetTime(int hour,int minute,int seconde){
		this->hour = hour;
		this->minute = minute;
		this->seconde = seconde;
		tmpt=time(NULL);
	}
	inline int Update()
	{
		time_t t = time(NULL);
		int sec = (int)difftime(t,tmpt);
		tmpt = t;
		if(sec!=0)
		{
			OffsetSeconde(sec);
			//printf("sec:%d,%d:%d:%d\n",sec,hour,minute,seconde);
		}
		return sec;
	}
	inline void OffsetSeconde(int offset)
	{
		int seconde = this->seconde + offset;
		this->seconde = (seconde+60) % 60;
		if(seconde>=60 || seconde<0)
			OffsetMinute(seconde/60);
	}
	inline void OffsetMinute(int offset)
	{
		int minute = this->minute + offset;
		this->minute = (minute+60) % 60;
		if(minute>=60 || minute<0)
			Offsethour(minute/60);
	}
	inline void Offsethour(int offset)
	{
		this->hour = (this->hour+offset) % 24;
		if(this->hour<0)
			this->hour += 24;
	}

	inline int SaveCurTime()
	{
		struct tm tm;
		time_t t;
		struct timeval tv;
		t = time(NULL);
		struct tm *ptm = localtime(&t);
		tm = *ptm;
		tm.tm_hour = hour;
		tm.tm_min = minute;
		tm.tm_sec = seconde;
		t = mktime(&tm);
		tv.tv_sec = t;
		tv.tv_usec = 0;
		return settimeofday(&tv,NULL);
	}

	inline void SetCurTime()
	{
		time_t t = time(NULL);
		struct tm *ptm = localtime(&t);
		hour = ptm->tm_hour;
		minute = ptm->tm_min;
		seconde = ptm->tm_sec;
	}
};

//the QuartzClock
#define MGFC_CTRL_QUARTZ   "QuartzClock"
#define MGQCM_ADJUST        0x01 // enable the adjust mode
#define MGQCM_ADJUST_HOUR   0x02    // the mode of adjust hour
#define MGQCM_ADJUST_MINITE 0x02+1
#define MGQCM_ADJUST_SECODE 0x02+2

#define SetModeAdjust()     (m_mode|=MGQCM_ADJUST)
#define ClrModeAdjust()     (m_mode&=~MGQCM_ADJUST)
#define IsModeAdjust()      (m_mode&MGQCM_ADJUST)

class MGQuartzClock:public MGUserCtrl
{
public:
	static BOOL Register();

	MGQuartzClock():MGUserCtrl(){m_time.hour=m_time.minute=m_time.seconde=0;m_mode = 0;}
	MGQuartzClock(HWND hWnd):MGUserCtrl(hWnd){SetCurTime();}
	MGQuartzClock(HWND hParent,int Id):MGUserCtrl(hParent,Id){SetCurTime();}
	~MGQuartzClock(){}

	inline BOOL Create(HWND hParent,int x,int y,int wh,int Id){
		BOOL bret = MGCtrlWnd::Create(hParent,x,y,wh,wh,WS_CHILD|WS_VISIBLE,WS_EX_NONE,Id);
		if(bret)
		{
			SetTimer(1,50);
		}
		return bret;
	}

	void SetTime(int hour,int minute,int secode);
	void SetCurTime();
	int  Gethour();
	int  GetMinute();
	int  GetSeconde();

	void SetSettingMode();
	void ClrSettingMode();
	int  SaveCurTime(); //save the control's time as system's time

	DECLARE_CTRL_CLASS(MGFC_CTRL_QUARTZ)
protected:
	DECLARE_MSG_MAP;

	void OnLButtonDown(int x,int y,DWORD key_status);
	void OnLButtonUp(int x,int y,DWORD key_status);
	void OnMouseMove(int x,int y,DWORD key_status);
	void OnPaint(HDC hdc);
	void OnTimer(int id);
	void OnDestroy();

	MGTimer m_time;
	char     m_mode;
};

//////////////////////////////////////////////////////////////////////////////////////////////////
// MGTimeEditor
class MGTimeEditor:public TMGStaticSubclass<MGEdit>
{
public:
	MGTimeEditor(){}
	MGTimeEditor(HWND hWnd){ MGWnd::Attach(hWnd);}
	MGTimeEditor(HWND hParent,int Id){ MGCtrlWnd::Attach(hParent,Id);}
	~MGTimeEditor(){}

	BOOL Create(HWND hParent,DWORD dwStyle,int x,int y,int Id);

protected:
	DECLARE_MSG_MAP;

	//BOOL OnCtrlCreate(HWND hWndParent,DWORD dwAddData);
	BOOL OnKeyDown(int scancode,DWORD key_status);
	void OnTimer(int id);
	void OnDestroy();

	MGTimer m_time;

private:

	void Update();
};

#endif
