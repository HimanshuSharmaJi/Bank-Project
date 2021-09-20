#pragma once
#include <string>
using namespace std;

template <typename T>
class item{
private:
	string name;
	T value;
public:
	item(string name_val, T value_val): name(name_val), value(value_val){ }
	string get_name(){ return name; }
	T get_value(){ return value;}
	

};