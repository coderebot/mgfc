/*
 * file mgres.cpp - the minigui resource support
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
#include <mgres.h>

typedef struct _res_item_t{
	int id;
	char data[1];
}res_item_t,*res_item_p;

typedef int (*res_cmp_p)(void *resitem,long userdata);

void* get_res_item(res_item_p resitems,int size,int id,res_cmp_p res_cmp,long userdata)
{
	if(resitems==NULL)
		return NULL;
	printf("--id:%d\n",id);
	while(resitems->id>0)
	{
		printf("%d,",resitems->id);
		if(id==resitems->id)
		{
			if(res_cmp){
				if((*res_cmp)(resitems,userdata))
					return resitems;
			}
			else
				return resitems;
			return NULL;
		}
		resitems = (res_item_p)(((char*)resitems)+size);
	}
	return NULL;
}


PDLGTEMPLATE LoadDialogTemplate(int id)
{
	dlgtemplate_table_t *dlgtemptable;
	PDLGTEMPLATE   dlgtemp;
	if(mgres_handle==NULL || mgres_handle->dlgtemplatetable==NULL)
		return NULL;
	dlgtemptable = (dlgtemplate_table_t*)get_res_item((res_item_p)(mgres_handle->dlgtemplatetable),sizeof(dlgtemplate_table_t),id,NULL,0);
	if(dlgtemptable==NULL)
		return NULL;
	dlgtemp = dlgtemptable->dlgtemplate;
	if(dlgtemp)
	{
		int i;
		for(i=0;i<dlgtemp->controlnr;i++)
		{
			PCTRLDATA col = &dlgtemp->controls[i];
			if(strcmp(col->class_name,CTRL_STATIC)==0)
			{
				printf("static control\n");
				if(((col->dwStyle)&SS_ICON)==SS_ICON)
				{
					if(((col->dwStyle)&SS_REALSIZEIMAGE)==SS_REALSIZEIMAGE)
					{
						int id = col->dwAddData;
						col->dwAddData = (DWORD) LoadBitmapFromRes(id);
					}
					else //icon
					{
						int id = col->dwAddData;
						printf("icon\n");
						col->dwAddData = (DWORD) LoadIconFromRes(id);
					}
				}
			}//end if
		}//end for
	}//end dlgtemp
	return dlgtemp;
}

const char*  LoadString(int id)
{
	string_table_t *strtable;
	if(mgres_handle==NULL || mgres_handle->stringtable==NULL)
		return NULL;
	strtable = (string_table_t*)get_res_item((res_item_p)(mgres_handle->stringtable),sizeof(string_table_t),id,NULL,0);
	if(strtable==NULL)
		return NULL;
	return strtable->str;
}

int res_cmp_file_obj(void *obj,long userdata)
{
	res_file_obj_t *fileobj=(res_file_obj_t*)obj;
	if(fileobj->type == userdata)
		return 1;
	else
		return 0;
}

res_file_obj_t * get_file_obj(int id,int type)
{
	res_file_obj_t * fileobj;
	if(mgres_handle==NULL || mgres_handle->resfileobjs==NULL)
		return NULL;
	fileobj = (res_file_obj_t*) get_res_item((res_item_p)(mgres_handle->resfileobjs),sizeof(res_file_obj_t),id,res_cmp_file_obj,type);
	return fileobj;
}

PBITMAP LoadBitmapFromRes(int id)
{
	PBITMAP bmp;
	res_file_obj_t *fileobj = get_file_obj(id,FILE_TYPE_BITMAP);
	if(fileobj==NULL || fileobj->file==NULL)
		return NULL;
	bmp = new BITMAP;
	printf("bitmap:%s\n",fileobj->file);
	if(ERR_BMP_OK!=LoadBitmapFromFile((HDC)NULL,bmp,fileobj->file))
	{
		printf("bitmap load success\n");
		delete bmp;
		return NULL;
	}
	return bmp;
}

HICON   LoadIconFromRes(int id)
{
	HICON hIcon;
	res_file_obj_t *fileobj = get_file_obj(id,FILE_TYPE_ICON);
	if(fileobj==NULL || fileobj->file==NULL)
		return (HICON)NULL;
	printf("LoadIcon:%s\n",fileobj->file);
	hIcon = LoadIconFromFile((HDC)NULL,fileobj->file,0);
	return hIcon;
}

HCURSOR LoadCursorFromRes(int id)
{
	res_file_obj_t *fileobj = get_file_obj(id,FILE_TYPE_CURSOR);
	if(fileobj==NULL || fileobj->file==NULL)
		return (HCURSOR)NULL;
	return LoadCursorFromFile(fileobj->file);
}

char *  LoadTextFileFromRes(int id)
{
	FILE *file;
	char *buf=NULL;
	long  len;  
	res_file_obj_t *fileobj = get_file_obj(id,FILE_TYPE_CUSTOM);
	if(fileobj==NULL || fileobj->file==NULL)
		return NULL;
	file = fopen(fileobj->file,"rt");
	if(file==NULL)
		return NULL;
	fseek(file,0,SEEK_END);
	len = ftell(file);
	fseek(file,0,SEEK_SET);
	if(len==0)
		goto RETURN;

	buf = new char[len+1];
	len = fread(buf,1,len,file);
	buf[len] = '\0';
	
RETURN:
	fclose(file);
	return buf;
}

void *  LoadBineryFileFromRes(int id)
{
	FILE *file;
	char *buf=NULL;
	long  len;  
	res_file_obj_t *fileobj = get_file_obj(id,FILE_TYPE_CUSTOM);
	if(fileobj==NULL || fileobj->file==NULL)
		return NULL;
	file = fopen(fileobj->file,"rb");
	if(file==NULL)
		return NULL;
	fseek(file,0,SEEK_END);
	len = ftell(file);
	fseek(file,0,SEEK_SET);
	if(len==0)
		goto RETURN;

	buf = new char[len];
	len = fread(buf,1,len,file);
	
RETURN:
	fclose(file);
	return buf;
}

PMENUBARTEMPLATE LoadMenubarTemplate(int id)
{
	menubar_table_t *mt;
	if(mgres_handle==NULL || mgres_handle->menubartable==NULL)
		return NULL;
	mt = (menubar_table_t*)get_res_item((res_item_p)(mgres_handle->menubartable),sizeof(menubar_table_t),id,NULL,0);
	if(mt) 
	{
		return mt->menubar;
	}
	return (HMENU)NULL;
}


mgres_handle_t *mgres_handle=NULL;

