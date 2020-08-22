#include <iostream>
#include <vector>
using namespace std;


class Test{
int id{ 3 };
string name{ "adsf" };

public:
	Test() = default;
	Test(const Test &other) = delete;
	Test &operator=(const Test &other) = delete;

	Test(int id): id(id){
		
	}
	void print(){
		cout << id << ":" << name << endl;
	}
};


int main(){
	Test test;
	test.print();

	Test test1(77);
	test1.print();

	//do not work......
	//Test test2 = test1;
	//test2 = test;


	return 0;
}