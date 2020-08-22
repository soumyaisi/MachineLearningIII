#include<iostream>
#include<stack>
#include<queue>
using namespace std;


class Test{
private:
	string name;

public:
	Test(string name):
	name(name){

	}

	~Test(){
		//cout << "deconstructor" << endl;
	}

	void print(){
		cout << name << endl;
	}
};


int main(){

	stack<Test> testStack;
	testStack.push(Test("Mike"));
	testStack.push(Test("Bike"));
	testStack.push(Test("Sike"));

	Test test1 = testStack.top();
	test1.print();

	//invalid code....
	Test &test2 = testStack.top();
	testStack.pop();
	test2.print();//reference refers to destroy object


	//testStack.pop();


	while(testStack.size() > 0){
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}


	//--------------------------

	queue<Test> testQueue;
	testQueue.push(Test("Mike"));
	testQueue.push(Test("Bike"));
	testQueue.push(Test("Sike"));

	cout << "\n";

	testQueue.back().print();

	while(testQueue.size() > 0){
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	return 0;
}