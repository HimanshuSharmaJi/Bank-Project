#include<iostream>
#include<conio.h>
#include"Account.h"
#include"salary_acc.h"
#include"saving_acc.h"
#include<vector>

void main(){

//	Account *ptr = new Account;
//	ptr->deposit(1000);
	
	Account *ptr1 = new salary_acc;
	ptr1->deposit(1000);

	Account *ptr2 = new salary_acc("Himanshu", 5000, 1000);
	cout << *ptr2;

	Account *ptrnew = new saving_acc("Atul Amola", 20000, 40);
	ptrnew->deposit(20000);
	cout << *ptrnew;
	

	/*Account *ptr3 = new saving_acc;
	ptr3->deposit(1000);


	Account *ptr4 = new salary_acc;
	ptr4->deposit(1000);

	Account *ptr5 = new saving_acc;
	ptr5->deposit(1000);
	}
	*/
	/* vector<Account *> &accounts = {ptr1,ptr2};

	for(const auto ptr: accounts){
		ptr->deposit(1000); */
	

	_getche();

}
