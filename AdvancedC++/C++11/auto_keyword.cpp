#include <iostream>
using namespace std;


//mention return type
auto test() -> int{
	return 72;
}

template<class T>
auto test1(T value) -> decltype(value){
	return value;
}

template<class T, class S>
auto test2(T value1, S value2) -> decltype(value1+value2){
	return value1+value2;
}

int get(){
	return 9999;
}

auto test3() -> decltype(get()){
	return get();
}
int main(){
	
	auto value = 7;
	cout << value << endl;

	cout << test() << endl;

	cout << test1("Hi there") << endl;

	cout << test2(4,3) << endl;

	cout << test3() << endl;
	
	return 0;
}