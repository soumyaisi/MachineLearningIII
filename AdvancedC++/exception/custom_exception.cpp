#include<iostream>
#include<exception>
using namespace std;

class MyException: public exception{
public:
	virtual const char* what() const throw(){
		return "dhhdh hdhdhhd";
	}
};

//runtime error....................
class Test{
public:
	void hhgh() throw(bad_alloc){
		throw MyException();
	}
};

//compile time error....................
class Test{
public:
	void hhgh(){
		throw MyException();
	}
};


int main(){

	Test test;
	try{
		test.hhgh();
	}
	catch(MyException &e){
		cout << e.what() << endl;
	}
	return 0;
}