#pragma once
#include "Customer.h"
class BankAccount
{
	int Id;
	Customer *customer;
	double Balance;
public:
	BankAccount(int , Customer* , double );
	void SetBalance(double balance);
	int GetId() const;
	Customer* GetCustomer() const;
	double GetBalance() const;
	void PrintInfo() const;
	~BankAccount();
};

