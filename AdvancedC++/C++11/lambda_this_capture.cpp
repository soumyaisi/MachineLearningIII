#include <iostream>
using namespace std;


class Test{
private:
	int one{1};
	int two{2};

public:
	void run(){
		int three{3};
		int four{4};

		auto pLamb = [three, this, four](){
			one = 111;
			cout << one << endl;
			cout << three << endl;
			cout << four << endl;
		};

		auto pLamb1 = [&, this](){
			one = 111;
			cout << one << endl;
			cout << three << endl;
			cout << four << endl;
		};

		pLamb();
		pLamb1();
	}
};

int main(){
	Test test;
	test.run();
	return 0;
}