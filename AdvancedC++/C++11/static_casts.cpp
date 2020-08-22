#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;


class Parent{

};

class Brother: public Parent{

};

class Sister: public Parent{

};


int main(){

	Parent parent;
	Brother brother;

	Parent *pp = &brother;

	Brother *bp = static_cast<Brother *>(&parent);
	cout << bp << endl;

	
	return 0;
}

