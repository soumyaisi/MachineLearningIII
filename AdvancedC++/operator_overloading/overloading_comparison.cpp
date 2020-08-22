#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main(){

	Complex c1(3,2);
	Complex c2(3,2);

	if(c1 == c2){
		cout << "equal...." << endl;
	}
	else{
		cout << "Not equal....." << endl;
	}

	if(c1 != c2){
		cout << "Not equal...." << endl;
	}
	else{
		cout << "equal....." << endl;
	}


	return 0;
}

//to run
//g++ overloading_comparison.cpp Complex.cpp
