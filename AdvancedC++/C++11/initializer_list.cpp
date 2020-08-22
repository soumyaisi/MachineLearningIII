#include <iostream>
#include <vector>
#include<initializer_list>
using namespace std;

class Test{
public:
	Test(initializer_list<string> texts){
		for(auto value: texts){
			cout << value << endl;
		}
	}

	void print(initializer_list<string> texts){
		for(auto value: texts){
			cout << value << endl;
		}
	}
};

int main(){
	vector<int> numbers {1,2,3,5};
	cout << numbers[2] << endl;

	Test test{"apple", "wet", "xcv"};

	test.print({"cncncn", "gfd", "drette"});

	return 0;
}