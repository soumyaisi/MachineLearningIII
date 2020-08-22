#include <iostream>
using namespace std;

//functors....
//[](){};---format of lambda expression


void test(void (*pfunc)()){
	pfunc();
}


int main(){

	//function does not have name and return type
	[](){cout << "Hello" << endl; };

	auto func = [](){cout << "Hello" << endl; };
	func();
	//or
	[](){cout << "Hello" << endl; }();
	
	test(func);
	test([](){cout << "Hello again" << endl; });


	return 0;
}