#pragma once
#include <string>
#include <iostream>
#include "Photo.h"
using namespace std;

class MattedPhoto: public Photo
{

public:
	string color;
	MattedPhoto()
	{
		color = "";
	}
	void setColor(string c)
	{
		color = c;
	}
	string getColor()
	{
		return color;
	}
	virtual double getPrice()
	{
		return price + 10;
	}
	virtual void display()
	{
		cout << "\nWIDTH, HEIGHT, PRICE, & COLOR INFORMATION:";
		cout << "\nWIDTH: " << width;
		cout << "\nHEIGHT: " << height;
		cout << "\nCOLOR: " << color;
		cout << "\nPRICE: $" << price;
	}
};

