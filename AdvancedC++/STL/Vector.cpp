#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<string> strings(5);
	strings.push_back("two");
	strings.push_back("three");
	//push_back does not need mention the vector size
	//strings[3] = "dog";
	//cout << strings[3] << endl; 
	cout << strings.size() << endl;
	vector<string>::iterator it ;
	for(it = strings.begin(); it != strings.end(); it++){
		cout << *it << endl;
	}
	return 0;
}