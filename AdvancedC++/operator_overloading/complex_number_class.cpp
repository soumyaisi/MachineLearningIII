#include <iostream>
#include "Complex.h"


using namespace std;
using namespace caveofprogramming;



int main(){

	Complex c1(2,3);
	Complex c2 = c1;
	c1 = c2;

	cout << c1 << endl;

	return 0;
}

//Run this file
//g++ -std=c++11 complex_number_class.cpp Complex.cpp


