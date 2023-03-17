#include "image.h"

const char* imag_support_files[]=
{
	"ico",
//	"cur",
	"bmp",
#ifdef _LBM_FILE_SUPPORT  
	"lbm",
#endif
#ifdef _PCX_FILE_SUPPORT
	"pcx",
#endif
#ifdef _TGA_FILE_SUPPORT
	"tga",
#endif
#ifdef _GIF_FILE_SUPPORT
	"gif",
#endif
#ifdef _JPG_FILE_SUPPORT
	"jpg","jpeg",
#endif
#ifdef _PNG_FILE_SUPPORT
	"png",
#endif
	NULL
};

MGImage::MGImage()
{
	m_img.type = 0;
	m_img.img.bmp = NULL;
}

MGImage::~MGImage()
{
	clear();
}

BOOL MGImage::Load(const char * strFile)
{
	MGImage::IMAGE img = MGImage::GetImageFromFile(strFile);
	//printf("img type:%d,img:%d\n",img.type,img.img.bmp);
	if(img.img.bmp==NULL)
		return FALSE;
	
	clear();

	m_img = img;
	return TRUE;
}

int MGImage::getHeight()
{
	if(m_img.img.bmp==NULL)
		return 0;
	if(m_img.type==imgt_bmp)
		return m_img.img.bmp->bmHeight;
	else if(m_img.type==imgt_icon)
	{
		int h;
		GetIconSize(m_img.img.hIcon,NULL,&h);
		return h;
	}
	else
		return 0;
}

int MGImage::getWidth()
{
	if(m_img.img.bmp==NULL)
		return 0;
	if(m_img.type==imgt_bmp)
		return m_img.img.bmp->bmWidth;
	else if(m_img.type==imgt_icon)
	{
		int w;
		GetIconSize(m_img.img.hIcon,&w,NULL);
		return w;
	}
	else
		return 0;
}

void MGImage::clear()
{
	if(m_img.img.bmp)
	{
		if(m_img.type==imgt_bmp)
			UnloadBitmap(m_img.img.bmp);
		else if(m_img.type==imgt_icon)
			DestroyIcon(m_img.img.hIcon);
	}
	m_img.img.bmp = NULL;
	m_img.type = 0;
}

int MGImage::Draw(MGDC * pDC, int x, int y, int w /*= 0*/, int h /*= 0*/, DWORD dwFlag/* = 0*/)
{
	if(m_img.img.bmp==0 || pDC==NULL)
		return FALSE;

	if(w<=0)
		w = getWidth();
	if(h<=0)
		h = getHeight();

	//printf("draw image:%d,%d,%d,%d\n",x,y,w,h);

	if(m_img.type==imgt_bmp)
		return pDC->FillBoxWithBitmap(x,y,w,h,m_img.img.bmp);
	else if(m_img.type==imgt_icon)
	{
		pDC->DrawIcon(x,y,w,h,m_img.img.hIcon);
		return 1;
	}
	return 0;
}

MGImage::IMAGE MGImage::GetImageFromFile(const char * strFile)
{
	const char* pext;
	MGImage::IMAGE img;
	img.type = 0;
	img.img.bmp = NULL;
	
	BOOL bNext=FALSE;
	//printf("load file:%s\n",strFile);
	if(strFile==NULL)
		return img;
	pext = strrchr(strFile,'.');

	if(pext)
	{
		pext ++;
		bNext = TRUE;
		if(strcasecmp(pext,"ico")==0)
			goto ICON;
		if(strcasecmp(pext,"cur")==0)
			goto CURSOR;
		goto IMAGE;
	}
	
ICON:
	{
		HICON hIcon = LoadIconFromFile(HDC_SCREEN,strFile,0);
		//printf("HICON:%d(%s)\n",hIcon,strFile);
		if(hIcon)
		{
			img.type = imgt_icon;
			img.img.hIcon = hIcon;
			return img;
		}
		if(!bNext)
			return img;
	}
CURSOR:
	if(!bNext)
		return img;
IMAGE:
	{
		BITMAP *pbmp = new BITMAP;
		img.type = imgt_bmp;
		if(LoadBitmapFromFile(HDC_SCREEN,pbmp,strFile)==0)
		{
			img.img.bmp = pbmp;
			return img;
		}
		delete pbmp;
	}
	return img;
}

