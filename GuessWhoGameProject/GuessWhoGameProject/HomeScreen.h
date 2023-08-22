#pragma once
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

	class HomeScreen : public wxPanel
{
public:
	HomeScreen(wxWindow* Parent);
	~HomeScreen();


	wxStaticText* m_txt1 = nullptr;
	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxButton* m_btn3 = nullptr;

	void OnButtonPress(wxCommandEvent& evt);

};
