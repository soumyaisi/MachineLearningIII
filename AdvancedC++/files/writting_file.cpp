#include<iostream>
#include<fstream>
using namespace std;

int main(){

	ofstream outfile;

	//fstream outfile;

	string name = "file.txt";

	outfile.open(name);
	//outfile.open(name, ios::out);

	if(outfile.is_open()){
		outfile << "ssssss" << endl;
		outfile << 1233 << endl;
		outfile.close();
	}
	else{
		cout << "not created" << endl;
	}
	return 0;
}