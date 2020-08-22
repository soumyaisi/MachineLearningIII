#include <iostream>
#include <vector>
using namespace std;

int main(){

	int value{5};
	cout << value << endl;

	int numbers[]{1,2,3};
	cout << numbers[1] << endl;

	int *pInts = new int[3]{1,2,3};
	cout << pInts[1] << endl;
	delete pInts;

	int val{};
	cout << val << endl;

	int *psome{&value};
	cout << *psome << endl;

	int *psome1{nullptr};
	cout << psome1 << endl;

	struct{
		int value;
		string text;
	}s1 = {2,"frtg"};

	cout << s1.text << endl;

	return 0;
}