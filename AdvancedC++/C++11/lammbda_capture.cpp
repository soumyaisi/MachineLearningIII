#include <iostream>
using namespace std;


int main(){
	int one = 1;
	int two = 2;
	int three = 3;

	//capture one by value
	[one](){cout << "hello:" << one << endl;}();

	//capture all local variable
	[=](){cout << "hello:" << one << endl;}();

	//capture by reference
	[=, &three](){three = 7; cout << "hello:" << one << endl;}();

	[&](){three = 7; two = 5; cout << "hello:" << one << endl;}();


	return 0;
}