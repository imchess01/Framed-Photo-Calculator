#pragma once
#include <string>
#include <iostream>

using namespace std;

class Photo
{

public:
	double price;
	int width;
	int height;


	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
	int getWidth()
	{
		return width;
	}
	int getHeight()
	{
		return height;
	}
	virtual double getPrice()
	{
		//8x10 Frame
		if (width == 8 && height == 10)
		{
			price += 3.99;
		}
		//10x12 Frame
		else if (width == 10 && height == 12)
		{
			price += 5.99;
		}
		//Custom Frame
		else {
			price += 9.99;
		}

		return price;

	}

	virtual void display()
	{
		cout << "\nWIDTH, HEIGHT, & PRICE INFORMATION:";
		cout << "\nWIDTH: " << width;
		cout << "\nHEIGHT: " << height;
		cout << "\nPRICE: $" << price;
	}
	

};
