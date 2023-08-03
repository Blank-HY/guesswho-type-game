#include "AppStart.h"

wxIMPLEMENT_APP(AppStart);

AppStart::AppStart() {

}


AppStart::~AppStart() {

}

bool AppStart::OnInit() {
	m_frame1 = new BaseWindow();
	m_frame1->Show();

	return true;
}