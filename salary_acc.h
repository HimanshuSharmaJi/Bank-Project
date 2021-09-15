#pragma once
#include "Account.h"
#include <iostream>

class salary_acc: public Account{
private:
	double min_bal;
public:
	salary_acc(string name_val="unknown", double balance = 0.0, double min_bal_val = 1000);
	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount) override;
	virtual void print(std::ostream &os) const override;
	virtual ~salary_acc(){cout<<endl<<"Salary Account Destructor";}


};