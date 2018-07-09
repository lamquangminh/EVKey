#pragma once

#ifndef __GLOBAL_DEF__
#define __GLOBAL_DEF__

#include <memory>
#include <string>
#include <set>
//#include <vector>

#define USE_NEW_ENGINE

#define USE_NEW_PUSH_METHOD

#define ADDITION_SHORTCUT_KEY 12
//////////////////////////////////////////////////////////////////////////
//
#define PUSH_BY_KEYBOARD 0
#define PUSH_BY_MESSAGE 1

//#define USE_PUSH_BY PUSH_BY_KEYBOARD
#define USE_PUSH_BY PUSH_BY_MESSAGE
//
//////////////////////////////////////////////////////////////////////////

#define OPTIMIZE_VERISON

//////////////////////////////////////////////////////////////////////////
//
#if defined(DEBUG) || defined(_DEBUG)
#define IS_DEBUG 1
#else
#define IS_DEBUG 0
#endif

#define OUT_LOG 0
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
#define DEBUG_ENGINE	1
#define RUN_ENGINE		2
//#define BUILD_TYPE DEBUG_ENGINE 
#define BUILD_TYPE RUN_ENGINE 
//
//////////////////////////////////////////////////////////////////////////

///
//
#define BACKUP_CLIPBOARD 1
//
///
#define SHIFT_INSERT_KEY 1
#define CTRL_V_KEY 2


//////////////////////////////////////////////////////////////////////////

#define SW_LENTH_CONTROL 4
#define SW_CTRL (1<<0)
#define SW_SHIFT (1<<1)
#define SW_ALT (1<<2)
#define SW_WIN (1<<3)
#define SW_TOTAL (SW_CTRL|SW_SHIFT|SW_ALT|SW_WIN)

#define IS_SW_CTRL (v) (v & SW_CTRL)
#define IS_SW_SHIFT (v) (v & SW_SHIFT)
#define IS_SW_ALT (v) (v & SW_ALT)
#define IS_SW_WINL (v) (v & SW_WIN)

#define SET_SW_CTRL (v) (v |= SW_CTRL)
#define SET_SW_SHIFT (v) (v |= SW_SHIFT)
#define SET_SW_ALT (v) (v |= SW_ALT)
#define SET_SW_WINL (v) (v |= SW_WIN)

//////////////////////////////////////////////////////////////////////////

//typedef std::shared_ptr<std::wstring> p_wstring;
//#define MAKE_PWSTRING									std::make_shared<std::wstring>()
typedef HWND				wnd_hwnd;
typedef RECT				wnd_rect;
typedef POINT				wnd_point;
typedef DWORD				wnd_dword;
typedef BOOL				wnd_bool;
#define fl_winapi  WINAPI
typedef LPVOID			wnd_pvoid;
#define fl_null		NULL
#define fl_false	FALSE
#define fl_true		TRUE
#define fl_callback CALLBACK
typedef LRESULT			wnd_result;
typedef HICON				wnd_hicon;
typedef HCURSOR			wnd_hcursor;
typedef HPEN				wnd_hpen;
typedef	HANDLE			wnd_hevent;
typedef	HANDLE			wnd_handle;
typedef WPARAM			wnd_wparam;
typedef LPARAM			wnd_lparam;
typedef SHORT				wnd_short;
typedef	UINT				wnd_uint;
typedef unsigned char		uchar;
typedef wchar_t			uwchar;
typedef UCHAR				wnd_uchar;
typedef TCHAR				wnd_tchar;
typedef unsigned short ushort;
typedef LPTHREAD_START_ROUTINE wnd_thread_func;
typedef unsigned int	uint;
typedef unsigned __int64 uint64;
typedef __int64				int64;
typedef	int						int32;
typedef unsigned long ulong;
typedef ULONG_PTR			wnd_ptr;
typedef HINSTANCE			wnd_hinstance;
typedef const wchar_t cwchar;
typedef LPCTSTR				pctstr;
typedef LPTSTR				ptstr;
typedef const char*   pcstr;
typedef const wchar_t*   pcwstr;
typedef std::string		stdstring;
typedef std::wstring	stdwstring;
typedef FLOAT					wnd_float;
typedef INT						wnd_int;
typedef LPVOID				wnd_pvoid;
typedef HDC						wnd_hdc;
typedef HBITMAP				wnd_hbitmap;
typedef	HPEN					wnd_hpen;
typedef	HBRUSH				wnd_hbrush;
typedef HFONT					wnd_hfont;
typedef SIZE					wnd_size;


typedef std::set<std::wstring> stdstringset;

#define fl_rect_width(r)  (r.right - r.left)
#define fl_rect_height(r)  (r.bottom - r.top)

#define SAFE_DELETE(p) {if(p) {delete p; p = NULL;}}
#define SAFE_DELETE_ARRAY(p) {if(p) {delete []p; p = NULL;}}

#define fl_min(a, b)  (a > b ? b : a)
#define fl_max(a, b) (a < b ? b : a)

//////////////////////////////////////////////////////////////////////////


#endif