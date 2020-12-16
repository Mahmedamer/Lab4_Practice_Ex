#include"Bike.h"
#include<iostream>
using namespace std;
int CompareWith(Bike& b1, Bike& b2)
{
	if (b1.GetSpeed() > b2.GetSpeed())
	{
		return 1;
	}
	else if (b1.GetSpeed() < b2.GetSpeed())
	{
		return -1;
	}
	else
	{
		if (b1.GetRadius() > b2.GetRadius())
		{
			return 1;
		}
		else if (b1.GetRadius() < b2.GetRadius())
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	cout << "----------------------------Constructors---------------------------" << endl;
	Bike B1;
	Bike * Bptr;
	Bptr = new Bike(1, 10);
	cout << "----------------------------Bike 1 Info----------------------------" << endl;
	B1.PrintInfo();
	cout << "----------------------------Bike 2 Info----------------------------" << endl;
	Bptr->PrintInfo();
	int result = B1.CompareWith(*Bptr);
	cout << "-----------------Using Member Function CompareWith-----------------" << endl;
	cout << "----------------------------First Compare--------------------------" << endl;
	if ( result == 1)
	{
		B1.PrintInfo();
	}
	else if (result == -1)
	{
		Bptr->PrintInfo();
	}
	else
	{
		cout << "IS Equal" << endl;
	}
	result = CompareWith(B1 , *Bptr);
	cout << "-----------------Using Global Function CompareWith-----------------" << endl;
	cout << "----------------------------First Compare--------------------------" << endl;
	if (result == 1)
	{
		B1.PrintInfo();
	}
	else if (result == -1)
	{
		Bptr->PrintInfo();
	}
	else
	{
		cout << "IS Equal" << endl;
	}
	Bptr->SetRadius(1.5);
	result = B1.CompareWith(*Bptr);
	cout << "-----------------Using Member Function CompareWith-----------------" << endl;
	cout << "----------------------------Second Compare-------------------------" << endl;
	if (result == 1)
	{
		B1.PrintInfo();
	}
	else if (result == -1)
	{
		Bptr->PrintInfo();
	}
	else
	{
		cout << "IS Equal" << endl;
	}
	result = CompareWith(B1, *Bptr);
	cout << "-----------------Using Global Function CompareWith-----------------" << endl;
	cout << "----------------------------Second Compare--------------------------" << endl;
	if (result == 1)
	{
		B1.PrintInfo();
	}
	else if (result == -1)
	{
		Bptr->PrintInfo();
	}
	else
	{
		cout << "IS Equal" << endl;
	}
	Bptr->IncreaseSpeed(15);
	result = B1.CompareWith(*Bptr);
	cout << "-----------------Using Member Function CompareWith-----------------" << endl;
	cout << "----------------------------Third Compare--------------------------" << endl;
	if (result == 1)
	{
		B1.PrintInfo();
	}
	else if (result == -1)
	{
		Bptr->PrintInfo();
	}
	else
	{
		cout << "IS Equal" << endl;
	}
	result = CompareWith(B1, *Bptr);
	cout << "-----------------Using Global Function CompareWith-----------------" << endl;
	cout << "----------------------------Third Compare--------------------------" << endl;
	if (result == 1)
	{
		B1.PrintInfo();
	}
	else if (result == -1)
	{
		Bptr->PrintInfo();
	}
	else
	{
		cout << "IS Equal" << endl;
	}
	cout << "----------------------------Destructors----------------------------" << endl;
	delete Bptr;
	return 0;
}