#include<iostream>
#include<exception>
using namespace std;

void goesWrong(){
	bool error1 = true;
	bool error2 = false;

	if(error1){
		throw bad_alloc();
	}
	if(error2){
		throw exception();
	}
}

//catch subclass before parent class

int main(){

	try{
		goesWrong();
	}
	catch(bad_alloc &e){
		cout <<"ssss"<< e.what() << endl;
	}
	catch(exception &e){
		cout << "eeee"<<e.what() << endl;
	}
	

	return 0;
}