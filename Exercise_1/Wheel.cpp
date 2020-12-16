#include "Wheel.h"
#include<iostream>
using namespace std;
Wheel::Wheel(double r)
{
	SetRadius(r);
	cout << "Wheel Constructor is Called" << endl;
}
void Wheel::SetRadius(double r)
{
	Radius = r >= 0 ? r : 0;
}
double Wheel::GetRadius() const
{
	return Radius;
}
void Wheel::PrintInfo() const
{
	cout << "Radius = " << Radius << endl;
}

Wheel::~Wheel()
{
	cout << "Wheel Destructor is Called" << endl;
}