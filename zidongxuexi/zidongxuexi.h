
// zidongxuexi.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CzidongxuexiApp:
// �йش����ʵ�֣������ zidongxuexi.cpp
//

class CzidongxuexiApp : public CWinApp
{
public:
	CzidongxuexiApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CzidongxuexiApp theApp;