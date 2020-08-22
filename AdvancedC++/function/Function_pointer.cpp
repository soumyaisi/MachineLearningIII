#include <iostream>
using namespace std;

void test(){
	cout << "Hello" << endl;
}


void test2(int val){
	cout << val << endl;
}


int main(){

	test();

	//void *pTest();
	void (*pTest)();

	pTest = &test;

	//*pTest();
	(*pTest)();

	test2(7);
	void (*pTes)(int) = test2;
	pTes(8);

	return 0;
}