//GENERIC PROGRAMMINg

#include <iostream>
#include <conio.h>
#include <string>

#include "Item.h"
using namespace std;

//USING MACRO 
#define MAX 100 //during compilation it removes this line and replace the MAX with what ever the value it defined to 

//Using MACRO with the PARAMETERS 
#define max(a,b) ((a>b)?a:b);

//BE carefull with macros 
#define SQUARE(a) a*a

//FUNCTION template 
template <typename T> //Without this the compiler will give the Error // template 
						//This is now blueprint only   
						// This will compile but will not generate any code till used
T mini(T a, T b){
	return (a<b) ? a : b;
}

//Function Template with 2 arguments 
template <typename T1, typename T2>
void func(T1 a, T2 b){
	cout<<endl<<" "<<a<<" "<<b;
}

//Structure 
struct Person{
	string name;
	int age;
};

ostream &operator <<(ostream &os, const Person &p){
	cout<<endl<<p.name<<" "<<p.age;
	return os;
}

//SWAP TWO NUMBERS 
template <typename T>
void my_swap(T &a, T &b){
	T temp = a;
	a=b;
	b=temp;
}

void main(){
	//USING MACRO 
	cout<<MAX; //MAX is replaed by the 100
	
	//Using MACRO with the PARAMETERS 
	cout<<endl<<max(10,20); //here max(10,20) is replaced by the ((10>20)?10:20); 
							//We can also use the different data types 

	cout<<endl<<"Square of 5 : "<<SQUARE(5); // 25 //ok
	//BE carefull with macros 
	cout<<endl<<100/SQUARE(5); //Expected 4 //returned 100 //
								//100/5*5 = 100


	//Function Template  
	cout<<endl<<mini<int> (2,3);
	cout<<endl<<mini(2,3); //here <int> is not provided the Compiler IS SMART enough to detect that this is the INTEGER type 
	cout<<endl<<mini('A','B');
	cout<<endl<<mini(12.5,9.2);
	cout<<endl<<mini(2*2*2,5*5);

	////Function Template  with 2 parameters 
	func<int,int>(12,13);
	func(12,13);
	func<double,int>(20.20,20);
	func(20,"Himanshu");

	////Structure 
	Person p1;
	p1.name = "Himanshu";
	p1.age =  25;
	Person p2;
	p2.name = "Atul";
	p2.age = 24;

	func(p1,p2);

	//Swap 
	int a = 1000, b=2000;
	cout<<endl<<a<<" "<<b;
	my_swap(a,b);
	cout<<endl<<a<<" "<<b;



	cout<<endl<<endl<<"**************************** CLASS TEMPLATE ********************** \n\n";

	item<int> boy("Himanshu",25);
	cout<<boy.get_name();
	cout<<" "<<boy.get_value();

	item<string> school("Bharti", "New Delhi");
	cout<<endl<<endl;
	cout<<school.get_name()<<" ";
	cout<<school.get_value();
	
	//item <item<string>> country{"INDIA", ("CAPITAL is", "NEW DELHI")};
	//cout<<country.get_name()<<" "<<country.get_value().getname()<<" "<<country.get_value().get_value();

	getche();
	//return 0;

}