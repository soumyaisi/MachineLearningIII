#include <iostream>
using namespace std;


class Parent{
private:
	int one;

public:
	Parent(): one(0){

	}

	Parent(const Parent &other): one(0){
		one = other.one;
		cout << "copy parent" << endl;
	}
	virtual void print(){
		cout << "print" << endl;
	}

	virtual ~Parent(){

	}
};

class child: public Parent{
private:
	int two;
public:
	child(): two(0){

	}

	void print(){
		cout << "child" << endl;
	}
};

int main()
{
	child c1;
	Parent &p1 = c1;
	p1.print();

	//using copy constructor
	Parent p2 = child();
	p2.print();


	return 0;
}