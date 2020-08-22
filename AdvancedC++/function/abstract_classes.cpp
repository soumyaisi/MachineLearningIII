#include <iostream>
using namespace std;

//abstruct class as pure virtual class
class Animal{
public:
	virtual void run() = 0;
	virtual void speak() = 0;
};

class Dog: public Animal{
public:
	virtual void speak(){
		cout << "hoof" << endl;
	}
};

class labrador: public Dog{
public:
	labrador(){
		cout << "new lab" << endl;
	}
	virtual void run(){
		cout << "yes" << endl;
	}
};


void test(Animal &a){
	a.run();
}

int main()
{
	//showing error when include labrador class
	//Dog dog;
	//dog.speak();

	labrador labs[5];

	labrador lab;
	lab.run();
	lab.speak();

	Animal *animal[5];
	animal[0] = &lab;
	animal[0] ->speak();

	test(lab);
	
	return 0;
}