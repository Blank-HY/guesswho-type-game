#pragma once
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
class BaseWindow : public wxFrame
{

public:
	BaseWindow();
	~BaseWindow();


	wxButton* m_btn1 = nullptr;
	wxTextCtrl* m_txt1 = nullptr;
	wxListBox* m_list1 = nullptr;


	void OnButtonPress(wxCommandEvent& evt);


	//wxDECLARE_EVENT_TABLE();
};

