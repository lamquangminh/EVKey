#pragma once

#include "_globaldef.h"
#include <WinBase.h>
#include <Windows.h>

#define DETROY_WINDOW(hwnd) {if(hwnd){DestroyWindow(hwnd); hwnd=NULL;}}

LRESULT CALLBACK gl_dialog_proc(wnd_hwnd hwnd, wnd_uint mess_id, wnd_wparam wpram, wnd_lparam lparam);

class c_my_dlg
{
public:
	wnd_hwnd m_hwnd;

	c_my_dlg();
	virtual ~c_my_dlg();

	void init(wnd_hinstance hInst, wnd_uint id, wnd_hwnd wnd_parent = fl_null);
	virtual LRESULT show_dialog();
	virtual LRESULT dialog_proc(wnd_hwnd hwnd, wnd_uint mess_id, wnd_wparam wpram, wnd_lparam lparam);
	virtual wnd_bool oninit_dialog();
	virtual LRESULT on_command(wnd_wparam wpram, wnd_lparam lparam);
	virtual LRESULT on_destroy();

protected:
	wnd_hinstance m_hinst;
	wnd_uint		m_id;
	wnd_hwnd m_wnd_parent;
};