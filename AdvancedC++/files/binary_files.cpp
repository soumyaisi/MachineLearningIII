#include<iostream>
#include<fstream>
using namespace std;

#pragma pack(push, 1)
struct Person{
	char name[50];
	int age;
	double weight;
};
#pragma pack(pop)


int main(){
	Person someone = {"ssoumys", 45, 40.7};
	cout << sizeof(Person) << endl;
	string filename = "test.bin";
	//writes binary file.....
	ofstream outfile;
	outfile.open(filename, ios::binary);
	if(outfile.is_open()){
		outfile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
		outfile.close();
	}
	else{
		cout << "not open..." << endl;
	}
	//read binary file...............
	Person elsesomeone = {};
	ifstream infile;
	infile.open(filename, ios::binary);
	if(infile.is_open()){
		infile.read(reinterpret_cast<char *>(&elsesomeone), sizeof(Person));
		infile.close();
	}
	else{
		cout << "not open..." << endl;
	}
	cout << elsesomeone.name << " " << elsesomeone.age << " " << elsesomeone.weight << endl;
	return 0;
}