#ifndef MGPAINTER_H
#define MGPAINTER_H
#include "mgwnd.h"
#include "mggdi.h"
#include "mgctrl.h"
#include "mgpaintctrl.h"

class MGPainter:public MGMainWnd
{
public:
	MGPainter(){m_toolbar_bmp = NULL;}
	~MGPainter(){ delete m_toolbar_bmp;}

	BOOL Create();

protected:
	DECLARE_MSG_MAP;

	void OnExit();
	void OnAbout();


private:
	MGPaintCtrl m_paintCtrl;
	MGNewToolBar m_toolbar;
	PBITMAP m_toolbar_bmp;
};

#endif
