#pragma once
class Wheel
{
	double Radius;
public:
	Wheel(double r = 0);
	void SetRadius(double r);
	double GetRadius() const;
	void PrintInfo() const;
	~Wheel();
};

