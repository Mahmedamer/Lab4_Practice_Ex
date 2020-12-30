#pragma once
#include "BankAccount.h"
class Bank
{
	char* name;
	BankAccount* accounts[100000];
	int num;
	int LastId;
public:
	Bank(char*);
	~Bank();
	void setName(char *);
	char* getName() const;
	void openAccount(Customer* ,double);
	void closeAccount(int );
	int countAccountsGreater(double);
	void printInfo()const;
};

