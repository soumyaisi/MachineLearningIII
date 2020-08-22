#include<iostream>
#include<map>
using namespace std;

int main(){
	map<string, int> ages;
	ages["jjf"] = 12;
	ages["erte"] = 56;
	ages["bvnv"] = 54;
	pair<string, int>addto("dddd", 34);
	ages.insert(addto);
	ages.insert(make_pair("fgts", 98));
	if(ages.find("bvnv") != ages.end()){
		cout << "found" << endl;
 	}
 	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
 		cout << it->first << " " << it->second << endl;
 	}
 	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
 		pair<string, int> age = *it;
 		cout << age.first << " " << age.second << endl;
 	}
	return 0;
}