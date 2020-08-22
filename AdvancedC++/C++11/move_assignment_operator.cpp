#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test{
private:
	static const int SIZE = 100;

	int *pBuffer{nullptr};
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

	Test(Test &&other){
		pBuffer = other.pBuffer;
		other.pBuffer = nullptr;
		cout << "move constructor" << endl;
	}

	Test &operator=(const Test &other){
		cout << "assignment" << endl;
		pBuffer = new int[SIZE]{};

		memcpy(pBuffer, other.pBuffer, SIZE*sizeof(int));
		return *this;
	}

	Test &operator=(Test &&other){
		cout << "move assignment" << endl;
		delete[] pBuffer;
		pBuffer = other.pBuffer;
		other.pBuffer = nullptr;
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

	vector<Test> vec;
	vec.push_back(Test());
	//..........................
	Test test;
	test = getTest();
	

	return 0;
}