#include <iostream>
using namespace std;


void testGreed(void (*geed)(string)){
	geed("bdbbdbb");
}

void runDivide(double (*divide)(double a, double b)){
	auto rval = divide(9,3);
	cout << rval << endl;
}

int main(){
	auto pGreed = [](string name){cout << name << endl;};
	pGreed("dggdhdh");

	testGreed(pGreed);

	auto pDivide = [](double a, double b) -> double{
		if(b == 0.0){
			return 0;
		}
		return a/b;
	};

	cout << pDivide(10.0,5.2) << endl;
	cout << pDivide(10.0,0) << endl;

	runDivide(pDivide);

	return 0;
}