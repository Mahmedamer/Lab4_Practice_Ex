#pragma once
#include "Wheel.h"
class Bike
{
	Wheel W1, W2;
	double Speed;
public:
	Bike();
	Bike(double r , double s);
	void SetRadius(double r);
	void IncreaseSpeed(double increaseby);
	int CompareWith(Bike &b) const;
	void PrintInfo() const;
	double GetSpeed() const;
	double GetRadius() const;
	~Bike();
};

