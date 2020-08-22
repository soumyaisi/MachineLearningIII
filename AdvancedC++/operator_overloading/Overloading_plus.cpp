#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main(){

	Complex c1(3,4);
	Complex c2(2,3);

	cout << c1 + c2 << endl;

	Complex c4(4,2);
	Complex c5 = c4 + 7;
	cout << c5 << endl;

	Complex c6(3,5);
	cout << 3.2 + c6 << endl;

	cout << c1+c2+8+9.4+c6 << endl;

	return 0;
}

//to run
//g++ Overloading_plus.cpp Complex.cpp
