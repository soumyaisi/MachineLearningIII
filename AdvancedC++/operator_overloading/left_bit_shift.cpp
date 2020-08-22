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
		*this = other;
	}

	friend ostream &operator<<(ostream &out, const Test &test){
		out << test.id << ":" << test.name;
		return out;
	}
};

int main(){

	Test test1(10, "asdf");
	cout << test1 << endl;
	Test test2(20, "fghj");
	
	return 0;
}