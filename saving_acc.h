#pragma once 
#include "Account.h"
#include <iostream>

class saving_acc: public Account{
protected:
	double interest_rate;
public:
	saving_acc(string name_val="unknown", double balance = 0.0, double int_rate = 5.0);
	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount) override;
	virtual void print(std::ostream &os) const override;
	virtual ~saving_acc(){cout<<endl<<"saving Constructor called";}



};