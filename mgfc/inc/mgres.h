/*
 * file mgres.h the resource suport for minigui resouce
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
#ifndef MINIGUI_RES_H
#define MINIGUI_RES_H

/*
	this file manger the minigui resources
*/

#include "mgcomm.h"

void *LoadResource(int ResId,int type=-1);

BOOL InitializeResource();

void UninitializeResource();

inline BOOL ReloadResource(){
	UninitializeResource();
	return InitializeResource();
}

typedef struct _resource_entry_t{
	int          resId
	unsigned int resType:16
	unsigned int resRef:16;
	void         *resData;
}RES_ENTRY;

typedef struct _resources_t{
	int  entryNum;
	RES_ENTRY *entrys;
}RESOURCE;

#define DECLARE_RESOURCE   static RESOURCE l_resource={0,NULL}; 

#define BEGIN_RESOURCE BOOL InitializeResource() {

#define END_RESOURCE return TRUE }


#endif
