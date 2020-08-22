#include <iostream>
#include <vector>
using namespace std;

int main(){
	//char texts[] = {"one", "two", "three"};
	
	//C++11 special
	auto texts = {"one", "two", "three"};
	
	for(auto text: texts){
		cout << text << endl;
	}

	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

	for(auto number: numbers){
		cout << number << endl;
	}

	string hello = "hello";
	for(auto c: hello){
		cout << c << endl;
	}


	return 0;
}