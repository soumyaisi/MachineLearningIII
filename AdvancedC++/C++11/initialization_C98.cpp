#include <iostream>
using namespace std;

int main(){

	int values[] = {1,2,3};

	class C{
	public:
		string text;
		int id;
	};

	C c1 = {"Hello", 7};
	cout << c1.text << endl;

	struct S{
		string text;
		int id;
	};

	S s1 = {"Hello", 7};
	cout << s1.text << endl;

	struct R{
		string text;
		int id;
	}r1 = {"Hello", 1};

	cout << r1.text << endl;


	return 0;
}