#include<iostream>
#include<fstream>
using namespace std;

int main(){

	ifstream infile;
	string name = "file.txt";
	infile.open(name);

	if(infile.is_open()){
		string line;
		//infile >> line;
		while(!infile.eof()){
			getline(infile, line);
			cout << line << endl;
		}
		//cout << line << endl;
		infile.close();

	}
	else{
		cout << "not open" << endl;
	}
	return 0;
}