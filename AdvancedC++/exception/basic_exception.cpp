#include<iostream>
using namespace std;

void wrong_function(){
	bool error1 = true;
	bool error2 = true;
	if (error1){
		throw "sss";
	}
	if(error2){
		throw string("hfhfhhfh");
	}
}

int main(){
	try{
		wrong_function();
	}
	catch(int e){
		cout << "Error code" << e << endl;
	}
	catch(char const *e){
		cout << "sss" << e << endl;
	}
	catch (string &e){
		cout << "dd" << e << endl;
	}
	cout << "still running..." << endl;
	
	return 0;
}