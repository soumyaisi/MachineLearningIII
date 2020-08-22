#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<double> numbers(28);
	
	int capacity = numbers.capacity();
	cout << capacity << endl;
	cout << numbers.size() << endl;
	for(int i = 0; i < 1000; i++){
		if(numbers.capacity() != capacity){
			capacity = numbers.capacity();
			cout << capacity << endl;
		}
		numbers.push_back(i);
	}
	numbers.resize(100);
	//increase the capacity
	numbers.reserve(10000);
	numbers.clear();
	
	return 0;
}