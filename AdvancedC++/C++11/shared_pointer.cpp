#include <iostream>
#include <memory>
using namespace std;

class Test{
public:
	Test(){
		cout << "created" << endl;
	}

	void greet(){
		cout << "hello" << endl;
	}

	~Test(){
		cout << "destroyed" << endl;
	}
};

class Temp{
private:
	unique_ptr<Test[]> pTest1;
public:
	Temp(): pTest1(new Test[6]){

	}
};

int main(){
	shared_ptr<int> pTest(new int);
	*pTest = 7;
	cout << *pTest << endl;
	cout << "Finished" << endl;

	shared_ptr<Test> pTest1 = make_shared<Test>();
	pTest1->greet();
	shared_ptr<Test> pTest2 = pTest1;
	cout << "Finished" << endl;

	Temp temp;
	
	return 0;
}