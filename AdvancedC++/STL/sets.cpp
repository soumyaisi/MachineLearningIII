#include<iostream>
#include<set>
using namespace std;


class Test{
	int id;
	string name;

public:
	Test(): id(0), name(""){

	}
	Test(int id, string name): id(id), name(name){

	}

	void print() const{
		cout << id << " " << name << endl;
	}

	//operator overloading
	bool operator<(const Test &other) const{
		return name < other.name;
	}
};

int main(){

	set<int> numbers;

	numbers.insert(50);
	numbers.insert(70);
	numbers.insert(30);
	numbers.insert(10);

	for(set<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
		cout << *it << endl;
	}

	set<int>::iterator itfind = numbers.find(10);

	if(itfind != numbers.end()){
		cout << "FOUND" << endl;
	}


	set<Test> tests;
	tests.insert(Test(10, "qwe"));
	tests.insert(Test(30, "asd"));
	tests.insert(Test(20, "zxc"));

	for(set<Test>::iterator it = tests.begin(); it != tests.end(); it++){
		it->print();
	}

	return 0;
}