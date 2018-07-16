#pragma once
#include "_globaldef.h"
class c_graphic
{
public:
	c_graphic() {};
	~c_graphic() {};
};

#define fl_delete_dc(hdc) { if(hdc){ ::DeleteDC(hdc); hdc = fl_null; } }
#define fl_delete_object(object) { if(object){ ::DeleteObject(object); object = fl_null; } }

class c_brush
{
public:
	wnd_hbrush m_hbrush;

	c_brush() {
		m_hbrush = fl_null;
	}

	~c_brush() {
		freeobject();
	}

	void create_brush(COLORREF color) {
		m_hbrush = CreateSolidBrush(color);
	}

	void freeobject() {
		fl_delete_object(m_hbrush);
	}
};

class c_pen
{
public:
	wnd_hpen m_hpen;

	c_pen() {
		m_hpen = fl_null;
	}

	~c_pen() {
		freeobject();
	}

	void freeobject() {
		fl_delete_object(m_hpen);
	}
};

class c_dc
{
	wnd_hbitmap m_hbmp;
public:
	wnd_hdc			m_hdc;

	c_dc()
	{
		m_hdc = fl_null;
		m_hbmp = fl_null;
	}

	~c_dc()
	{
		fl_delete_dc(m_hdc);
		fl_delete_object(m_hbmp);
	}

	void create_compatible(wnd_hdc with, int width, int height)
	{
		fl_delete_dc(m_hdc);
		fl_delete_object(m_hbmp);
		
		m_hbmp = ::CreateCompatibleBitmap(with, width, height);
		m_hdc = ::CreateCompatibleDC(with);
		::SelectObject(m_hdc, m_hbmp);
	}

};