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
	wxButton* m_btn1_create = nullptr;
	wxButton* m_btn2_join = nullptr;


	void OnButtonPress_Create(wxCommandEvent& evt);
	void OnButtonPress_Join(wxCommandEvent& evt);
};

