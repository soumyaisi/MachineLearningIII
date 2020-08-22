#include <iostream>
#include <functional>
using namespace std;
using namespace placeholders;


class Test{
public:
	int add(int a, int b, int c){
		cout << a << " " << b << " " << c << endl;
		return a+b+c;
	}

	
};

int run(function<int(int, int)> func){
	return func(7,4);
}

/*

int add(int a, int b, int c){
	cout << a << " " << b << " " << c << endl;
	return a+b+c;
}

int run(function<int(int, int)> func){
	return func(7,4);
}
*/

int main(){
	/*
	cout << add(1,2,3) << endl;

	auto calculator = bind(add, 6,7,8);
	cout << calculator() << endl; 

	auto calculate = bind(add, _1,_2,_3);
	cout << calculate(10,30,70) << endl; 

	auto calculate1 = bind(add, _2,_3,_1);
	cout << calculate1(10,30,70) << endl; 

	cout << run(calculator) << endl;
	*/
	Test test;
	auto calculate = bind(&Test::add, test, _2, 100, _1);
	cout << run(calculate) << endl;

	return 0;
}