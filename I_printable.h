#pragma once 
#include <iostream>
using namespace std;

class i_printable{
	friend ostream &operator << (std::ostream &os, const i_printable &obj);
public:
	virtual void print(std::ostream &os) const = 0;
	virtual ~i_printable();



};