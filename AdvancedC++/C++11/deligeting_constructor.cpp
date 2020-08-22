#include <iostream>

using namespace std;


class Parent{
	int dogs;
	string text;

public:
	Parent(string text){
		dogs = 5;
		this->text = "sss";
		cout << "parent cons" << endl;
	}
};

class Child: public Parent{
public:
	Child(): Parent("hello"){

	}
};

int main(){

	Parent parent("ghd");
	Child child;


	return 0;
}