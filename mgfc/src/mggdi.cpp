/*
 * file mggdi.cpp - the minigui gdi implement of MGFC
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
#include "mggdi.h"

MGBitmap::MGBitmap(){
	memset((PBITMAP)this,0,sizeof(PBITMAP));
}

MGBitmap::~MGBitmap(){
	UnloadBitmap((PBITMAP)this);
}

BOOL MGBitmap::Create(HDC hdc,int width,int height){
	return InitBitmap(hdc,width,height,0,NULL,(PBITMAP)this);
}

BOOL MGBitmap::Create(HDC hdc,const char* strFileName){
	return (LoadBitmapFromFile(hdc,(PBITMAP)this,strFileName)==0);
}

BOOL MGBitmap::Create(HDC hdc,const BYTE* pdata,int size,const char* strExt){
	if(strExt)
		return (LoadBitmapFromMem(hdc,(PBITMAP)this,pdata,size,strExt)==0);
	else{
		static char* strexts[] = { "png","jpg","jpeg","gif","bmp","tff"};
		int i;
		for(i=0;i<(int)(sizeof(strexts)/sizeof(char*));i++){
			if(LoadBitmapFromMem(hdc,(PBITMAP)this,pdata,size,strexts[i])==0)
				return TRUE;
		}
		return FALSE;
	}
}

void MGBitmap::Empty(){
	UnloadBitmap((PBITMAP)this);
	memset((PBITMAP)this,0,sizeof(BITMAP));
}

