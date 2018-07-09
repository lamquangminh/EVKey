#include "stdafx.h"
#include "c_my_dialog.h"

#include "stdafx.h"

LRESULT CALLBACK gl_dialog_proc(wnd_hwnd hwnd, wnd_uint mess_id, wnd_wparam wpram, wnd_lparam lpram)
{
	c_my_dlg* pdlg;
	if (mess_id == WM_INITDIALOG)
	{
		pdlg = (c_my_dlg*)lpram;
		SetWindowLongPtr(hwnd, GWL_USERDATA, (LONG_PTR)pdlg);
	}
	else
	{
		pdlg = (c_my_dlg*)GetWindowLongPtr(hwnd, GWL_USERDATA);
	}
		
	if (pdlg)
		return pdlg->dialog_proc(hwnd, mess_id, wpram, lpram);
	else
		return DefWindowProc(hwnd, mess_id, wpram, lpram);
}


c_my_dlg::c_my_dlg()
{
	m_hwnd = m_wnd_parent = NULL;
	m_hinst = NULL;
	m_id = 0;
}

c_my_dlg::~c_my_dlg()
{

}

void c_my_dlg::init(wnd_hinstance hinst, wnd_uint id, wnd_hwnd wnd_parent /* = fl_null */)
{
	m_wnd_parent = wnd_parent;
	m_hinst = hinst;
	m_id = id;
}

LRESULT c_my_dlg::show_dialog()
{
	return DialogBoxParam(m_hinst, MAKEINTRESOURCE(m_id), m_wnd_parent, (DLGPROC)::gl_dialog_proc, (LONG_PTR)this);
}

LRESULT c_my_dlg::dialog_proc(wnd_hwnd hwnd, wnd_uint mess_id, wnd_wparam wpram, wnd_lparam lparam)
{
	m_hwnd = hwnd;

	switch (mess_id)
	{
	case WM_COMMAND:
		return on_command(wpram, lparam);

	case WM_INITDIALOG:
		return oninit_dialog();

	case WM_DESTROY:
		return on_destroy();

	break;

	}

	return FALSE;
}

wnd_bool c_my_dlg::oninit_dialog()
{
	return true;
}

LRESULT c_my_dlg::on_command(wnd_wparam wParam, wnd_lparam lParam)
{
	return 0;
}


LRESULT c_my_dlg::on_destroy()
{
	return 0;
}