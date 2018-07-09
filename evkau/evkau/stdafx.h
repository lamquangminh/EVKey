
#ifndef __NEWKEY_PRECOMPILED_HEADER_H
#define __NEWKEY_PRECOMPILED_HEADER_H
#define OEMRESOURCE 
#include <windows.h>
#include <windowsx.h>
//#include <tchar.h>
#include <stdio.h>
#include <WinUser.h>
#include <map>
#include <vector>

#define USE_STATIC_LIB 1
#define USE_CURL 0


#ifndef GWL_USERDATA
#define GWL_USERDATA (-21)
#endif

#ifndef GWL_WNDPROC
#define GWL_WNDPROC (-4)
#endif

//#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
//#endif
#endif

#endif