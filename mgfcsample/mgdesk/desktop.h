#ifndef MGFC_DESKTOP_H
#define MGFC_DESKTOP_H
#include "mgwnd.h"
#include "mgctrl.h"
#include "singlelist.h"
#include "mgapp.h"

#define HEIGHT_TASKBAR  28
#define HEIGHT_IMEWIN   24

#define _MARGIN             2
#define _HEIGHT_CTRL        24
#define _WIDTH_START        40
#define _WIDTH_TIME         52
#define _WIDTH_APPS         250
#define _ID_TIMER           100
#define _MAX_WIDTH_LAYER_BOX    80
#define _MIN_WIDTH_LAYER_BOX    20

#define BEGIN_CLIENT_BUTTON  5000
#define END_CLIENT_BUTTON  BEGIN_CLIENT_BUTTON+100                                                                                                 
#define _LEFT_BOXES     (_MARGIN + _WIDTH_START + _MARGIN + _WIDTH_APPS + _MARGIN)
#define _WIDTH_BOXES    (g_rcScr.right - _WIDTH_TIME - _MARGIN - _MARGIN - _LEFT_BOXES)

#define IDC_START 1001
#define IDC_EXIT  2001
#define IDC_RUN   2002

class MGTaskBar:public MGMainWnd
{
public:
	BOOL Create();
	DECLARE_MSG_MAP;
protected:	
	BOOL OnMainCreate(PMAINWINCREATE create_info);
	void OnTimer(int timer_id);
	void OnClose();
	void OnClientButton(int buttonId);
	void OnStart();
	void OnExit();
	void OnRun();

	MGStatic m_time;
	MGButton m_btnStart;
	MGMenu m_startMenu;
};

class MGTaskBtn:public MGButton
{
public:
	MGTaskBtn(MGClient *client,int cliCount);
	~MGTaskBtn();
	static void AdjustBox(MGClient* pClients,int newcliCount);
	static void ChangeActive(const MGClient* pClient);
	static void InitTaskBtns(MGMainWnd *pMainWnd,const RECT* rt,int btnHeight);

protected:
	MGClient *m_pclient;
	static MGMainWnd *_pTaskBar;
	static MGRect _rtTaskBtns;
	static int  _btnHeight;
};

class MGDesktopApp:public MGServerApp
{
public:
	BOOL InitServer(int nr_globals=0,int def_nr_topmosts=0,int def_nr_normals=0);
protected:
	MGTaskBar m_taskBar;
       virtual BOOL OnNewLayer(MGLayer *pLayer,MGClient *pClient);
        virtual BOOL OnDeleteLayer(MGLayer *pLayer,MGClient *pClient);
        virtual BOOL OnNewClient(MGClient* pClient);
        virtual BOOL OnDeleteClient(MGClient* pClient);
	virtual BOOL OnJoinClient(MGLayer* pLayer,MGClient *pClient);
        virtual BOOL OnRemoveClient(MGLayer* pLayer,MGClient *pClient);
        virtual BOOL OnTopMostChanged(MGLayer* pLayer,MGClient *pClient);
        virtual BOOL OnActiveChanged(MGLayer* pLayer,MGClient *pClient);

};

#endif
