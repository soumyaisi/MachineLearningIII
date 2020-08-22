#include <iostream>
#include <algorithm>

using namespace std;

class Test{
private:
	int id;
	string name;

public:
	Test(): id(0), name(""){

	}

	Test(int id, string name): id(id), name(name){

	}

	void print(){
		cout << id << ":" << name << endl;
	}

	//assignment operator
	const Test &operator=(const Test &other){
		id = other.id;
		name = other.name;
		return *this;
	}

	//copy constructor
	Test(const Test &other){
		id = other.id;
		name = other.name;
	}
};

int main(){

	Test test1(10, "werd");
	test1.print();
	cout << "\n";

	Test test2(20, "adsf");

	test2 = test1;
	test2.print();
	cout << "\n";

	Test test3;
	test3.operator=(test2);
	test3.print();
	cout << "\n";

	//copy initialization
	Test test4 = test1;
	test4.print();


	return 0;
}
