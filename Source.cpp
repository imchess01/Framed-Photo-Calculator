#include <string>
#include <iostream>
#include "MattedPhoto.h"
#include "FramedPhoto.h"

using namespace std;

int ww, hh;
int validWidth(int ww)
{
	bool negative = false;
	cout << "\nWhat is the width in inches?";
	cin >> ww;
	if (ww <= 0)
		negative = true;
	while (negative == true)
	{
		cout << "\nERROR! Please enter correct width value: ";
		cin >> ww;
		if (ww >= 0)
			negative = false;
	}
	return ww;
}
int validHeight(int hh)
{
	bool negative = false;
	cout << "\nWhat is the height in inches?";
	cin >> hh;
	if (hh <= 0)
		negative = true;
	while (negative == true)
	{
		cout << "\nERROR! Please enter correct height value: ";
		cin >> hh;
		if (hh >= 0)
			negative = false;
	}
	return hh;
}

int main()
{
	//Photo1
	cout << "\nPHOTO 1:";
	int w = validWidth(ww);
	int h = validHeight(hh);

	Photo* photo1 = new Photo();
	photo1->setWidth(w);
	photo1->setHeight(h);
	photo1->getPrice();
	photo1->display();

	cout << "\n\n";

	//Photo 2
	cout << "\nPHOTO 2:";
	w = validWidth(ww);
	h = validHeight(hh);
	MattedPhoto* photo2 = new MattedPhoto();
	photo2->setWidth(w);
	photo2->setHeight(h);
	photo2->getPrice();
	photo2->setColor("white");
	photo2->display();

	cout << "\n\n";
	//Photo 3
	cout << "\nPHOTO 3: ";
	w = validWidth(ww);
	h = validHeight(hh);
	FramedPhoto* photo3 = new FramedPhoto();
	photo3->setWidth(w);
	photo3->setHeight(w);
	photo3->getPrice();
	photo3->setMaterial("wood");
	photo3->setStyle("plain");
	photo3->display();

	cout << "\n\n";
	Photo* photos[3];
	photos[0] = photo1;
	photos[1] = photo2;
	photos[2] = photo3;

	
}
