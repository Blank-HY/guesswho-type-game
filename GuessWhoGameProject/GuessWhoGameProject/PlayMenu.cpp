#include "PlayMenu.h"
#include "Macros.h"

PlayMenu::PlayMenu(wxWindow* Parent) : wxPanel(Parent, WINDOW_ID, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL) {
	
	wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
	
	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	int minButtonSize = 150;

	m_txt1 = new wxStaticText(this, wxID_ANY, "TITLE");
	m_btn1 = new wxButton(this, wxID_ANY, "Create", wxDefaultPosition, wxDefaultSize);
	m_btn2 = new wxButton(this, wxID_ANY, "Join", wxDefaultPosition, wxDefaultSize);

	m_btn1->Bind(wxEVT_BUTTON, &PlayMenu::OnButtonPress, this);

	m_btn1->SetFont(font);
	m_btn2->SetFont(font);
	m_txt1->SetFont(font);
	
	m_btn1->SetMinSize(wxSize(minButtonSize, -1));
	m_btn2->SetMinSize(wxSize(minButtonSize, -1));
	
	sizer->Add(m_txt1, 0, wxALIGN_CENTER | wxALL, 100);
	sizer->Add(m_btn1, 0, wxALIGN_CENTER | wxALL, 25);
	sizer->Add(m_btn2, 0, wxALIGN_CENTER | wxALL, 25);

	this->SetSizer(sizer);
	SetBackgroundColour(wxColour(255, 255, 0)); // Changes background colour to yellow

}

PlayMenu::~PlayMenu() {

}

void PlayMenu::OnButtonPress(wxCommandEvent& evt) {
	this->Hide();
	evt.Skip();
}