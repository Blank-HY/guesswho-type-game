#include "BaseWindow.h"


BaseWindow::BaseWindow() : wxFrame(nullptr, WINDOW_ID, "Base Window", wxPoint(30, 30), wxSize(800, 800)) {
	//m_btn1 = new wxButton(this, wxID_ANY, "Click Me", wxPoint(75, 10), wxSize(150, 50));
	//m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	//m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));

	//m_panel1 = new PlayMenu(this);
	m_panel2 = new GameMenu(this);

	//m_panel1->Show();
	m_panel2->Show();

	// Set up the layout using a sizer (wxBoxSizer in this case)
	wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
	//mainSizer->Add(m_panel1, 1, wxEXPAND); // Add the PlayMenu to the sizer with proportion 1 and wxEXPAND flag
	mainSizer->Add(m_panel2, 1, wxEXPAND);

	// Other UI elements for the BaseWindow can be added here

	// Set the mainSizer as the window's sizer
	SetSizer(mainSizer);


	//m_btn1->Bind(wxEVT_BUTTON, &BaseWindow::OnButtonPress, this);

}

BaseWindow::~BaseWindow() {

}


void BaseWindow::OnButtonPress(wxCommandEvent& event) {
	if (m_panel1->IsShown()) {
		m_panel1->Hide();
	}
	else {
		m_panel1->Show();
	}

	event.Skip();
}