// flac.h : main header file for the flac DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CflacApp
// See flac.cpp for the implementation of this class
//

class CflacApp : public CWinApp
{
public:
	CflacApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
