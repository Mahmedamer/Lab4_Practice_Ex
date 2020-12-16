#include "ImageRow.h"
#include<iostream>
using namespace std;
ImageRow::ImageRow(int n)
{
	if (n < 0)
	{
		n = 0;
	}
	num = n;
	pixels = new Pixel[num];
	cout << "ImageRow Constructor is called" << endl;
}
void ImageRow::ReadPixels()
{
	for (int i = 0; i < num;i++)
	{
		cout << "Please Enter Pixel " << i + 1 << " Data :" << endl;
		pixels[i].ReadData();
	}
}
int ImageRow::CountBlues() const
{
	int count = 0;
	for (int i = 0; i < num;i++)
	{
		if (pixels[i].IsBlue())
		{
			count++;
		}
	}
	return count;
}
int ImageRow::ConvertBluesToReds()
{
	int count = CountBlues();
	if (count == 0)
		return count;
	for (int i = 0; i < num;i++)
	{
		if (pixels[i].IsBlue())
		{
			pixels[i].ConverToRed();
		}
	}
	return count;
}
void ImageRow::InvertAll()
{
	for (int i = 0; i < num;i++)
	{
		pixels[i].Invert();
	}
}
void ImageRow::PrintInfo() const
{
	for (int i = 0; i < num;i++)
	{
		cout << "Pixel "<< i + 1 << " Data : ";
		pixels[i].PrintInfo();
	}
}
ImageRow::~ImageRow()
{
	delete[] pixels;
	cout << "ImageRow Destructor is called" << endl;
}