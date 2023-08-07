#pragma once
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class PlayMenu : public wxPanel
{
public:
	PlayMenu(wxWindow* Parent);
	~PlayMenu();


	wxStaticText* m_txt1 = nullptr;
	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;

	void OnButtonPress(wxCommandEvent& evt);

};

