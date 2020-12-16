#include "Bike.h"
#include<iostream>
using namespace std;

Bike::Bike()
{
	W1.SetRadius(1.5);
	W2.SetRadius(1.5);
	Speed = 10;
	cout << "Default Bike Constructor is Called" << endl;
}
Bike::Bike(double r, double s)
{
	W1.SetRadius(r);
	W2.SetRadius(r);
	Speed = s < 0 ? 0 : s;
	cout << "Non-Default Bike Constructor is Called" << endl;
}
void Bike::SetRadius(double r)
{
	W1.SetRadius(r);
	W2.SetRadius(r);
}
void Bike::IncreaseSpeed(double increaseby)
{
	double s = Speed + increaseby;
	Speed = s < 0 ? 0 : s;
}
int Bike::CompareWith(Bike &b) const
{
	if (Speed > b.Speed)
	{
		return 1;
	}
	else if (Speed < b.Speed)
	{
		return -1;
	}
	else 
	{
		if (W1.GetRadius() > b.W1.GetRadius())
		{
			return 1;
		}
		else if (W1.GetRadius() < b.W1.GetRadius())
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}
}
void Bike::PrintInfo() const
{
	W1.PrintInfo();
	cout << "Speed = " << Speed << endl;
}
double Bike::GetSpeed() const
{
	return Speed;
}
double Bike::GetRadius() const
{
	return W1.GetRadius();
}
Bike::~Bike()
{
	cout << "Bike Destructor is Called" << endl;
}