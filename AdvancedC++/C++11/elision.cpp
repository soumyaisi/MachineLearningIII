#include <iostream>
#include <vector>
using namespace std;

//return value optimization

class Test{
public:
	Test(){
		cout << "constructor" << endl;
	}

	Test(int i){
		cout << "parameter constructor" << endl;
	}

	Test(const Test &other){
		cout << "copy constructor" << endl;
	}

	Test &operator=(const Test &other){
		cout << "assignment" << endl;
		return *this;
	}

	~Test(){
		cout << "destructor" << endl;
	}

	friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test){
	out << "Hello....";
	return out;
}

Test getTest(){
	return Test();
}


int main(){

	Test test1 = getTest();
	cout << test1 << endl;

	return 0;
}