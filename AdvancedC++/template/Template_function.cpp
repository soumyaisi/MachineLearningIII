#include <iostream>
using namespace std;

//template<class T>
template<typename T>

void print(T n){
	cout << n << endl;
}

int main(){

	print<string>("Hello");

	print<int>(5);

	print("Hi !!!");

	return 0;
}