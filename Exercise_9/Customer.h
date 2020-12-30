#pragma once
class Customer
{
	int SSN;
	char* name;
public:
	Customer();
	void SetSSN(int ssn);
	void Setname(const char n[]);
	char* GetName() const;
	int GetSSN() const;
	void ReadInfo();
	void PrintInfo() const;
	~Customer();
};

