
// AgoraTutorial.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CAgoraTutorialApp: 
// �йش����ʵ�֣������ AgoraTutorial.cpp
//

class CAgoraTutorialApp : public CWinApp
{
public:
	CAgoraTutorialApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CAgoraTutorialApp theApp;