#pragma once
class Pixel
{
	double R, G, B;
public:
	Pixel();
	void SetR(int value);
	void SetG(int value);
	void SetB(int value);
	void ReadData();
	void Invert();
	void ConverToRed();
	bool IsBlue() const;
	void PrintInfo() const;
	~Pixel();
};

