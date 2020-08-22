#include <iostream>

using namespace std;


class Test{

};

template<typename T>
void call(T &&arg){
	check(arg);
}

template<typename T>
void call1(T &&arg){
	//check(static_cast<T>(arg));
	check(forward<T>(arg));
}

void check(Test &test){
	cout << "lvalue" << endl;
}

void check(Test &&test){
	cout << "rvalue" << endl;
}

int main(){

	Test test;

	auto &&t = test;

	call(Test());

	call(test);

	call1(Test());

	
	return 0;
}