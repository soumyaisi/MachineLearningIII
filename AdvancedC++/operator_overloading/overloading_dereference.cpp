#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main(){

	Complex c1(3,2);
	Complex c2(3,2);

	cout << *c1 << endl;

	//operator precedence
	cout << *c1 + *Complex(4,3) << endl;

	return 0;
}

//to run
//g++ overloading_dereference.cpp Complex.cpp
