#pragma once
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class GameMenu : public wxPanel
{
public:
	GameMenu(wxWindow* Parent);
	~GameMenu();

	int boxWidth = 6;
	int boxHeight = 5;

	int* box = nullptr;

	wxStaticBitmap** image;



	//wxImagePanel

};