#include "HomeScreen.h"
#include "Macros.h"

HomeScreen::HomeScreen(wxWindow* Parent) : wxPanel(Parent, WINDOW_ID, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL) {

	wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);

	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	int minButtonSize = 150;

	m_txt1 = new wxStaticText(this, wxID_ANY, "TITLE");
	m_btn1 = new wxButton(this, wxID_ANY, "Play", wxDefaultPosition, wxDefaultSize);
	m_btn2 = new wxButton(this, wxID_ANY, "Rules", wxDefaultPosition, wxDefaultSize);
	m_btn3 = new wxButton(this, wxID_ANY, "Tutorial", wxDefaultPosition, wxDefaultSize);

	m_btn1->Bind(wxEVT_BUTTON, &HomeScreen::OnButtonPress, this);

	m_btn1->SetFont(font);
	m_btn2->SetFont(font);
	m_btn3->SetFont(font);
	m_txt1->SetFont(font);

	m_btn1->SetMinSize(wxSize(minButtonSize, -1));
	m_btn2->SetMinSize(wxSize(minButtonSize, -1));
	m_btn3->SetMinSize(wxSize(minButtonSize, -1));

	sizer->Add(m_txt1, 0, wxALIGN_CENTER | wxALL, 100);
	sizer->Add(m_btn1, 0, wxALIGN_CENTER | wxALL, 25);
	sizer->Add(m_btn2, 0, wxALIGN_CENTER | wxALL, 25);
	sizer->Add(m_btn3, 0, wxALIGN_CENTER | wxALL, 25);

	this->SetSizer(sizer);
	SetBackgroundColour(wxColour(255, 255, 0)); // Changes background colour to yellow

}

HomeScreen::~HomeScreen() {

}

void HomeScreen::OnButtonPress(wxCommandEvent& evt) {
	this->Hide();
	evt.Skip();
}