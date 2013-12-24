// lua.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "lua.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: If this DLL is dynamically linked against the MFC DLLs,
//		any functions exported from this DLL which call into
//		MFC must have the AFX_MANAGE_STATE macro added at the
//		very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//


// CluaApp

BEGIN_MESSAGE_MAP(CluaApp, CWinApp)
END_MESSAGE_MAP()


// CluaApp construction

CluaApp::CluaApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CluaApp object

CluaApp theApp;


// CluaApp initialization

BOOL CluaApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}

extern "C" int mingw_app_type;
int mingw_app_type = 0;

extern "C" void *_decode_pointer(void *ptr);
void *_decode_pointer(void *ptr)
{
	return DecodePointer(ptr);
}

extern "C" void *_encode_pointer(void *ptr);
void *_encode_pointer(void *ptr)
{
	return EncodePointer(ptr);
}
