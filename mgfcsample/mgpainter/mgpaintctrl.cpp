#include "mgpaintctrl.h"

MGPaintCtrl::MGPaintCtrl()
{
}

MGPaintCtrl::~MGPaintCtrl()
{
}

BEGIN_MSG_MAP(MGPaintCtrl)
	MAP_PAINT(OnPaint)
	MAP_HSCROLL(OnHScroll)
	MAP_VSCROLL(OnVScroll)
	MAP_LBUTTONDOWN(OnLButtonDown)
	MAP_LBUTTONUP(OnLButtonUp)
	MAP_MOUSEMOVE(OnMouseMove)
END_MSG_MAP


void MGPaintCtrl::OnLButtonDown(int x,int y,DWORD key_status)
{
}

void MGPaintCtrl::OnLButtonUp(int x,int y,DWORD key_status)
{
}

void MGPaintCtrl::OnMouseMove(int x,int y,DWORD key_status)
{
}

void MGPaintCtrl::OnPaint(HDC hdc)
{
	MGDC dc(hdc);
	SharpIterator it = m_sharpStack.begin();
	while(!(!it))
	{
		MGSharp *pSharp = (MGSharp*)it;
		if(!pSharp)
			break;
		pSharp->Draw(&dc);
		++ it;
	}
}
