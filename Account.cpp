#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(string name_val, double bal)
	: name(name_val), balance(bal){ cout<<endl<<"Account Constructor Called"<<endl;}

bool Account::deposit(double amount){
	balance +=amount;
	cout << endl << " Amount: "<< amount << " Deposit Successfull " << endl;
	return true;
}

bool Account::withdraw(double amount){
	if((balance-amount)>0){
		balance -= amount;
		cout << endl << " Amount: "<< amount << " Withdraw Successfull " << endl;
		return true;
	}
	else return false;

}

void Account::print(std::ostream &os) const{
	os.precision(2);
	os << std::fixed;
	os << "Account :" <<name << ":" <<balance;
}

