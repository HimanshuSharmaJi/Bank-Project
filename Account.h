#pragma once
#include <iostream>
#include<string>
#include "I_printable.h"
using namespace std;

enum AccountType
{
	AC_SAVING,
	AC_SALARY
};

class Account: public i_printable{ //due to pure virtual functions Now This Class is a ABSTRACT CLASS (objects of this class can not be created)
protected:
	string name;
	double balance;	
public:
	Account(string name_val="unknown", double balance = 0.0);
	virtual bool deposit(double amount) = 0; //pure virtual functions
	virtual bool withdraw(double amount) = 0; //pure virtual functions
	//virtual void print(std::ostream &os) const override;
	virtual void print(std::ostream &os) const override;
	virtual ~Account(){cout<<endl<<"Account Destructor called";}

	
	static Account* Create(AccountType);

};
