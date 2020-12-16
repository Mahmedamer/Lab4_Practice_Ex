#include "Pixel.h"
#include<iostream>
using namespace std;
Pixel::Pixel()
{
	cout << "Pixel Constructor is called" << endl;
}
void Pixel::SetR(int value)
{
	if (value < 0)
		value = 0;
	else if (value > 255)
		value = 255;
	R = value;
}
void Pixel::SetG(int value)
{
	if (value < 0)
		value = 0;
	else if (value > 255)
		value = 255;
	G = value;
}
void Pixel::SetB(int value)
{
	if (value < 0)
		value = 0;
	else if (value > 255)
		value = 255;
	B = value;
}
void Pixel::ReadData()
{
	int r, g, b;
	cout << "Please Enter R : ";
	cin >> r;
	cout << "Please Enter G : ";
	cin >> g;
	cout << "Please Enter B : ";
	cin >> b;
	SetR(r);
	SetG(g);
	SetB(b);
}
void Pixel::Invert()
{
	R = 255 - R;
	G = 255 - G;
	B = 255 - B;
}
void Pixel::ConverToRed()
{
	R = 255;
	B = 0;
	G = 0;
}
bool Pixel::IsBlue() const
{
	if (B == 255 && G == 0 && R == 0)
		return true;
	return false;
}
void Pixel::PrintInfo() const
{
	cout << "R = " << R << " ," << "G = " << G << " ," << "B = " << B <<endl;
}
Pixel::~Pixel()
{
	cout << "Pixel Destructor is called" << endl;
}