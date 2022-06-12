#pragma once
#include <iostream>
#include <string>
#include "Photo.h"
using namespace std;

class FramedPhoto : public Photo
{

public:
	string material;
	string style;

	FramedPhoto()
	{
		material = "";
		style = "";
	}
	void setMaterial(string m)
	{
		material = m;
	}
	string getMaterial()
	{
		return material;
	}

	void setStyle(string s)
	{
		style = s;
	}
	string getStyle()
	{
		return style;
	}
	virtual double getPrice()
	{
		return price + 25;
	}

	virtual void display()
	{
		cout << "\nWIDTH, HEIGHT, PRICE, & COLOR INFORMATION:";
		cout << "\nWIDTH: " << width;
		cout << "\nHEIGHT: " << height;
		cout << "\nMATERIAL: " << material;
		cout << "\nSTYLE: " << style;
		cout << "\nPRICE: $" << price;
	}
};
