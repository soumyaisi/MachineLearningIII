#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

//return value optimization


class Test{
private:
	static const int SIZE = 100;

	int *pBuffer;
public:
	Test(){
		cout << "constructor" << endl;
		pBuffer = new int[SIZE]{};
	}

	Test(int i){
		cout << "parameter constructor" << endl;
		pBuffer = new int[SIZE]{};

		for(int i=0; i < SIZE; i++){
			pBuffer[i] = 7*i;
		}
	}

	Test(const Test &other){
		cout << "copy constructor" << endl;
		pBuffer = new int[SIZE]{};

		memcpy(pBuffer, other.pBuffer, SIZE*sizeof(int));
	}

	Test &operator=(const Test &other){
		cout << "assignment" << endl;
		pBuffer = new int[SIZE]{};

		memcpy(pBuffer, other.pBuffer, SIZE*sizeof(int));
		return *this;
	}

	~Test(){
		cout << "destructor" << endl;
		delete[] pBuffer;
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


void check(const Test &value){
	cout << "lvalue...." << endl;
}

void check(Test &&value){
	cout << "rvalue...." << endl;
}

int main(){

	Test test1 = getTest();
	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());
	//..........................

	Test &rTest1 = test1;

	//not work....
	//Test &rTest2 = getTest();
	const Test &rTest2 = getTest();

	Test test2(Test(1));

	//...........................
	Test &ltest1 = test1;
	//Test &&rtest1 = test1;
	Test &&rtest1 = Test();
	Test &&rtest2 = getTest();

	check(test1);
	check(getTest());
	check(Test());

	return 0;
}