#include <iostream>
using namespace std;

template<class T>
void print(T n){
	cout << "Template..." << n << endl;
}

void print(int value){
	cout << "No template...." << value << endl;
}


//showing error
//template<class T>
//void show(){
//	cout << T() << endl;
//}

int main(){

	print<string>("Hello");
	print<int>(5);

	print("Hi there");

	print<>(6);
	print(5);


	return 0;
}