#pragma once

#include "XTHexEdit.h"


// CPacketHexView 视图

class CPacketHexView : public CView
{
	DECLARE_DYNCREATE(CPacketHexView)

protected:
	CPacketHexView();           // 动态创建所使用的受保护的构造函数
	virtual ~CPacketHexView();

public:
	CXTHexEdit  m_wndEdit;

public:
	virtual void OnDraw(CDC* pDC);      // 重写以绘制该视图
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


