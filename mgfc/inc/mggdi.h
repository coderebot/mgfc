/*
 * file mggdi the gdi classes of MGFC
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
#ifndef MINIGUI_GDI_H
#define MINIGUI_GDI_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "mgcomm.h"
#include "mgwnd.h"
MG_EXPORT void GUIAPI SPtoLP (HDC hdc, POINT* pPt);
MG_EXPORT void GUIAPI LPtoSP (HDC hdc, POINT* pPt);

#define HDCNULL  (HDC)NULL

/*
 * undef the function-like Marcos, rewrite them as inline functions
 */
#ifdef GetPenType
#undef GetPenType
inline PenType GetPenType(HDC hdc){ return (PenType)GetDCAttr(hdc,DC_ATTR_PEN_TYPE); }
#endif
#ifdef SetPenType
#undef SetPenType
inline PenType SetPenType(HDC hdc,PenType pt){ return (PenType)SetDCAttr(hdc,DC_ATTR_PEN_TYPE,(DWORD)pt); }
#endif
#ifdef GetPenCapStyle
#undef GetPenCapStyle
inline PTCapStyle GetPenCapStyle(HDC hdc){ return (PTCapStyle)GetDCAttr(hdc, DC_ATTR_PEN_CAP_STYLE);}
#endif
#ifdef SetPenCapStyle
#undef SetPenCapStyle
inline PTCapStyle SetPenCapStyle(HDC hdc,PTCapStyle ptcap){ return (PTCapStyle)SetDCAttr(hdc,DC_ATTR_PEN_CAP_STYLE,(DWORD)ptcap); }
#endif
#ifdef GetPenJoinStyle
#undef GetPenJoinStyle
inline PTJoinStyle GetPenJoinStyle(HDC hdc){ return (PTJoinStyle)GetDCAttr(hdc,DC_ATTR_PEN_JOIN_STYLE); }
#endif
#ifdef SetPenJoinStyle
#undef SetPenJoinStyle
inline PTJoinStyle SetPenJoinStyle(HDC hdc,PTJoinStyle ptjs) { return (PTJoinStyle)SetDCAttr(hdc,DC_ATTR_PEN_JOIN_STYLE,(DWORD)ptjs); }
#endif
#ifdef GetPenWidth
#undef GetPenWidth
inline unsigned int GetPenWidth(HDC hdc){ return (unsigned int)GetDCAttr(hdc,DC_ATTR_PEN_WIDTH); }
#endif
#ifdef SetPenWidth
#undef SetPenWidth
inline unsigned int SetPenWidth(HDC hdc,unsigned int width){ return (unsigned int)SetDCAttr(hdc,DC_ATTR_PEN_WIDTH,(DWORD)width); }
#endif
#ifdef GetBrushType
#undef GetBrushType
inline BrushType GetBrushType(HDC hdc){ return (BrushType)GetDCAttr(hdc,DC_ATTR_BRUSH_TYPE); }
#endif
#ifdef SetBrushType
#undef SetBrushType
inline BrushType SetBrushType(HDC hdc,BrushType bt){ return (BrushType)SetDCAttr(hdc,DC_ATTR_BRUSH_TYPE,(DWORD)bt); }
#endif
#ifdef GetMapMode
#undef GetMapMode
inline int GetMapMode(HDC hdc){ return (int)GetDCAttr(hdc,DC_ATTR_MAP_MODE); }
#endif
#ifdef SetMapMode
#undef SetMapMode
inline int SetMapMode(HDC hdc,DWORD dwMode){ return (int)SetDCAttr(hdc,DC_ATTR_MAP_MODE,dwMode); }
#endif
#ifdef GetViewportOrg
#undef GetViewportOrg
inline void GetViewportOrg(HDC hdc,PPOINT ppt) { GetDCLCS(hdc,DC_LCS_VORG,ppt); }
#endif
#ifdef GetViewportExt
#undef GetViewportExt
inline void GetViewportExt(HDC hdc,PPOINT ppt) { GetDCLCS(hdc,DC_LCS_VEXT,ppt); }
#endif
#ifdef GetWindowOrg
#undef GetWindowOrg
inline void GetWindowOrg(HDC hdc,PPOINT ppt){ GetDCLCS(hdc,DC_LCS_WORG,ppt); }
#endif
#ifdef GetWindowExt
#undef GetWindowExt
inline void GetWindowExt(HDC hdc,PPOINT ppt){ GetDCLCS(hdc,DC_LCS_VORG,ppt); }
#endif
#ifdef SetViewportOrg
#undef SetViewportOrg
inline void SetViewportOrg(HDC hdc,const PPOINT ppt){ SetDCLCS(hdc,DC_LCS_VORG,ppt); }
#endif
#ifdef SetViewportExt
#undef SetViewportExt
inline void SetViewportExt(HDC hdc,const PPOINT ppt){ SetDCLCS(hdc,DC_LCS_VEXT,ppt); }
#endif
#ifdef SetWindowOrg
#undef SetWindowOrg
inline void SetWindowOrg(HDC hdc,const PPOINT ppt){ SetDCLCS(hdc,DC_LCS_WORG,ppt); }
#endif
#ifdef SetWindowExt
#undef SetWindowExt
inline void SetWindowExt(HDC hdc,const PPOINT ppt){ SetDCLCS(hdc,DC_LCS_WEXT,ppt); }
#endif
#ifdef GetTextCharacterExtra
#undef GetTextCharacterExtra
inline int GetTextCharacterExtra(HDC hdc){ return (int)GetDCAttr (hdc, DC_ATTR_CHAR_EXTRA); }
#endif
#ifdef GetTextAboveLineExtra
#undef GetTextAboveLineExtra
inline int GetTextAboveLineExtra(HDC hdc){ return (int)GetDCAttr (hdc, DC_ATTR_ALINE_EXTRA); }
#endif
#ifdef GetTextBellowLineExtra
#undef GetTextBellowLineExtra
inline int GetTextBellowLineExtra(HDC hdc){ return (int)GetDCAttr (hdc, DC_ATTR_BLINE_EXTRA); }
#endif
#ifdef SetTextCharacterExtra
#undef SetTextCharacterExtra
inline int SetTextCharacterExtra(HDC hdc,int extra){ return (int)SetDCAttr (hdc, DC_ATTR_CHAR_EXTRA, (DWORD) extra); }
#endif
#ifdef SetTextAboveLineExtra
#undef SetTextAboveLineExtra
inline int SetTextAboveLineExtra(HDC hdc,int extra){ return (int)SetDCAttr (hdc, DC_ATTR_ALINE_EXTRA, (DWORD) extra); }
#endif
#ifdef SetTextBellowLineExtra
#undef SetTextBellowLineExtra
inline int SetTextBellowLineExtra(HDC hdc,int extra){ return (int)SetDCAttr (hdc, DC_ATTR_BLINE_EXTRA, (DWORD) extra); }
#endif

/*
 * the HDC class
 */
class MGDC
{
public:
	MGDC(HDC hdc):m_hdc(hdc){}
	MGDC(){m_hdc = HDCNULL; }
	~MGDC(){}

	inline operator HDC()
	{
		return m_hdc;
	}

	inline HDC GetHandle() const { return m_hdc; }
	
	inline HDC Attach(HDC hdc){
		HDC hdcold = m_hdc;
		m_hdc = hdc;
		return hdcold;
	}

	inline HDC Dettach(){
		HDC hdcold = m_hdc;
		m_hdc = HDCNULL;
		return hdcold;
	}

	/*
	 * prc is coordinate of Deive. use LPtoDP if your data is logical coordinate
	 */
	inline void SelectClipRect(const PRECT prc){ ::SelectClipRect(m_hdc,prc); }
	inline void SelectClipRect(const MGRect &mgrc){ ::SelectClipRect(m_hdc,(const PRECT)&mgrc); }
	/*
	 * SelectClipRectUser: the prc is logical coordinate
	 */
	inline void SelectClipRectUser(const PRECT prc){ 
		if(!prc) return ;
		RECT rt = *prc;
		LRtoDR(&rt);
		::SelectClipRect(m_hdc,&rt); }
	inline void SelectClipRectUser(const MGRect &mgrc){ SelectClipRectUser((const PRECT)&mgrc); }

	inline PLOGFONT SelectFont(PLOGFONT plogFont){ return ::SelectFont(m_hdc,plogFont); }

	/*
	 * pclipRgn is Divece coordinate
	 */
	inline void SelectClipRegion(const CLIPRGN *pclipRgn)
	{
		::SelectClipRegion(m_hdc,pclipRgn);
	}
	/*
	 * pclipRgn is logical coordinate.
	 * this function will modify the pclipRgn
	 */
	inline void SelectClipRegionUser(CLIPRGN *pclipRgn)
	{
		POINT pt;
		GetViewportOrg(&pt);
		::OffsetRegion(pclipRgn,pt.x,pt.y);
		::SelectClipRegion(m_hdc,pclipRgn);
	}


	inline void FillBox(int x,int y,int w,int h)
	{
		::FillBox(m_hdc,x,y,w,h);
	}

	inline void FillBox(const PRECT prc)
	{
		::FillBox(m_hdc,prc->left,prc->top,prc->right-prc->left,prc->bottom-prc->top);
	}

	inline void FillBox(const MGRect &mgrc)
	{
		::FillBox(m_hdc,mgrc.left,mgrc.top,mgrc.Width(),mgrc.Height());
	}

	inline BOOL FillBoxWithBitmap(int x,int y,int w,int h,const PBITMAP pbmp)
	{
		return ::FillBoxWithBitmap(m_hdc,x,y,w,h,pbmp);
	}

	inline BOOL FillBoxWithBitmap(const PRECT prc,const PBITMAP pbmp)
	{
		return ::FillBoxWithBitmap(m_hdc,prc->left,prc->top,prc->right-prc->left,prc->bottom-prc->top,pbmp);
	}

	inline BOOL FillBoxWithBitmap(const MGRect &mgrc,const PBITMAP pbmp)
	{
		return ::FillBoxWithBitmap(m_hdc,mgrc.left,mgrc.top,mgrc.Width(),mgrc.Height(),pbmp);
	}

	inline BOOL FillBoxWithBitmapPart(int x, int y, int w, int h,int bw, int bh, const PBITMAP pbmp, int xo, int yo)
	{
		return ::FillBoxWithBitmapPart(m_hdc,x,y,w,h,bw,bh,pbmp,xo,yo);
	}

	inline BOOL FillBoxWithBitmapPart(const PRECT prc,int bw, int bh,const PBITMAP pbmp,int xo,int yo)
	{
		return ::FillBoxWithBitmapPart(m_hdc,prc->left,prc->top,prc->right-prc->left,prc->bottom-prc->top,bw,bh,pbmp,xo,yo);
	}

	inline BOOL FillBoxWithBitmapPart(const MGRect &mgrc,int bw, int bh,const PBITMAP pbmp,int xo,int yo)
	{
		return ::FillBoxWithBitmapPart(m_hdc,mgrc.left,mgrc.top,mgrc.Width(),mgrc.Height(),bw,bh,pbmp,xo,yo);
	}

	inline BOOL DrawBitmapPartInBox(int box_x,int box_y,int box_w,int box_h,const PBITMAP pbmp,int x0=0,int y0=0,int bmp_w=0,int bmp_h=0){
		float wscale,hscale;
		if(!pbmp) return FALSE;
		if(bmp_w<=0) bmp_w = pbmp->bmWidth;
		if(bmp_h<=0) bmp_h = pbmp->bmHeight;
		if(box_w<=0) box_w = bmp_w;
		if(box_h<=0) box_h = bmp_h;
		wscale = bmp_w / bmp_w;
		hscale = bmp_h / bmp_h;
		return FillBoxWithBitmapPart(box_x,box_y,box_w,box_h,(int)(pbmp->bmWidth*wscale),(int)(pbmp->bmHeight*hscale),pbmp,(int)(x0*wscale),(int)(y0*hscale));
	}
	inline BOOL DrawBitmapPartInBox(const PRECT prt_box,const PBITMAP pbmp,const PRECT prt_bmp){
		if(!pbmp) return FALSE;
		if(prt_box){
			if(prt_bmp){
				DrawBitmapPartInBox(prt_box->left,prt_box->top,prt_box->right-prt_box->left,prt_box->bottom-prt_box->top, 
					pbmp,prt_bmp->left,prt_bmp->top,prt_bmp->right-prt_bmp->left,prt_bmp->bottom-prt_bmp->left);
			}
			else{
				DrawBitmapPartInBox(prt_box->left,prt_box->top,prt_box->right-prt_box->left,prt_box->bottom-prt_box->top, 
					pbmp,0,0,0,0);
			}
		}
		else{
			if(prt_bmp){
				DrawBitmapPartInBox(0,0,0,0,pbmp,prt_bmp->left,prt_bmp->top,prt_bmp->right-prt_bmp->left,prt_bmp->bottom-prt_bmp->left);
			}
			else
			{
				DrawBitmapPartInBox(0,0,0,0,pbmp,0,0,0,0);
			}
		}
	}
	inline BOOL DrawBitmapPartInBox(const RECT& rt_box,const PBITMAP pbmp,const RECT& rt_bmp){
		return DrawBitmapPartInBox(&rt_box,pbmp,&rt_bmp);
	}
	inline BOOL DrawBitmapPartInBox(const MGRect& rt_box,const PBITMAP pbmp,const MGRect& rt_bmp){
		return DrawBitmapPartInBox(&rt_box,pbmp,&rt_bmp);
	}

	inline void FillCircle(int sx,int sy,int r){
		::FillCircle(m_hdc,sx,sy,r);
	}
	inline void FillCircle(POINT pt,int r){ FillCircle(pt.x,pt.y,r); }
	inline void FillCircle(MGPoint pt,int r){ FillCircle(pt.x,pt.y,r); }

	inline void FillEllipse(int sx,int sy,int rx,int ry){
		::FillEllipse(m_hdc,sx,sy,rx,ry);
	}
	inline void FillEllipse(const PRECT prt){ 
		if(prt) FillEllipse((prt->left+prt->right)/2,(prt->top+prt->bottom)/2,abs((prt->right-prt->left)/2),abs((prt->bottom-prt->top)/2));
	}
	inline void FillEllipse(const RECT &rt){ FillEllipse((rt.left+rt.right)/2,(rt.top+rt.bottom)/2,abs((rt.right-rt.left)/2),abs((rt.bottom-rt.top)/2)); }
	inline void FillEllipse(const MGRect &rt){ FillEllipse((const RECT)rt);}

	inline BOOL FillPolygon(const POINT *pts,int vertices){ return ::FillPolygon(m_hdc,pts,vertices); }
	
	inline BOOL FloodFill(int x,int y){ return ::FloodFill(m_hdc,x,y); }
	inline BOOL FloodFill(POINT pt){ return FloodFill(pt.x,pt.y); }
	inline BOOL FloodFill(MGPoint pt){ return FloodFill((POINT)pt); } 

	inline void FillArcEx(int x,int y,int w,int h,int ang1,int ang2)
	{
		return ::FillArcEx(m_hdc,x,y,w,h,ang1,ang2);
	}

	inline void FillArcEx(const PRECT prc,int ang1,int ang2)
	{
		return ::FillArcEx(m_hdc,prc->left,prc->top,prc->right-prc->left,prc->bottom-prc->top,ang1,ang2);
	}

	inline void FillArcEx(const MGRect &mgrc,int ang1,int ang2)
	{
		return ::FillArcEx(m_hdc,mgrc.left,mgrc.top,mgrc.Width(),mgrc.Height(),ang1,ang2);
	}

	inline BOOL RoundRect(int x0,int y0,int x1,int y1,int rw,int rh)
	{
		return ::RoundRect(m_hdc,x0,y0,x1,y1,rw,rh);
	}

	inline BOOL RoundRect(const PRECT prc,int rw,int rh)
	{
		return ::RoundRect(m_hdc,prc->left,prc->top,prc->right,prc->bottom,rw,rh);
	}

	inline BOOL RoundRect(const MGRect& mgrc,int rw,int rh)
	{
		return ::RoundRect(m_hdc,mgrc.left,mgrc.top,mgrc.Width(),mgrc.Height(),rw,rh);
	}

	inline void Line(int x0,int y0,int x1,int y1)
	{
		return LineEx(m_hdc,x0,y0,x1,y1);
	}

	inline void PolyLineEx(const PPOINT ppt,int pt_nr)
	{
		return ::PolyLineEx(m_hdc,ppt,pt_nr);
	}

	inline void PolyFillArcEx(const ARC* arcs, int nr_arcs)
	{
		return ::PolyFillArcEx(m_hdc,arcs,nr_arcs);
	}

	inline int TextOut(int x,int y, const char* strText)
	{
		return TextOutLen(x,y,strText);
	}
	
	inline int TextOutLen(int x,int y,const char* strText,int len=-1)
	{
		return ::TextOutLen(m_hdc,x,y,strText,len);
	}

	inline int TabbedTextOut(int x,int y,const char* strText)
	{
		return TabbedTextOutLen(x,y,strText);
	}

	inline int TabbedTextOutLen(int x,int y,const char* strText,int len=-1)
	{
		return ::TabbedTextOutLen(m_hdc,x,y,strText,len);
	}

	inline int DrawText(const PRECT prc,const char* text,int nCount=-1,UINT format=DT_LEFT,int indent=0,DTFIRSTLINE *firstline=NULL)
	{
		return DrawTextEx2(m_hdc,text,nCount,prc,indent,format,firstline);
	}

	inline void DPtoLP(POINT *pt){ ::DPtoLP(m_hdc,pt); }
	inline void LPtoDP(POINT *pt){ ::LPtoDP(m_hdc,pt); }
	inline void SPtoLP(POINT *pt){ ::SPtoLP(m_hdc,pt); }
	inline void LPtoSP(POINT *pt){ ::LPtoSP(m_hdc,pt); }

	inline void DRtoLR(PRECT prt){ if(prt){ ::DPtoLP(m_hdc,(POINT*)prt); ::DPtoLP(m_hdc,(POINT*)&(prt->right));} }
	inline void DevRect2LogicRect(PRECT prt){ DRtoLR(prt); }
	inline void LRtoDR(PRECT prt){ if(prt){ ::LPtoDP(m_hdc,(POINT*)prt); ::LPtoDP(m_hdc,(POINT*)&(prt->right));} }
	inline void LogicRect2DevRect(PRECT prt){ LRtoDR(prt); }
	inline void SRtoLR(PRECT prt){ if(prt){ ::SPtoLP(m_hdc,(POINT*)prt); ::SPtoLP(m_hdc,(POINT*)&(prt->right));} }
	inline void LRtoSP(PRECT prt){ if(prt){ ::LPtoSP(m_hdc,(POINT*)prt); ::LPtoSP(m_hdc,(POINT*)&(prt->right));} }

	inline BOOL SetPalette(int start, int len, GAL_Color * cmap)
	{
		return ::SetPalette(m_hdc,start,len,cmap);
	}

	inline Uint8 * LockDC (const RECT* rw_rc, int* width, int* height, int* pitch)
	{
		return ::LockDC(m_hdc,rw_rc,width,height,pitch);
	}

	inline void UnlockDC(){ ::UnlockDC(m_hdc); }

//	inline void TerminateSlaveScreen(){ ::TerminateSlaveScreen(m_hdc); }

	inline HICON LoadIconFromFile(const char* filename,int which=0)
	{
		return ::LoadIconFromFile(m_hdc,filename,which);
	}
	inline HICON LoadIconFromMem(const void* area, int which=0){
		return ::LoadIconFromMem(m_hdc,area,which);
	}

	inline HICON CreateIconEx(int w, int h,const BYTE* AndBits, const BYTE* XorBits, int colornum, const RGB* pal=NULL){
		return ::CreateIconEx(m_hdc,w,h,AndBits,XorBits,colornum,pal);
	}

	inline void DrawIcon(int x,int y,int w,int h,HICON hIcon)
	{
		::DrawIcon(m_hdc,x,y,w,h,hIcon);
	}
	inline void DrawIcon(const PRECT prc,HICON hIcon)
	{
		::DrawIcon(m_hdc,prc->left,prc->top,prc->right-prc->left,prc->bottom-prc->top,hIcon);
	}
	inline void DrawIcon(const MGRect &mgrc,HICON hIcon)
	{
		::DrawIcon(m_hdc,mgrc.left,mgrc.top,mgrc.Width(),mgrc.Height(),hIcon);
	}

	inline int LoadBitmapEx(PBITMAP bmp, MG_RWops* area, const char* ext)
	{
		return ::LoadBitmapEx(m_hdc,bmp,area,ext);
	}

	inline int LoadBitmapEx(PBITMAP bmp, const char* file_name)
	{
		return ::LoadBitmapFromFile(m_hdc,bmp,file_name);
	}

	inline int LoadBitmapEx(PBITMAP bmp, const void* mem, int size,const char* ext)
	{
		return ::LoadBitmapFromMem(m_hdc,bmp,mem,size,ext);
	}

	inline void SetPixel(int x, int y, gal_pixel pixel)
	{
		::SetPixel(m_hdc,x,y,pixel);
	}
	inline int SetPixel(int x,int y, Uint8 r,Uint8 g,Uint8 b)
	{
		return ::SetPixelRGB(m_hdc,x,y,r,g,b);
	}
	inline int SetPixel(int x, int y, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
	{
		return ::SetPixelRGBA(m_hdc,x,y,r,g,b,a);
	}
	inline gal_pixel GetPixel(int x,int y){ return ::GetPixel(m_hdc,x,y); }
	inline void GetPixel(int x,int y,Uint8 *pr,Uint8 *pg,Uint8 *pb){
		::GetPixelRGB(m_hdc,x,y,pr,pg,pb);
	}
	inline void GetPixel(int x,int y,Uint8 &r,Uint8 &g,Uint8 &b){
		::GetPixelRGB(m_hdc,x,y,&r,&g,&b);
	}
	inline void GetPixel(int x,int y,Uint8 *pr,Uint8 *pg,Uint8 *pb,Uint8 *pa){
		::GetPixelRGBA(m_hdc,x,y,pr,pg,pb,pa);
	}
	inline void GetPixel(int x,int y,Uint8 &r,Uint8 &g,Uint8 &b,Uint8 &a){
		::GetPixelRGBA(m_hdc,x,y,&r,&g,&b,&a);
	}

	// font 
	//inline int GetFontWidth(){ return ::GetFontWidth(m_hdc); }
	inline int GetMaxFontWidth(){ return ::GetMaxFontWidth(m_hdc); }

	inline void GetTextExtent(const char* spText, int len, SIZE* pSize)
	{
		::GetTextExtent(m_hdc,spText,len,pSize);
	}
	inline void GetTabbedTextExtent (const char* spText, int len,SIZE* pSize)
	{
		::GetTabbedTextExtent(m_hdc,spText,len,pSize);
	}
	inline void GetLastTextOutPos(POINT *pt)
	{
		::GetLastTextOutPos(m_hdc,pt);
	}
	inline void GetLastTextOutPos(int *px,int *py)
	{
		POINT pt;
		GetLastTextOutPos(&pt);
		if(px) *px = pt.x;
		if(py) *py = pt.y;
	}
	inline int GetTextExtentPoint(const char* text, int len,int max_extent, int* fit_chars, int* pos_chars,int* dx_chars, SIZE* size){
		return ::GetTextExtentPoint(m_hdc,text,len,max_extent,fit_chars,pos_chars,dx_chars,size);
	}
	inline int TextOutOmitted(int x, int y,const char *mtext, int len, int max_extent){
		return ::TextOutOmitted(m_hdc,x,y,mtext,len,max_extent);
	}
	inline int GetTabbedTextExtentPoint(const char* text, int len, int max_extent,int* fit_chars, int* pos_chars, int* dx_chars, SIZE* size){
		return ::GetTabbedTextExtentPoint(m_hdc,text,len,max_extent,fit_chars,pos_chars,dx_chars,size);
	}
	int GetTextCharacterExtra(){ return ::GetTextCharacterExtra(m_hdc); }
	int SetTextCharacterExtra(int extra){ return ::SetTextCharacterExtra(m_hdc,extra); }
	int GetTextAboveLineExtra(){ return ::GetTextAboveLineExtra(m_hdc); }
	int SetTextAboveLineExtra(int extra){ return ::SetTextAboveLineExtra(m_hdc,extra); }
	int GetTextBellowLineExtra(){ return ::GetTextBellowLineExtra(m_hdc); }
	int SetTextBellowLineExtra(int extra){ return ::SetTextBellowLineExtra(m_hdc,extra); }

	inline void DrawPoint(int x,int y,int size,gal_pixel pixel)
	{
		x+= (size/2);
		y+= (size/2);
		int xend = x+size;
		int yend = y+size;
		int yt;
		for(;x<xend;x++)
			for(yt=y;yt<yend;yt++)
				SetPixel(x,yt,pixel);
	}
	inline void DrawPoint(int x,int y,int size,Uint8 r,Uint8 g,Uint8 b)
	{
		DrawPoint(x,y,size,RGB2Pixel(r,g,b));
	}
	inline void DrawPoint(int x, int y,int size, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
	{
		DrawPoint(x,y,size,RGBA2Pixel(r,g,b,a));
	}

	inline gal_pixel RGBA2Pixel(Uint8 r,Uint8 g,Uint8 b,Uint8 a){ return ::RGBA2Pixel(m_hdc,r,g,b,a); }
	inline gal_pixel RGB2Pixel(Uint8 r,Uint8 g,Uint8 b){ return ::RGB2Pixel(m_hdc,r,g,b); }
	inline void Pixel2RGBA(gal_pixel galpixel,Uint8 *pr,Uint8 *pg,Uint8 *pb,Uint8 *pa){
		::Pixel2RGBA(m_hdc,galpixel,pr,pg,pb,pa);
	}
	inline void Pixel2RGBA(gal_pixel galpixel,Uint8 &r,Uint8 &g,Uint8 &b,Uint8 &a){
		::Pixel2RGBA(m_hdc,galpixel,&r,&g,&b,&a);
	}
	inline void Pixel2RGB(gal_pixel galpixel,Uint8 *pr,Uint8 *pg,Uint8 *pb){
		::Pixel2RGB(m_hdc,galpixel,pr,pg,pb);
	}
	inline void Pixel2RGB(gal_pixel galpixel,Uint8 &r,Uint8 &g,Uint8 &b){
		::Pixel2RGB(m_hdc,galpixel,&r,&g,&b);
	}

	inline void FocusRect(const PRECT prt){
		if(prt)::FocusRect(m_hdc,prt->left,prt->top,prt->right,prt->bottom);
	}
	inline void FocusRect(int x0,int y0,int x1,int y1){
		::FocusRect(m_hdc,x0,y0,x1,y1);
	}
	inline void FocusRect(const MGRect &rt){
		FocusRect((RECT*)&rt);
	}
	inline void FocusRect(const RECT &rt){
		FocusRect(&rt);
	}

	inline void MoveTo(int x,int y){
		::MoveTo(m_hdc,x,y);
	}
	inline void LineTo(int x,int y){
		::LineTo(m_hdc,x,y);
	}

	inline void Rectangle(int x0,int y0,int x1,int y1){
		return ::Rectangle(m_hdc,x0,y0,x1,y1);
	}
	inline void Rectangle(const PRECT prt){
		if(prt) ::Rectangle(m_hdc,prt->left,prt->top,prt->right,prt->right);
	}
	inline void Rectangle(const RECT &rt){ Rectangle(&rt); }
	inline void Rectangle(const MGRect &rt){ Rectangle(&rt); }

	inline void PolyLineTo(const POINT *pts,int vertices){ ::PolyLineTo(m_hdc,pts,vertices); }
	inline void SplineTo(const POINT *pts/*POINT[4]*/){ ::SplineTo(m_hdc,pts); }
	inline void Circle(int sx,int sy,int r){ ::Circle(m_hdc,sx,sy,r); }
	inline void Circle(POINT pt,int r){ Circle(pt.x,pt.y,r); }
	inline void Circle(MGPoint pt,int r){ Circle((POINT)pt,r); }
	inline void Ellipse(int sx,int sy,int rx,int ry){ ::Ellipse(m_hdc,sx,sy,rx,ry); }
	inline void Ellipse(const PRECT prt){ 
		if(prt) Ellipse((prt->left+prt->right)/2,(prt->top+prt->bottom)/2,abs((prt->right-prt->left)/2),abs((prt->bottom-prt->top)/2));
	}
	inline void Ellipse(const RECT &rt){
		Ellipse((rt.left+rt.right)/2,(rt.top+rt.bottom)/2,abs((rt.right-rt.left)/2),abs((rt.bottom-rt.top)/2));
	}
	inline void Ellipse(const MGRect &rt){ Ellipse((const RECT)rt); }

	inline void CircleArc(int sx,int sy,int r,int ang1,int ang2){
		::CircleArc(m_hdc,sx,sy,r,ang1,ang2);
	}
	inline void CircleArc(POINT pt,int r,int ang1,int ang2){
		CircleArc(pt.x,pt.y,r,ang1,ang2);
	}
	inline void CircleArc(MGPoint pt,int r,int ang1,int ang2){ CircleArc((POINT)pt,r,ang1,ang2); }

	inline PenType GetPenType(){ return (PenType)::GetDCAttr(m_hdc,DC_ATTR_PEN_TYPE); }
	inline PenType SetPenType(PenType pt){ return (PenType)::SetDCAttr(m_hdc,DC_ATTR_PEN_TYPE,(DWORD)pt); }

	inline void SetPenDashes(int dash_offset,const unsigned char* dash_list, int n){
		::SetPenDashes(m_hdc,dash_offset,dash_list,n);
	}

	inline PTCapStyle GetPenCapStyle(){ return (PTCapStyle)::GetDCAttr(m_hdc, DC_ATTR_PEN_CAP_STYLE);}
	inline PTCapStyle SetPenCapStyle(PTCapStyle ptcap){ return (PTCapStyle)::SetDCAttr(m_hdc,DC_ATTR_PEN_CAP_STYLE,(DWORD)ptcap); }
	
	inline PTJoinStyle GetPenJoinStyle(){ return (PTJoinStyle)::GetDCAttr(m_hdc,DC_ATTR_PEN_JOIN_STYLE); }
	inline PTJoinStyle SetPenJoinStyle(PTJoinStyle ptjs) { return (PTJoinStyle)::SetDCAttr(m_hdc,DC_ATTR_PEN_JOIN_STYLE,(DWORD)ptjs); }
	
	inline unsigned int GetPenWidth(){ return (unsigned int)::GetDCAttr(m_hdc,DC_ATTR_PEN_WIDTH); }
	inline unsigned int SetPenWidth(unsigned int width){ return (unsigned int)::SetDCAttr(m_hdc,DC_ATTR_PEN_WIDTH,(DWORD)width); }

	inline BrushType GetBrushType(){ return (BrushType)::GetDCAttr(m_hdc,DC_ATTR_BRUSH_TYPE); }
	inline BrushType SetBrushType(BrushType bt){ return (BrushType)::SetDCAttr(m_hdc,DC_ATTR_BRUSH_TYPE,(DWORD)bt); }
	inline void SetBrushInfo(const BITMAP* tile, const STIPPLE* stipple){ return ::SetBrushInfo(m_hdc,tile,stipple); }
	inline void SetBrushOrigin(int x,int y){ ::SetBrushOrigin(m_hdc,x,y); }
	inline void SetBrushOrigin(POINT pt){ ::SetBrushOrigin(m_hdc,pt.x,pt.y); }
	inline void SetBrushOrigin(MGPoint pt){ SetBrushOrigin((POINT)pt); }

	inline void ArcEx(int x,int y,int width,int height,int ang1,int ang2){
		::ArcEx(m_hdc,x,y,width,height,ang1,ang2);
	}
	inline void ArcEx(const MGRect* prt,int ang1,int ang2){
		if(prt) ::ArcEx(m_hdc,prt->left,prt->top,prt->Width(),prt->Height(),ang1,ang2);
	}
	inline void ArcEx(const MGRect& rt,int ang1,int ang2){
		::ArcEx(m_hdc,rt.left,rt.top,rt.Width(),rt.Height(),ang1,ang2);
	}
	inline void ArcEx(const RECT& rt,int ang1,int ang2){
		ArcEx((const MGRect)rt,ang1,ang2);
	}

	inline int GetMapMode(){ return (int)::GetDCAttr(m_hdc,DC_ATTR_MAP_MODE); }
	inline int SetMapMode(DWORD dwMode){ return (int)::SetDCAttr(m_hdc,DC_ATTR_MAP_MODE,dwMode); }

	inline void GetViewportOrg(PPOINT ppt) { ::GetDCLCS(m_hdc,DC_LCS_VORG,ppt); }
	inline void GetViewportOrg(int &x,int &y){ POINT pt; GetViewportOrg(&pt); x = pt.x; y = pt.y; }
	inline POINT GetViewportOrg(){ POINT pt; GetViewportOrg(&pt); return pt; }

	inline void GetViewportExt(PPOINT ppt) { ::GetDCLCS(m_hdc,DC_LCS_VEXT,ppt); }
	inline void GetViewportExt(int &x,int &y){ POINT pt; GetViewportExt(&pt); x = pt.x; y = pt.y; }
	inline POINT GetViewportExt(){ POINT pt; GetViewportOrg(&pt); return pt; }

	inline void GetWindowOrg(PPOINT ppt){ ::GetDCLCS(m_hdc,DC_LCS_WORG,ppt); }
	inline void GetWindowOrg(int &x,int &y){ POINT pt; GetWindowOrg(&pt); x=pt.x; y=pt.y; }
	inline POINT GetWindowOrg(){ POINT pt; GetViewportOrg(&pt); return pt; }

	inline void GetWindowExt(PPOINT ppt){ ::GetDCLCS(m_hdc,DC_LCS_VORG,ppt); }
	inline void GetWindowExt(int &x,int &y){ POINT pt; GetWindowExt(&pt); x = pt.x; y = pt.y; }
	inline POINT GetWindowEx(){ POINT pt; GetViewportOrg(&pt); return pt; }


	inline void SetViewportOrg(const PPOINT ppt){ ::SetDCLCS(m_hdc,DC_LCS_VORG,ppt); }
	inline void SetViewportOrg(const POINT pt){ SetViewportOrg((const PPOINT)&pt); }
	inline void SetViewportOrg(const MGPoint pt){ SetViewportOrg((const PPOINT)&pt); }
	inline void SetViewportOrg(int x,int y){ POINT pt={x,y}; SetViewportOrg(&pt); }
	inline void SetViewportOrgUser(const PPOINT ppt){ 
		if(ppt==NULL) return;
		POINT pt; 
		::GetDCLCS(m_hdc,DC_LCS_VORG,&pt); 
		pt.x += ppt->x; pt.y += ppt->y;
		::SetDCLCS(m_hdc,DC_LCS_VORG,&pt);
	}
	inline void SetViewportOrgUser(const POINT pt){ SetViewportOrgUser((const PPOINT)&pt); }
	inline void SetViewportOrgUser(const MGPoint pt){ SetViewportOrgUser((const PPOINT)&pt); }
	inline void SetViewportOrgUser(int x,int y){ POINT pt={x,y}; SetViewportOrgUser(&pt); }


	inline void SetViewportExt(const PPOINT ppt){ ::SetDCLCS(m_hdc,DC_LCS_VEXT,ppt); }
	inline void SetViewportExt(const POINT pt){ SetViewportExt((const PPOINT)&pt); }
	inline void SetViewportExt(const MGPoint pt){ SetViewportExt((const PPOINT)&pt); }
	inline void SetViewportExt(int x,int y){ POINT pt={x,y}; SetViewportOrg(&pt); }

	inline void SetWindowOrg(const PPOINT ppt){ ::SetDCLCS(m_hdc,DC_LCS_WORG,ppt); }
	inline void SetWindowOrg(const POINT pt){ SetWindowOrg((const PPOINT)&pt); }
	inline void SetWindowOrg(const MGPoint pt){ SetWindowOrg((const PPOINT)&pt); }
	inline void SetWindowOrg(int x,int y){ POINT pt={x,y}; SetWindowOrg(&pt); }
	inline void SetWindowOrgUser(const PPOINT ppt){ 
		if(ppt==NULL) return ;
		POINT pt;
		::GetDCLCS(m_hdc,DC_LCS_VORG,&pt);
		pt.x += ppt->x; pt.y += ppt->y;
		::SetDCLCS(m_hdc,DC_LCS_WORG,&pt);
	}
	inline void SetWindowOrgUser(const POINT pt){ SetWindowOrgUser((const PPOINT)&pt); }
	inline void SetWindowOrgUser(const MGPoint pt){ SetWindowOrgUser((const PPOINT)&pt); }
	inline void SetWindowOrgUser(int x,int y){ POINT pt={x,y}; SetWindowOrgUser(&pt); }

	inline void SetWindowExt(const PPOINT ppt){ ::SetDCLCS(m_hdc,DC_LCS_WEXT,ppt); }
	inline void SetWindowExt(const POINT pt){ SetWindowExt((const PPOINT)&pt); }
	inline void SetWindowExt(const MGPoint pt){ SetWindowExt((const PPOINT)&pt); }
	inline void SetWindowExt(int x,int y){ POINT pt={x,y}; SetWindowExt(&pt); }

	inline void ExcludeClipRect(const RECT* prt){ ::ExcludeClipRect(m_hdc,prt); }
	inline void IncludeClipRect(const RECT* prt){ ::IncludeClipRect(m_hdc,prt); }

	inline BOOL PtVisible(int x,int y){ return ::PtVisible(m_hdc,x,y); }
	inline BOOL PtVisible(const POINT pt){ return PtVisible(pt.x,pt.y); }
	inline BOOL PtVisible(const MGPoint pt){ return PtVisible(pt.x,pt.y); }
	inline BOOL PtVisibleUser(int x,int y){ 
		POINT pt={x,y};
		::LPtoDP(m_hdc,&pt);
		return ::PtVisible(m_hdc,pt.x,pt.y); 
	}
	inline BOOL PtVisibleUser(const POINT pt){ return PtVisibleUser(pt.x,pt.y); }
	inline BOOL PtVisibleUser(const MGPoint pt){ return PtVisibleUser(pt.x,pt.y); }


	inline void ClipRectIntersect(const RECT* prt){ return ::ClipRectIntersect(m_hdc,prt); }
	inline void ClipRectIntersectUser(const RECT* prt){
		assert(prt);//if(!prt) return;
		RECT rt = *prt;
		LRtoDR(&rt);	
		return ::ClipRectIntersect(m_hdc,&rt);
	}

	inline void GetBoundsRect(PRECT prt){ return ::GetBoundsRect(m_hdc,prt); }
	inline void GetBoundsRect(RECT &rt){ return GetBoundsRect(&rt); }
	inline void GetBoundsRect(MGRect &rt){ return GetBoundsRect(&rt); }
	inline void GetBoundsRectUser(PRECT prt){ 
		assert(prt);
		::GetBoundsRect(m_hdc,prt);
		DRtoLR(prt);
	}
	inline void GetBoundsRectUser(RECT &rt){ return GetBoundsRectUser(&rt); }
	inline void GetBoundsRectUser(MGRect &rt){ return GetBoundsRectUser(&rt); }

	inline BOOL RectVisible(const PRECT prt){ return ::RectVisible(m_hdc,prt); }
	inline BOOL RectVisible(const RECT &rt){ return RectVisible(&rt); }
	inline BOOL RectVisible(const MGRect &rt){ return RectVisible(&rt); }
	inline BOOL RectVisibleUser(const PRECT prt){ 
		assert(prt);
		RECT rt = *prt;
		LRtoDR(&rt);
		return ::RectVisible(m_hdc,&rt); 
	}
	inline BOOL RectVisibleUser(const RECT &rt){ return RectVisibleUser(&rt); }
	inline BOOL RectVisibleUser(const MGRect &rt){ return RectVisibleUser(&rt); }

	inline BOOL GetBitmapFromDC(int x,int y,int w,int h,PBITMAP pbmp){
		return ::GetBitmapFromDC(m_hdc,x,y,w,h,pbmp);
	}
	inline BOOL GetBitmapFromDC(const MGRect &rt,PBITMAP pbmp){ 
		return GetBitmapFromDC(rt.left,rt.top,rt.Width(),rt.Height(),pbmp);
	}
	inline BOOL GetBitmapFromDC(const RECT &rt,PBITMAP pbmp){ return GetBitmapFromDC((const MGRect)rt,pbmp); }
	inline BOOL GetBitmapFromDC(const PRECT *prt,PBITMAP pbmp){ return prt?GetBitmapFromDC((const MGRect)*prt,pbmp):FALSE; }
	

	/*
	 * BitBlt, StrethBlt function use Device coordinate
	 */
	inline void BitBlt(int sx, int sy, int sw, int sh,HDC hddc, int dx=0, int dy=0, DWORD dwRop=0){
		::BitBlt(m_hdc,sx,sy,sw,sh,hddc,dx,dy,dwRop);
	}
	inline void BitBlt(int sx,int sy,int sw,int sh,MGDC *pdc,int dx=0,int dy=0,DWORD dwRop=0){
		if(!pdc) return ;
		BitBlt(sx,sy,sw,sh,pdc->GetHandle(),dx,dy,dwRop);
	}
	inline void BitBlt(const PRECT prt,HDC hddc,int dx=0,int dy=0,DWORD dwRop=0){
		if(prt) BitBlt(prt->left,prt->top,prt->right-prt->left,prt->bottom-prt->top,hddc,dx,dy,dwRop);
	}
	inline void BitBlt(const PRECT prt,MGDC *pdc,int dx=0,int dy=0,DWORD dwRop=0){
		if(prt && pdc) BitBlt(prt,pdc->GetHandle(),dx,dy,dwRop);
	}

	inline void BitBlt(HDC hdcsrc,int sx, int sy, int sw, int sh, int dx=0, int dy=0, DWORD dwRop=0){
		::BitBlt(hdcsrc,sx,sy,sw,sh,m_hdc,dx,dy,dwRop);
	}
	inline void BitBlt(MGDC *psrcdc,int sx,int sy,int sw,int sh,int dx=0,int dy=0,DWORD dwRop=0){
		if(!psrcdc) return ;
		::BitBlt(psrcdc->GetHandle(),sx,sy,sw,sh,m_hdc,dx,dy,dwRop);
	}
	inline void BitBlt(HDC hsrcdc,const PRECT prt,int dx=0,int dy=0,DWORD dwRop=0){
		if(prt) ::BitBlt(hsrcdc,prt->left,prt->top,prt->right-prt->left,prt->bottom-prt->top,m_hdc,dx,dy,dwRop);
	}
	inline void BitBlt(MGDC* psrcdc,const PRECT prt,int dx=0,int dy=0,DWORD dwRop=0){
		if(prt && psrcdc) BitBlt(psrcdc->GetHandle(),prt,dx,dy,dwRop);
	}
	//user coordinate
	inline void BitBltUser(int sx, int sy, int sw, int sh,HDC hddc, int dx=0, int dy=0, DWORD dwRop=0){
		RECT  rtSrc={sx,sy,sw+sx,sh+sy};
		POINT ptDst={dx,dy};
		LRtoDR(&rtSrc);
		LPtoDP(&ptDst);
		::BitBlt(m_hdc,rtSrc.left,rtSrc.top,rtSrc.right-rtSrc.left,rtSrc.bottom-rtSrc.top,hddc,ptDst.x,ptDst.y,dwRop);
	}
	inline void BitBltUser(int sx,int sy,int sw,int sh,MGDC *pdc,int dx=0,int dy=0,DWORD dwRop=0){
		if(!pdc) return ;
		BitBltUser(sx,sy,sw,sh,pdc->GetHandle(),dx,dy,dwRop);
	}
	inline void BitBltUser(const PRECT prt,HDC hddc,int dx=0,int dy=0,DWORD dwRop=0){
		if(prt){
			BitBltUser(prt->left,prt->top,prt->right-prt->left,prt->bottom-prt->top,hddc,dx,dy,dwRop);
		}
	}
	inline void BitBltUser(const PRECT prt,MGDC *pdc,int dx=0,int dy=0,DWORD dwRop=0){
		if(prt && pdc) BitBltUser(prt,pdc->GetHandle(),dx,dy,dwRop);
	}

	inline void BitBltUser(HDC hdcsrc,int sx, int sy, int sw, int sh, int dx=0, int dy=0, DWORD dwRop=0){
		RECT rtSrc={sx,sy,sx+sw,sh+sy};
		POINT ptDst={dx,dy};
		LRtoDR(&rtSrc);
		LPtoDP(&ptDst);
		::BitBlt(hdcsrc,rtSrc.left,rtSrc.top,rtSrc.right-rtSrc.left,rtSrc.bottom-rtSrc.top,m_hdc,ptDst.x,ptDst.y,dwRop);
	}
	inline void BitBltUser(MGDC *psrcdc,int sx,int sy,int sw,int sh,int dx=0,int dy=0,DWORD dwRop=0){
		if(!psrcdc) return ;
		RECT rtSrc={sx,sy,sx+sw,sh+sy};
		POINT ptDst={dx,dy};
		LRtoDR(&rtSrc);
		LPtoDP(&ptDst);
		BitBltUser(psrcdc->GetHandle(),rtSrc.left,rtSrc.top,rtSrc.right-rtSrc.left,rtSrc.bottom-rtSrc.top,ptDst.x,ptDst.y,dwRop);
	}
	inline void BitBltUser(HDC hsrcdc,const PRECT prt,int dx=0,int dy=0,DWORD dwRop=0){
		if(prt) BitBltUser(hsrcdc,prt->left,prt->top,prt->right-prt->left,prt->bottom-prt->top,dx,dy,dwRop);
	}
	inline void BitBltUserUser(MGDC* psrcdc,const PRECT prt,int dx=0,int dy=0,DWORD dwRop=0){
		if(prt && psrcdc) BitBlt(psrcdc->GetHandle(),prt,dx,dy,dwRop);
	}


	inline void StretchBlt(int sx,int sy,int sw,int sh,HDC hddc,int dx=0,int dy=0,int dw=0,int dh=0,DWORD dwRop=0){
		::StretchBlt(m_hdc,sx,sy,sw,sh,hddc,dx,dy,dw==0?sw:dw,dh==0?sh:dh,dwRop);
	}
	inline void StretchBlt(int sx,int sy,int sw,int sh,MGDC *pddc,int dx=0,int dy=0,int dw=0,int dh=0,DWORD dwRop=0){
		if(pddc)
			::StretchBlt(m_hdc,sx,sy,sw,sh,pddc->GetHandle(),dx,dy,dw==0?sw:dw,dh==0?sh:dh,dwRop);
	}
	inline void StretchBlt(const PRECT prt_src,HDC hddc,const PRECT prt_dst=NULL,DWORD dwRop=0){
		if(!prt_src) return ;
		if(prt_dst)
			StretchBlt(prt_src->left,prt_src->top,prt_src->right-prt_src->left,prt_src->bottom-prt_src->top,hddc,
					prt_dst->left,prt_dst->top,prt_dst->right-prt_dst->left,prt_dst->bottom-prt_dst->top,dwRop);
		else
			StretchBlt(prt_src->left,prt_src->top,prt_src->right-prt_src->left,prt_src->bottom-prt_src->top,hddc,0,0,0,0,dwRop);
	}
	inline void StretchBlt(const PRECT prt_src,MGDC *pddc,const PRECT prt_dst=NULL,DWORD dwRop=0){
		if(!prt_src || !pddc) return ;
		StretchBlt(prt_src,pddc->GetHandle(),prt_dst,dwRop);
	}

	inline void StretchBlt(HDC hsrcdc,int sx,int sy,int sw,int sh,int dx=0,int dy=0,int dw=0,int dh=0,DWORD dwRop=0){
		::StretchBlt(hsrcdc,sx,sy,sw,sh,m_hdc,dx,dy,dw==0?sw:dw,dh==0?sh:dh,dwRop);
	}
	inline void StretchBlt(MGDC* psrcdc,int sx,int sy,int sw,int sh,int dx=0,int dy=0,int dw=0,int dh=0,DWORD dwRop=0){
		if(psrcdc)
			::StretchBlt(psrcdc->GetHandle(),sx,sy,sw,sh,m_hdc,dx,dy,dw==0?sw:dw,dh==0?sh:dh,dwRop);
	}
	inline void StretchBlt(HDC hsrcdc,const PRECT prt_src,const PRECT prt_dst=NULL,DWORD dwRop=0){
		if(!prt_src) return ;
		if(prt_dst)
			StretchBlt(hsrcdc,prt_src->left,prt_src->top,prt_src->right-prt_src->left,prt_src->bottom-prt_src->top,
					prt_dst->left,prt_dst->top,prt_dst->right-prt_dst->left,prt_dst->bottom-prt_dst->top,dwRop);
		else
			StretchBlt(hsrcdc,prt_src->left,prt_src->top,prt_src->right-prt_src->left,prt_src->bottom-prt_src->top, 0,0,0,0,dwRop);
	}
	inline void StretchBlt(MGDC* psrcdc,const PRECT prt_src,const PRECT prt_dst=NULL,DWORD dwRop=0){
		if(!prt_src || !psrcdc) return ;
		StretchBlt(psrcdc->GetHandle(),prt_src,prt_dst,dwRop);
	}
	//user stretchblt
	inline void StretchBltUser(int sx,int sy,int sw,int sh,HDC hddc,int dx=0,int dy=0,int dw=0,int dh=0,DWORD dwRop=0){
		RECT rtSrc={sx,sy,sx+sw,sy+sh};
		RECT rtDst={dx,dy,(dw<=0?sw:dw)+dx,(dh<=0?sh:dh)+dy};
		LRtoDR(&rtSrc);
		LRtoDR(&rtDst);
		::StretchBlt(m_hdc,rtSrc.left,rtSrc.top,rtSrc.right-rtSrc.left,rtSrc.bottom-rtSrc.top,
				hddc,rtDst.left,rtDst.top,rtDst.right-rtDst.left,rtDst.bottom-rtDst.top,dwRop);
	}
	inline void StretchBltUser(int sx,int sy,int sw,int sh,MGDC *pddc,int dx=0,int dy=0,int dw=0,int dh=0,DWORD dwRop=0){
		if(pddc)
			StretchBltUser(sx,sy,sw,sh,pddc->GetHandle(),dx,dy,dw,dh,dwRop);
	}
	inline void StretchBltUser(const PRECT prt_src,HDC hddc,const PRECT prt_dst=NULL,DWORD dwRop=0){
		if(!prt_src) return ;
		if(prt_dst)
			StretchBltUser(prt_src->left,prt_src->top,prt_src->right-prt_src->left,prt_src->bottom-prt_src->top,hddc,
					prt_dst->left,prt_dst->top,prt_dst->right-prt_dst->left,prt_dst->bottom-prt_dst->top,dwRop);
		else
			StretchBltUser(prt_src->left,prt_src->top,prt_src->right-prt_src->left,prt_src->bottom-prt_src->top,hddc,0,0,0,0,dwRop);
	}
	inline void StretchBltUser(const PRECT prt_src,MGDC *pddc,const PRECT prt_dst=NULL,DWORD dwRop=0){
		if(!prt_src || !pddc) return ;
		StretchBltUser(prt_src,pddc->GetHandle(),prt_dst,dwRop);
	}

	inline void StretchBltUser(HDC hsrcdc,int sx,int sy,int sw,int sh,int dx=0,int dy=0,int dw=0,int dh=0,DWORD dwRop=0){
		RECT rtSrc={sx,sy,sw+sx,sh+sy};
		RECT rtDst={dx,dy,(dw<=0?sw:dw)+dx,(dh<=0?sh:dh)+dy};
		LRtoDR(&rtSrc); LRtoDR(&rtDst);
		::StretchBlt(hsrcdc,rtSrc.left,rtSrc.top,rtSrc.right-rtSrc.left,rtSrc.bottom-rtSrc.top,
				m_hdc,rtDst.left,rtDst.top,rtDst.right-rtDst.left,rtDst.bottom-rtDst.top,dwRop);
	}
	inline void StretchBltUser(MGDC* psrcdc,int sx,int sy,int sw,int sh,int dx=0,int dy=0,int dw=0,int dh=0,DWORD dwRop=0){
		if(psrcdc)
			StretchBltUser(psrcdc->GetHandle(),sx,sy,sw,sh,dx,dy,dw==0?sw:dw,dh==0?sh:dh,dwRop);
	}
	inline void StretchBltUser(HDC hsrcdc,const PRECT prt_src,const PRECT prt_dst=NULL,DWORD dwRop=0){
		if(!prt_src) return ;
		if(prt_dst)
			StretchBltUser(hsrcdc,prt_src->left,prt_src->top,prt_src->right-prt_src->left,prt_src->bottom-prt_src->top,
					prt_dst->left,prt_dst->top,prt_dst->right-prt_dst->left,prt_dst->bottom-prt_dst->top,dwRop);
		else
			StretchBltUser(hsrcdc,prt_src->left,prt_src->top,prt_src->right-prt_src->left,prt_src->bottom-prt_src->top, 0,0,0,0,dwRop);
	}
	inline void StretchBltUser(MGDC* psrcdc,const PRECT prt_src,const PRECT prt_dst=NULL,DWORD dwRop=0){
		if(!prt_src || !psrcdc) return ;
		StretchBltUser(psrcdc->GetHandle(),prt_src,prt_dst,dwRop);
	}

	inline int GetGDCapability(int iItem){ return ::GetGDCapability(m_hdc,iItem); }
	inline int GetColorNum(){ return GetGDCapability(GDCAP_COLORNUM); }
	inline int GetHPixel(){ return GetGDCapability(GDCAP_HPIXEL); }
	inline int GetVPixel(){ return GetGDCapability(GDCAP_VPIXEL); }
	inline int GetMaxX(){ return GetGDCapability(GDCAP_MAXX); }
	inline int GetMaxY(){ return GetGDCapability(GDCAP_MAXY); }
	inline int GetDepth(){ return GetGDCapability(GDCAP_DEPTH); }
	inline int GetBPP(){ return GetGDCapability(GDCAP_BPP); }
	inline int GetBitsPerPixel(){ return GetGDCapability(GDCAP_BITSPP); }
	inline int GetRMask(){ return GetGDCapability(GDCAP_RMASK); }
	inline int GetGMask(){ return GetGDCapability(GDCAP_GMASK); }
	inline int GetBMask(){ return GetGDCapability(GDCAP_BMASK); }

protected:
	HDC m_hdc;
};

/*
 * Class MGMenuDC extend MGDC
 */
class MGMemDC:public MGDC
{
public:
	MGMemDC(){}
	MGMemDC(HDC hdc):MGDC(hdc){}
	MGMemDC(HDC hdc,int width,int height){	Create(hdc,width,height);}
	MGMemDC(int width, int height, int depth, DWORD flags,Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask=0)
	{
		Create(width,height,depth,flags,Rmask,Gmask,Bmask,Amask);
	}
	MGMemDC(const MYBITMAP* my_bmp, RGB* pal){ Create(my_bmp,pal); }
	MGMemDC(HDC hdc, BITMAP* bmp){ Create(hdc,bmp); }
	~MGMemDC()
	{
		if(m_hdc!=HDCNULL)
			DeleteMemDC(m_hdc);
	}

	inline BOOL Create(HDC hdc,int width=0,int height=0)
	{
		m_hdc = CreateCompatibleDCEx(hdc,width,height);
		return m_hdc!=HDCNULL;
	}

	inline BOOL Create(int width, int height, int depth, DWORD flags,Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask=0)
	{
		m_hdc = CreateMemDC(width,height,depth,flags,Rmask,Gmask,Bmask,Amask);
		return m_hdc!=HDCNULL;
	}

	inline BOOL Create(const MYBITMAP* my_bmp, RGB* pal)
	{
		m_hdc = CreateMemDCFromMyBitmap(my_bmp,pal);
		return m_hdc!=HDCNULL;
	}

	inline BOOL Create(HDC hdc, BITMAP* bmp)
	{
		m_hdc = CreateMemDCFromBitmap(hdc,bmp);
		return m_hdc!=HDCNULL; 
	}

	inline BOOL ConvertMemDC(HDC ref_hc,DWORD flags)
	{
		return ::ConvertMemDC(m_hdc,ref_hc,flags);
	}

	inline BOOL SetMemDCAlpha (DWORD flags, Uint8 alpha)
	{
		return ::SetMemDCAlpha(m_hdc,flags,alpha);
	}

	inline BOOL SetMemDCColorKey (DWORD flags, Uint32 color_key)
	{
		return ::SetMemDCColorKey(m_hdc,flags,color_key);
	}

	//inline gal_pixel GetBkColor (){ return ::GetBkColor(m_hdc); }
};

class MGPaintDC:public MGDC
{
public:
	MGPaintDC(HWND hWnd)
	{
		m_hWnd = hWnd;
		m_hdc = BeginPaint(hWnd);
	}

	MGPaintDC(MGWnd* pWnd){
		m_hWnd = (HWND)(*pWnd);
		m_hdc = pWnd->BeginPaint();
	}

	~MGPaintDC()
	{
		if(m_hdc!=HDCNULL)
		{
			EndPaint(m_hWnd,m_hdc);
		}
	}
protected:
	HWND m_hWnd;
};

class MGClientDC:public MGDC
{
public:
	MGClientDC(HWND hWnd)
	{
		m_hdc = GetClientDC(hWnd);
	}

	MGClientDC(MGWnd *pWnd)
	{
		m_hdc = pWnd->GetClientDC();
	}

	~MGClientDC()
	{
		ReleaseDC(m_hdc);
	}
};

class MGWindowDC:public MGDC
{
public:
	MGWindowDC(HWND hWnd)
	{
		m_hdc = GetDC(hWnd);
	}

	MGWindowDC(MGWnd *pWnd)
	{
		m_hdc = pWnd->GetWindowDC();
	}

	~MGWindowDC()
	{
		ReleaseDC(m_hdc);
	}
};

class MGPrivateWindowDC:public MGDC
{
public:
	MGPrivateWindowDC(HWND hWnd)
	{
		m_hdc = CreatePrivateDC(hWnd);
	}

	~MGPrivateWindowDC()
	{
		DeletePrivateDC(m_hdc);
	}
};

class MGPrivateClientDC:public MGDC
{
public:
	MGPrivateClientDC(HWND hWnd)
	{
		m_hdc = CreatePrivateClientDC(hWnd);
	}
	~MGPrivateClientDC()
	{
		DeletePrivateDC(m_hdc);
	}
};

/*
 * the class of bitmap
 */
class MGBitmap:public BITMAP
{
public:
	MGBitmap(HDC hdc,int width,int height){ Create(hdc,width,height); }

	MGBitmap(const MGDC& mgdc,int width,int height){ Create(mgdc,width,height); }
	
	MGBitmap(HDC hdc,const char* strFileName){ Create(hdc,strFileName); }
	
	MGBitmap(const MGDC& mgdc,const char* strFileName){ Create(mgdc,strFileName); }
	
	MGBitmap(HDC hdc,const BYTE* pdata,int size,const char* strExt=NULL){ Create(hdc,pdata,size,strExt); }
	
	MGBitmap(const MGDC& mgdc,const BYTE* pdata,int size,const char* strExt=NULL){ Create(mgdc,pdata,size,strExt); }
	
	MGBitmap();
	
	~MGBitmap();
	
	BOOL Create(HDC hdc,int width, int height);
	
	inline BOOL Create(const MGDC& mgdc,int width,int height){ return Create(mgdc.GetHandle(),width,height); }
	
	BOOL Create(HDC hdc,const char* strFileName);
	
	inline BOOL Create(const MGDC& mgdc,const char* strFileName){ return Create(mgdc.GetHandle(),strFileName); }
	
	BOOL Create(HDC hdc,const BYTE* pdata,int size,const char* strExt=NULL);
	
	inline BOOL Create(const MGDC& mgdc,const BYTE* pdata,int size,const char* strExt=NULL){ return Create(mgdc.GetHandle(),pdata,size,strExt); }

	inline BOOL FillBitmap(HDC hdc,int x=0,int y=0,int w=0,int h=0){
		return ::FillBoxWithBitmap(hdc,x,y,w<=0?bmWidth:w,h<=0?bmHeight:h,(PBITMAP)this);
	}
	
	inline BOOL FillBitmap(HDC hdc,const PRECT prt){
		if(prt) return FillBitmap(hdc,0,0);
		return FillBitmap(hdc,prt->left,prt->top,prt->right-prt->left,prt->bottom-prt->top);
	}
	
	inline BOOL ScaleBitmap(const PBITMAP psrc){
		return ::ScaleBitmap((PBITMAP)this,psrc);
	}

	inline gal_pixel GetPixel(int x,int y){
		return ::GetPixelInBitmap((PBITMAP)this,x,y);
	}
	
	inline gal_pixel GetPixel(POINT pt){
		return ::GetPixelInBitmap((PBITMAP)this,pt.x,pt.y);
	}

	inline BOOL SetPixel(int x,int y,gal_pixel pixel){
		return ::SetPixelInBitmap((PBITMAP)this,x,y,pixel);
	}
	
	inline BOOL SetPixel(POINT pt,gal_pixel pixel){
		return ::SetPixelInBitmap((PBITMAP)this,pt.x,pt.y,pixel);
	}

	void Empty();
};

/*
 * the Font class attach PLOGFONT
 */
class MGLogFont
{
	PLOGFONT m_plog_font;
public:
	MGLogFont(PLOGFONT plog_font=NULL){ if(plog_font)m_plog_font=NULL; else{ if(!Create(plog_font)) m_plog_font=NULL;} }

	MGLogFont(const char* font_name){ if(!Create(font_name)) m_plog_font=NULL; }

	MGLogFont(const char* type,const char* family, const char* charset, char weight, \
		char slant, char flip, char other, char underline, \
		char struckout, int size, int rotation){
		if(!Create(type,family,charset,weight,slant,flip,other,underline,struckout,size,rotation))
			m_plog_font = NULL;
	}
	
	~MGLogFont(){ if(m_plog_font) ::DestroyLogFont(m_plog_font); }
	inline void Empty(){ 
		if(m_plog_font){ ::DestroyLogFont(m_plog_font); m_plog_font=NULL; }
	}
	
	inline PLOGFONT Attach(PLOGFONT plog_font){ 
		if(plog_font){
			PLOGFONT plf = m_plog_font;
			m_plog_font = plog_font;
			return plf;
		}
		return m_plog_font;
	}
	
	inline PLOGFONT Detach(){
		PLOGFONT plf = m_plog_font;
		m_plog_font = NULL;
		return plf;
	}
	
	inline BOOL Create(PLOGFONT plog_font){
		PLOGFONT plf = ::CreateLogFontIndirect(plog_font);
		if(plf){ Empty();  m_plog_font = plf; }
	}
	
	inline BOOL Create(const char* font_name){
		PLOGFONT plf = ::CreateLogFontByName(font_name);
		if(plf){ Empty(); m_plog_font = plf; }
	}
	
	inline BOOL Create(const char* type,const char* family, const char* charset, char weight, \
		char slant, char flip, char other, char underline, \
		char struckout, int size, int rotation)
	{
		PLOGFONT plf = ::CreateLogFont(type,family,charset,weight,slant,flip,other,underline,struckout,size,rotation);
		if(plf){ Empty(); m_plog_font = plf; }
	}
	
	inline operator PLOGFONT(){ return m_plog_font; }
	
	inline PLOGFONT GetHandle() const { return m_plog_font; }
	
	inline int GetTextMCharInfo(const char* mstr,int len,int *pos_chars){ 
		return (m_plog_font)?::GetTextMCharInfo(m_plog_font,mstr,len,pos_chars):0;
	}
	
	inline int GetTextWordInfo(const char* mstr,int len, int* pos_words, WORDINFO* info_words){
		return (m_plog_font)?::GetTextWordInfo(m_plog_font,mstr,len,pos_words,info_words):0;
	}
	
	inline int GetFirstMCharLen(const char* mstr,int len){
		return (m_plog_font)?::GetFirstMCharLen(m_plog_font,mstr,len):0;
	}
	
	inline int GetFirstWord(const char* mstr,int len,WORDINFO* info_words){
		return (m_plog_font)?::GetFirstWord(m_plog_font,mstr,len,info_words):0;
	}

#ifdef _UNICODE_SUPPORT
	inline int MB2WC(wchar_t* dest, const unsigned char* mstr, int n){
		return (m_plog_font)?::MB2WC(m_plog_font,dest,mstr,n):-1;
	}
	inline int WC2MB(unsigned char *s, wchar_t wc){
		return (m_plog_font)?::WC2MB(m_plog_font,s,wc):-1;
	}
	inline int MBS2WCS(wchar_t* dest,const unsigned char* mstr, int mstr_len, int n){
		return (m_plog_font)?::MBS2WCS(m_plog_font,dest,mstr,mstr_len,n):-1;
	}
	inline int WCS2MBS(unsigned char* dest,const wchar_t *wcs, int wcs_len, int n){
		return (m_plog_font)?::WCS2MBS(m_plog_font,dest,wcs,wcs_len,n):-1;
	}
#endif
};


#endif
