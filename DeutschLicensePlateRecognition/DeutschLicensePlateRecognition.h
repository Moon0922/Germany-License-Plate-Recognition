
// DeutschLicensePlateRecognition.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CDeutschLicensePlateRecognitionApp:
// See DeutschLicensePlateRecognition.cpp for the implementation of this class
//

class CDeutschLicensePlateRecognitionApp : public CWinApp
{
public:
	CDeutschLicensePlateRecognitionApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()

public:
	CString		m_strFullPath;
	void		GetFullPath();
};

extern CDeutschLicensePlateRecognitionApp theApp;
