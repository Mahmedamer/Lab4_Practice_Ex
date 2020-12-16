#pragma once
#include "Pixel.h"
class ImageRow
{
	Pixel* pixels;
	int num;
public:
	ImageRow(int n);
	void ReadPixels();
	int CountBlues() const;
	int ConvertBluesToReds();
	void InvertAll();
	void PrintInfo() const;
	~ImageRow();
};

