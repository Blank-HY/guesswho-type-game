#include "GameMenu.h"
#include "Macros.h"
#include <string>

GameMenu::GameMenu(wxWindow* Parent) : wxPanel(Parent, WINDOW_ID, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL) {

	wxPNGHandler* handler = new wxPNGHandler;
	wxImage::AddHandler(handler);

	image = new wxStaticBitmap * [boxWidth * boxHeight];
	wxGridSizer* grid = new wxGridSizer(boxHeight + 1, boxWidth, 0, 0);

	box = new int[boxWidth * boxHeight];

	int counter = 1;
	std::string img_name;

	for (int x = 0; x < boxWidth; x++) {
		/*counter = 0;*/
		for (int y = 0; y < boxHeight; y++) {
			img_name = "face pictures\\face-" + std::to_string(counter) + ".png";
			image[y * boxWidth + x] = new wxStaticBitmap(this, wxID_ANY, wxBitmap(img_name, wxBITMAP_TYPE_PNG));
			grid->Add(image[y * boxWidth + x], 1, wxEXPAND | wxALL, 5);
			box[y * boxWidth + x] = 0;
			counter++;
		}
	}

	wxStaticBitmap* heart1 = new wxStaticBitmap(this, wxID_ANY, wxBitmap("heart2.png", wxBITMAP_TYPE_PNG));
	wxStaticBitmap* heart2 = new wxStaticBitmap(this, wxID_ANY, wxBitmap("heart2.png", wxBITMAP_TYPE_PNG));
	wxStaticBitmap* heart3 = new wxStaticBitmap(this, wxID_ANY, wxBitmap("heart2.png", wxBITMAP_TYPE_PNG));

	grid->Add(heart1, wxEXPAND | wxALL, 5);
	grid->Add(heart2, wxEXPAND | wxALL, 5);
	grid->Add(heart3, wxEXPAND | wxALL, 5);

	this->SetSizer(grid);
	grid->Layout();

}

GameMenu::~GameMenu() {
	delete []image;
}




//wxPNGHandler* handler = new wxPNGHandler;
//wxImage::AddHandler(handler);

//image = new wxStaticBitmap(this, wxID_ANY, wxBitmap("image.png", wxBITMAP_TYPE_PNG));


// Image resizing code https://learnopencv.com/image-resizing-with-opencv/

//// let's start with including libraries 
//#include<opencv2/opencv.hpp>
//#include<iostream>
//
//// Namespace to nullify use of cv::function(); syntax
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	// Read the image using imread function
//	Mat image = imread("image.jpg");
//	imshow("Original Image", image);
//
//
//	// let's downscale the image using new  width and height
//	int down_width = 300;
//	int down_height = 200;
//	Mat resized_down;
//	//resize down
//	resize(image, resized_down, Size(down_width, down_height), INTER_LINEAR);
//	// let's upscale the image using new  width and height
//	int up_width = 600;
//	int up_height = 400;
//	Mat resized_up;
//	//resize up
//	resize(image, resized_up, Size(up_width, up_height), INTER_LINEAR);
//	// Display Images and press any key to continue
//	imshow("Resized Down by defining height and width", resized_down);
//	waitKey();
//	imshow("Resized Up image by defining height and width", resized_up);
//	waitKey();
//
//
//	destroyAllWindows();
//	return 0;
//}

// Best dimensions i found for images are 110x110, found that worked pretty well for the face image