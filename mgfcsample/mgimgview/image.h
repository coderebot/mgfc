#ifndef IMAGE_H
#define IMAGE_H

#include "mggdi.h"

class MGImage
{
public:
	MGImage();
	~MGImage();
	BOOL Load(const char* strFile);
	int getWidth();
	int getHeight();
	int Draw(MGDC *pDC,int x,int y,int w=0,int h=0,DWORD dwFlag=0);
	
protected:
	enum image_type{
		imgt_bmp,
		imgt_icon
	};
	typedef struct _iamge_t{
		union{
			BITMAP * bmp;
			HICON    hIcon;
		}img;
		int type;
	}IMAGE;
	IMAGE m_img;
	
	void clear();

private:
	static IMAGE GetImageFromFile(const char* strFile);
};

extern const char* imag_support_files[];

#endif
