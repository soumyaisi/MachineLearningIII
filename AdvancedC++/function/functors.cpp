#include <iostream>
using namespace std;

//by default all variables and methods are public
struct Test{
	virtual bool operator()(string &s) = 0;

	virtual ~Test(){} 
};

struct MatchTest: public Test{
	virtual bool operator()(string &s){
		return s == "lion";
	}
};

void check(string s, Test &t){
	if(t(s)){
		cout << "Text matches...."<<endl;
	}
	else{
		cout << "No match" << endl;
	}
}


int main(){
	
	MatchTest pred;
	string val = "lion";
	cout << pred(val) << endl;

	MatchTest m;
	check("liond", m);

	return 0;
}