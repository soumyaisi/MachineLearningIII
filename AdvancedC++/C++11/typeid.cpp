#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
	string val;

	cout << typeid(val).name() << endl;

	//C++ specific
	decltype(val) name = "Bob";
	cout << typeid(val).name() << endl;
	cout << name << endl;


	return 0;
}