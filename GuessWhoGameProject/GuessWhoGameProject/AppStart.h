#pragma once

#include"BaseWindow.h"
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class AppStart : public wxApp
{
public:
	AppStart();
	~AppStart();

	virtual bool OnInit();


private:
	BaseWindow* m_frame1 = nullptr;
};

