 /****************************************Copyright (c)**************************************************
**						显示硬件适配驱动，只支持1个显示接口	     
**                                      
**                                      
**
**                           
**
**--------------文件信息--------------------------------------------------------------------------------
**文   件   名:   LcdDriver.h
**创   建   人:   Author: admin
**最后修改日期: Created on: 2009-11-15
**描        述:   
**备        注 :    
**--------------历史版本信息----------------------------------------------------------------------------
** 创建人:  
** 版  本:  
** 日　期:  
** 描　述: 
**
**--------------当前版本修订------------------------------------------------------------------------------
** 修改人:
** 日　期:
** 描　述:  
**
**------------------------------------------------------------------------------------------------------
********************************************************************************************************/

#pragma once 

#include "applib.h" 
#include "GuiDef.h"
#include "list.h"

struct GUI_CLIPRECT
{
	CGuiRect Rect;

	list_t  ListNode;
};

typedef struct GUI_CLIPRECT CGuiClipRect;


struct GUI_CLIPRGN
{
	CGuiRect RectBound; // The bounding rect of the region.

	CGuiClipRect *pHead;
	CGuiClipRect *pTail;


};

typedef struct GUI_CLIPRGN CGuiClipRgn;
