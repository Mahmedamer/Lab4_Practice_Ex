#include "Customer.h"
#include<iostream>
using namespace std;
Customer::Customer()
{
	cout << "Customer Constructor is called" << endl;
}
void Customer::SetSSN(int ssn)
{
	if (ssn > 999999 && ssn < 100000000)
	{
		SSN = ssn;
		return;
	}
	SSN = 0;
}
void Customer::Setname(const char n[])
{
	int NameLength = strlen(n) > 100 ? 101 : strlen(n) + 1;
	name = new char[NameLength];
	strcpy_s(name, NameLength , n);
}
char* Customer::GetName() const
{
	return name;
}
int Customer::GetSSN() const
{
	return SSN;
}
void Customer::ReadInfo()
{
	char n[101];
	int ssn;
	cout << "Please Enter Your Name : ";
	cin >> n;
	cout << "Please ENter Your SSN : ";
	cin >> ssn;
	Setname(n);
	SetSSN(ssn);
}
void Customer::PrintInfo() const
{
	cout << "Customer Name : " << name << endl << "SSN : " << SSN << endl;
}
Customer::~Customer()
{
	delete[]name;
	cout << "Customer Destructor is called" << endl;
}