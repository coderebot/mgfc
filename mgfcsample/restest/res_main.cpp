
#include <mgwnd.h>
#include <mgctrl.h>
#include <mgres.h>
#include <mgapp.h>
#include "resource.h"

class ResDlg:public MGMainWnd
{
public:
	ResDlg(PDLGTEMPLATE pdlgtemp,HWND hParent);
	~ResDlg();

protected:
	DECLARE_MSG_MAP;
	void OnOK();
	BOOL OnInitDialog(HWND focus_hwnd,LPARAM lParam);
};

BEGIN_MSG_MAP(ResDlg)
	MAP_INITDIALOG(OnInitDialog)
	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			MAP_COMMAND(IDOK,OnOK)
		END_COMMAND_MAP
	END_COMMAND
END_MSG_MAP

ResDlg::ResDlg(PDLGTEMPLATE pdlgtemp,HWND hParent)
{
	MGMainWnd::Create(hParent,pdlgtemp);
}

ResDlg::~ResDlg()
{
}

BOOL ResDlg::OnInitDialog(HWND focus_hwnd,LPARAM lParam)
{
	return TRUE;
}

void ResDlg::OnOK()
{
	EndDialog(1);
}

//////////////////////////////////////////////////////////////////////
class MGResMain:public MGMainWnd
{
public:
	MGResMain(){}
	~MGResMain(){}

	BOOL Create();

protected:
	DECLARE_MSG_MAP;

	BOOL OnInitDialog(HWND focus_hwnd,LPARAM lParam);

	void OnExit();
	void OnButtons();
	void OnStatics();
	void OnListBox();
	void OnComboBox();
	void OnTreeView();
	void OnListView();
	void OnProgressBar();
	void OnCalendar();
	void OnMenus();
	void OnEdits();
	void OnSpinbox();
	void OnTrackbar();
	void ShowResDlg(int Idd);
};

BOOL MGResMain::Create()
{
	PDLGTEMPLATE pdlgtemp;
	pdlgtemp = LoadDialogTemplate(IDD_RESMAIN);
	printf("%p\n",pdlgtemp);
	if(pdlgtemp==NULL)
		return FALSE;
	printf("dlgtemp:%s,%d,%p\n",
		pdlgtemp->caption,
		pdlgtemp->controlnr,
		pdlgtemp->controls);
	if(MGMainWnd::Create(HWND_DESKTOP,pdlgtemp))
	{
		printf("create success\n");
		ShowWindow(SW_SHOWNORMAL);
		UpdateWindow();
		return TRUE;
	}
	return FALSE;
}

BEGIN_MSG_MAP(MGResMain)
	MAP_INITDIALOG(OnInitDialog)
	BEGIN_COMMAND
		BEGIN_COMMAND_MAP
			MAP_COMMAND(IDOK,OnExit)
			MAP_COMMAND(IDC_BUTTONS,OnButtons)
			MAP_COMMAND(IDC_STATICS,OnStatics)
			MAP_COMMAND(IDC_LISTBOX,OnListBox)
			MAP_COMMAND(IDC_COMBOBOX,OnComboBox)
			MAP_COMMAND(IDC_TREEVIEW,OnTreeView)
			MAP_COMMAND(IDC_LISTVIEW,OnListView)
			MAP_COMMAND(IDC_PROGRESSBAR,OnProgressBar)
			MAP_COMMAND(IDC_CALENDAR,OnCalendar)
			MAP_COMMAND(IDC_MENU,OnMenus)
			MAP_COMMAND(IDC_EDIT,OnEdits)
			MAP_COMMAND(IDC_SPINBOX,OnSpinbox)
			MAP_COMMAND(IDC_SCROLLBAR,OnTrackbar)
		END_COMMAND_MAP
	END_COMMAND
END_MSG_MAP


BOOL MGResMain::OnInitDialog(HWND focus_hwnd, LPARAM lParam)
{
	return TRUE;
}

void MGResMain::OnExit()
{
	printf("quit\n");
	PostQuitMessage();
	Destroy();
}
void MGResMain::OnButtons()
{
	ShowResDlg(IDD_BUTTONS);
}

void MGResMain::OnStatics()
{
	ShowResDlg(IDD_STATICS);
}

/*
 list test
*/

class ListDlg:public ResDlg
{
public:
	ListDlg(PDLGTEMPLATE pdlgtemp,HWND hParent):
		ResDlg(pdlgtemp,hParent)
	{
		MGListBox list1(GetChild(IDC_LIST1));
		MGListBox list2(GetChild(IDC_LIST2));

		for(int i=0;i<10;i++)
		{
			char szText[100];
			sprintf(szText,"List Item%d",i+1);
			list1.AddString(szText);
			list2.AddString(szText);
		}
	}
};

void MGResMain::OnListBox()
{
	//ShowResDlg(IDD_LISTBOX);
	PDLGTEMPLATE pdlgtemp = LoadDialogTemplate(IDD_LISTBOX);
	if(pdlgtemp)
	{
		ListDlg dlg(pdlgtemp,m_hWnd);
		dlg.DoMode();
	}
}

class ComboDlg:public ResDlg
{
public:
	ComboDlg(PDLGTEMPLATE pdlgtemp,HWND hParent):
		ResDlg(pdlgtemp,hParent)
	{
		MGComboBox combo1(GetChild(IDC_COMBO1));
		MGComboBox combo2(GetChild(IDC_COMBO2));
		MGComboBox combo3(GetChild(IDC_COMBO3));

		for(int i=0;i<10;i++)
		{
			char szText[100];
			sprintf(szText,"Combo Item%d",i+1);
			combo1.AddString(szText);
			combo2.AddString(szText);
			combo3.AddString(szText);
		}
	}
};

void MGResMain::OnComboBox()
{
	PDLGTEMPLATE pdlgtemp = LoadDialogTemplate(IDD_COMBOBOX);
	if(pdlgtemp)
	{
		ComboDlg dlg(pdlgtemp,m_hWnd);
		dlg.DoMode();
	}
}


class TreeViewDlg:public ResDlg
{
public:
	TreeViewDlg(PDLGTEMPLATE pdlgtemp,HWND hParent):
		ResDlg(pdlgtemp,hParent)
	{
		MGTreeView tv(GetChild(IDC_TREE1));
		GHANDLE hRoot = tv.GetRoot();
		GHANDLE hItem;
		hItem = tv.AddItem(hRoot,"Item1",0);
		tv.AddItem(hItem,"Item1",0);
		tv.AddItem(hItem,"Item2",0);
		tv.AddItem(hRoot,"Item2",0);
	}
};

void MGResMain::OnTreeView()
{
	PDLGTEMPLATE pdlgtemp = LoadDialogTemplate(IDD_TREEVIEW);
	if(pdlgtemp)
	{
		TreeViewDlg dlg(pdlgtemp,m_hWnd);
		dlg.DoMode();
	}
}

class ListViewDlg:public ResDlg
{
public:
	ListViewDlg(PDLGTEMPLATE pdlgtemp,HWND hParent):
		ResDlg(pdlgtemp,hParent)
	{
		MGListView lv(GetChild(IDC_LIST1));
		lv.AddColumn(0,100,"Col1",0,NULL,0);
		lv.AddColumn(0,100,"Col2",0,NULL,0);
		lv.AddColumn(0,100,"Col3",0,NULL,0);
		for(int i=0;i<10;i++)
		{
			char szText[100];
			HLVITEM hlvItem = lv.AddItem((HLVITEM)NULL,i,28,0);
			for(int j=0;j<3;j++)
			{
				sprintf(szText,"Item%d%d",i,j);
				lv.SetSubitemText(hlvItem,j,szText);
			}
		}
	}
};

void MGResMain::OnListView()
{
	PDLGTEMPLATE pdlgtemp = LoadDialogTemplate(IDD_LISTVIEW);
	if(pdlgtemp)
	{
		ListViewDlg dlg(pdlgtemp,m_hWnd);
		dlg.DoMode();
	}
}

class ProgressBarDlg:public ResDlg
{
public:
	ProgressBarDlg(PDLGTEMPLATE pdlgtemp,HWND hParent):
		ResDlg(pdlgtemp,hParent)
	{
		MGProgressBar pb1(GetChild(IDC_PROGRESS1));
		MGProgressBar pb2(GetChild(IDC_PROGRESS2));
		MGProgressBar pb3(GetChild(IDC_PROGRESS3));

		pb1.SetRange(0,100);
		pb1.SetPos(30);
		pb2.SetRange(0,100);
		pb2.SetPos(50);
		pb3.SetRange(0,100);
		pb3.SetPos(80);
	}
};

void MGResMain::OnProgressBar()
{
	PDLGTEMPLATE pdlgtemp = LoadDialogTemplate(IDD_PROGRESSBAR);
	if(pdlgtemp)
	{
		ProgressBarDlg dlg(pdlgtemp,m_hWnd);
		dlg.DoMode();
	}
}

void MGResMain::OnCalendar()
{
	ShowResDlg(IDD_CALENDAR);
}

class MenuDlg:public ResDlg
{
public:
	MenuDlg(PDLGTEMPLATE pdlgtemp,HWND hParent):
		ResDlg(pdlgtemp,hParent)
	{
		PMENUBARTEMPLATE pmenutemp = LoadMenubarTemplate(IDR_MENU1);
		if(pmenutemp)
		{
			MGMenu menu;
			menu.LoadMenuBar(pmenutemp);
			SetMenu(menu.Detach());
			UpdateWindow();
		}
	}
};

void MGResMain::OnMenus()
{
	PDLGTEMPLATE pdlgtemp = LoadDialogTemplate(IDD_MENUS);
	if(pdlgtemp)
	{
		MenuDlg dlg(pdlgtemp,m_hWnd);
		dlg.DoMode();
	}
}


class EditsDlg:public ResDlg
{
public:
	EditsDlg(PDLGTEMPLATE pdlgtemp,HWND hParent):
		ResDlg(pdlgtemp,hParent)
	{
		SetChildText(IDC_SIMPLE,"This is Simple Edit");
		SetChildText(IDC_CENTER,"Center Edit");
		SetChildText(IDC_RIGHT,"This is Right Edit");
		SetChildText(IDC_READONLY,"This is ReadOnly Edit");
		SetChildText(IDC_PASSWORD,"Password");
		SetChildText(IDC_MULTIEDIT,"The MultiLine Edit\nLine 1\n Line2\n");
		//SetChildText(IDC_UPPER,"This is Uppder Edit");
		//SetChildText(IDC_LOWER,"This is Lower Edit");
	}
};

void MGResMain::OnEdits()
{
	PDLGTEMPLATE pdlgtemp = LoadDialogTemplate(IDD_EDITS);
	if(pdlgtemp)
	{
		EditsDlg dlg(pdlgtemp,m_hWnd);
		dlg.DoMode();
	}
}

void MGResMain::OnSpinbox()
{
	ShowResDlg(IDD_SPINBOX);
}

void MGResMain::OnTrackbar()
{
	ShowResDlg(IDD_TRACKBAR);
}

void MGResMain::ShowResDlg(int Idd)
{
	PDLGTEMPLATE pdlgtemp = LoadDialogTemplate(Idd);
	if(pdlgtemp)
	{
		ResDlg dlg(pdlgtemp,m_hWnd);
		dlg.DoMode();
	}
}


extern mgres_handle_t _mgres_handle;
/*
int MiniGUIMain(int args, const char* argv[])
{
	MSG msg;
	MGResMain mainWnd;

	mgres_handle=&_mgres_handle;

	if(!InitMiniGUIExt())
		return 0;

	mainWnd.Create();
	
	while(GetMessage(&msg,mainWnd)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	MainWindowThreadCleanup(mainWnd.Detach());

	MiniGUIExtCleanUp();
}*/
MGWndMainInitFunc(MGResMain,mgres_handle=&_mgres_handle;)

