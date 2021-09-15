#include "saving_acc.h"
#include <iostream>
using namespace std;


saving_acc::saving_acc(std::string name_val, double bal, double int_rate)
	:Account(name_val,bal), interest_rate(int_rate) { cout<<endl<<"Saving_Acc Constructor Called"<<endl;}

bool saving_acc::deposit(double amount){
	amount += (amount*(interest_rate/100));
	return Account::deposit(amount);
}

bool saving_acc::withdraw(double amount){
	return Account::withdraw(amount);
}

void saving_acc::print(std::ostream &os) const{
	os.precision(2);
	os << std::fixed;
	os << "Saving Account :" << name <<":" <<balance <<":" <<interest_rate;
}

