#pragma once

#include <string>
#include "sp_updater.h"
#include "_globaldef.h"
#include "c_my_dialog.h"

class c_download_dlg : public c_my_dlg
{
	wnd_hwnd m_progress_bar;
public:

	int		m_data_size;
	int		m_downloaded_size;
	int 	m_result;

	data_response_t m_down_data;

	c_download_dlg(const std::string& link, wnd_hinstance hIn, wnd_hwnd hParent);
	~c_download_dlg();
	std::string m_link;
	
	LRESULT dialog_proc(wnd_hwnd hwnd,	wnd_uint mess_id, wnd_wparam wpram, wnd_lparam lpram);

	virtual LRESULT on_command(wnd_wparam wpram, wnd_lparam lpram);

	void close();

	wnd_bool oninit_dialog();

};

