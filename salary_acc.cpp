#include "salary_acc.h"
#include <iostream>
using namespace std;


salary_acc::salary_acc(std::string name_val, double bal, double min_bal_val)
	:Account(name_val,bal), min_bal(min_bal_val) { cout<<endl<<"salary_acc Constructor Called"<<endl;}

bool salary_acc::deposit(double amount){
	return Account::deposit(amount);
}

bool salary_acc::withdraw(double amount){
	if(balance-amount<=1000){
		cout<<endl<<" insufficient balance Can Take out maximum: " << balance-1000;
		return false;
	}
	else {
		return Account::withdraw(amount);
	}
}

void salary_acc::print(std::ostream &os) const{
	os.precision(2);
	os << std::fixed;
	os << "Salary Account :" << name << ":" <<balance << ":" <<min_bal;
}


