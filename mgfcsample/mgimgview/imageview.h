#ifndef IMAGVIEW_H
#define IMAGVIEW_H

#include "mgwnd.h"
#include "mggdi.h"
#include "mgctrl.h"
#include "image.h"

class MGDirTree:public MGTreeView
{
public:
	MGDirTree();
	~MGDirTree();

	BOOL SetDir(const char* pdir);

	BOOL GetCurDir(char *pdir,int nMax);

	int GetPath(GHANDLE hItem,char* pdir,int nMax);

	int InitDirItem(const char* strDir,GHANDLE hParent);	
private:
	char m_szPath[MAX_PATH+1];
};

class MGFileList:public MGListView
{
public:
	MGFileList();
	~MGFileList();
	
	BOOL SetDir(const char* pdir);
	int  GetFileCount(){ return GetItemCount(); }
	BOOL GetFile(HLVITEM pi,char* pfile,int nMax);

	inline BOOL GetCurFile(char* pfile,int nMax){ GetFile(GetSelectedItem(),pfile,nMax); }
private:
	char m_szPath[MAX_PATH+1];
	
};

#define MGIC_HSCROLL 0x01
#define MGIC_VSCROLL 0x02
#define MGFC_CTRL_IMGCTRL  "ImageCtrl"
class MGImageCtrl:public MGUserCtrl,protected TMGScrollWnd<MGImageCtrl>
{
public:
	MGImageCtrl();
	~MGImageCtrl();

	BOOL SetImageFile(const char* file);
	void ZoomIn();
	void ZoomOut();
	void ImageSize();

	void UpdateScrollWnd(int newXPos,int newYPos,DWORD dwFlag);

	static BOOL Register()
	{
		return  MGUserCtrl::Register(MGFC_CTRL_IMGCTRL,0,WS_CHILD,WS_EX_NONE,GetSystemCursor (IDC_ARROW),GetWindowElementColor (BKC_CONTROL_DEF));
	}

protected:
	DECLARE_MSG_MAP;

	void OnPaint(HDC hdc);
	void OnHScroll(int hs_nc,int pos)
	{
		//printf("OnHScroll\n");
		OnScroll(SB_HORZ,hs_nc,pos);
	}
	void OnVScroll(int vs_nc,int pos)
	{
		//printf("OnVScroll\n");
		OnScroll(SB_VERT,vs_nc,pos);
	}

	DECLARE_CTRL_CLASS(MGFC_CTRL_IMGCTRL)
private:
	MGImage m_img;
	int     m_zoom;
	//DWORD   m_dwFlags;
	void UpdateScrollBar();
};

class MGImageView:public MGMainWnd
{
public:
	MGImageView();
	~MGImageView();

	BOOL Create();

protected:
	DECLARE_MSG_MAP;

	void OnImgPrev(HWND hCtrl,int notify_msg,int ctrlId);
	void OnImgNext(HWND hCtrl,int notify_msg,int ctrlId);
	void OnImgFull(HWND hCtrl,int notify_msg,int ctrlId);
	void OnImgSmall(HWND hCtrl,int notify_msg,int ctrlId);
	void OnImgBig(HWND hCtrl,int notify_msg,int ctrlId);

	void OnExit();
	void OnAbout();

private:
	//MGEdit       m_pathEdit;
	MGImageCtrl  m_imgCtrl;
	MGDirTree    m_dirTree;
	MGFileList   m_fileList;

	void OnItemExpend(HWND hCtrl,int notify_msg,int ctrlId);
	void OnItemSelChange(HWND hCtrl,int notify_msg,int ctrlId);
	//void OnFileSelChange(HWND hCtrl,int notify_msg,int ctrlId);
};

#endif

