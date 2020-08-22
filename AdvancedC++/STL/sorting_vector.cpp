#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class Test{
private:
	int id;
	string name;

public:
	Test(int id, string name):
	id(id), name(name){

	}

	void print(){
		cout << id << ":" << name << endl;
	}

	//operator overloading
	bool operator<(const Test & other) const{
		return name < other.name;
	}

	friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b){
	return a.name < b.name;
}

int main(){

	vector<Test> tests;

	tests.push_back(Test(5, "sdf"));
	tests.push_back(Test(15, "sdddf"));
	tests.push_back(Test(25, "sdrgf"));
	tests.push_back(Test(35, "sdfnjk"));

	//sort(tests.begin(), tests.end());
	sort(tests.begin(), tests.end(), comp);

	for(int i = 0; i < tests.size(); i++){
		tests[i].print();
	}

	return 0;
}