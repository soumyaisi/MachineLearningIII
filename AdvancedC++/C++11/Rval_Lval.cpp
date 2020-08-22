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


int main(){

	Test test1 = getTest();
	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	int value1 = 7;
	int *pval1 = &value1;

	Test *pTest1 = &test1;

	int *pval3 = &++value1;
	cout << *pval3 << endl;

	//not work
	//int *pval4 = &value1++;

	//int *as = &(7 + value1);


	return 0;
}