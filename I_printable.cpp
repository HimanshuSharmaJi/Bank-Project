#include <iostream>
#include "I_printable.h"

std::ostream &operator << (std::ostream &os, const i_printable &obj){
	obj.print(os);
	return os;
}

i_printable::~i_printable(){ std::cout<<" i_printable destructor"; }
