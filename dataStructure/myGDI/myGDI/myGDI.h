
// myGDI.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "gdiplusinit.h"


// CmyGDIApp:
// �йش����ʵ�֣������ myGDI.cpp
//

class CmyGDIApp : public CWinApp
{
public:
	CmyGDIApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
	GdiplusStartupInput GdiInput;
	ULONG_PTR GdiToken;
	int ExitInstance(void);
};

extern CmyGDIApp theApp;