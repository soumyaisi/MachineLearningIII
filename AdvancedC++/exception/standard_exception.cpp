#include<iostream>
using namespace std;

class funtion{
public:
	funtion(){
		char * a = new char [100000000000000000];
		delete a;
	}
};

int main(){

	try{
		funtion f;
	}
	catch(bad_alloc &e){
		cout << "exception..." << e.what() << endl;
	}
	cout << "still running........" << endl;
	return 0;
}