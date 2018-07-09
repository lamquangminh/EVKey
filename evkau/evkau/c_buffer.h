#pragma once

#include "_globaldef.h"
#include <vector>

//typedef c_buffer<byte> c_byte_buffer;
typedef std::vector<int> c_int_buffer;
typedef std::vector<char> c_char_buffer;
typedef std::vector<std::string> c_string_buffer;
typedef std::vector<std::wstring> c_wstring_buffer;