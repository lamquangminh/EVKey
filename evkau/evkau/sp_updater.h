#pragma once

#include "_globaldef.h"
#include "c_buffer.h"



#define MSG_PROGRESS_DOWNLOAD (WM_USER + 1000)

enum 
{
	error_download_success = 1,
	error_noerror = 0,
	error_command =  -1,
	error_connection = -2,
	error_is_not_elevated = -3,
};

struct data_response_t
{
	HWND							res_hwnd = NULL;
	c_char_buffer buffer_cache; 
};

namespace sp_updater
{
	int action(HINSTANCE hins, HWND main_hwnd, LPWSTR lpCmdLine);
	BOOL send_request(const char* sRequest, data_response_t& sResponse);
};

