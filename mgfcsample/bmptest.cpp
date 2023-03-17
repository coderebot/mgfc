#include <stdio.h>
#include "mgwnd.h"
#include "mggdi.h"
#include "mgapp.h"

class Bmptest:public MGMainWnd
{
public:
	Bmptest();
	~Bmptest();
	BOOL Create();
	
	DECLARE_MSG_MAP;
protected:
	PBITMAP m_pbmp;
	void OnPaint(HDC hdc);
};

BEGIN_MSG_MAP(Bmptest)
	MAP_CLOSE(OnClose)
	MAP_PAINT(OnPaint)
END_MSG_MAP

Bmptest::Bmptest()
{
	m_pbmp = new BITMAP;
	memset(m_pbmp,0,sizeof(BITMAP));
	if(LoadBitmapFromFile(HDC_SCREEN,m_pbmp,"res/bkgnd.jpg")!=ERR_BMP_OK)
	{
		delete m_pbmp;
		fprintf(stderr,"cannot load image:res/bkgnd.jpg\n");
		exit(-1);
	}
}

Bmptest::~Bmptest()
{
	if(m_pbmp)
	{
		UnloadBitmap(m_pbmp);
		delete m_pbmp;
	}
}

BOOL DrawImagePart(HDC hdc,int dx/*=0*/,int dy/*=0*/,int dw/*=0*/,int dh/*=0*/,
	PBITMAP pbmp,int sx/*=0*/,int sy/*=0*/,int sw/*=0*/,int sh/*=0*/)
{
	/*
	if dw<=0, mean dw is equal as sw
	dh same as dw
	if sw<=0, mean sw is equal bmp width
	sh same as sw
	*/
	double wscale,hscale;
	if(dw<=0){
		dw = pbmp->bmWidth;
	}
	if(dh<=0){
		dh = pbmp->bmHeight;
	}
	if(sw<=0){
		sw = pbmp->bmWidth;
	}
	if(sh<=0){
		sh = pbmp->bmHeight;
	}
	wscale = (double)dw/(double)sw;
	hscale = (double)dh/(double)sh;
	printf("draw image:dx=%d,dy=%d,dw=%d,dh=%d,sx=%d,sy=%d,sw=%d,sh=%d\n",
		dx,dy,dw,dh,
		(int)((double)sx/wscale),(int)((double)sy/hscale),
		(int)((double)sw/wscale),(int)((double)sh/hscale));
	return FillBoxWithBitmapPart(hdc,
		dx,dy,dw,dh,
		(int)((double)sw/wscale),(int)((double)sh/hscale),
		pbmp,
		(int)((double)sx/wscale),(int)((double)sy/hscale));
}


BOOL Bmptest::Create()
{
	return MGMainWnd::Create(WS_VISIBLE|WS_BORDER|WS_CAPTION,"bmptest",0,0,g_rcScr.right,g_rcScr.bottom);
}

void Bmptest::OnPaint(HDC hdc)
{
	int wstep = m_pbmp->bmWidth/10;
	int hstep = m_pbmp->bmHeight/10;
	int w = wstep;
	int h = hstep;
	RECT rt;
	GetClientRect(&rt);
	for(int i=0;i<10;i++)
	{
		printf("%d,%d\n",w,h);
		DrawImagePart(hdc,0,0,200,200,/*rt.right-rt.left,rt.bottom-rt.top,*/m_pbmp,0,0,w,h);
		w += wstep;
		h += hstep;
		sleep(1);
	}
}

MGWndMain(Bmptest)


