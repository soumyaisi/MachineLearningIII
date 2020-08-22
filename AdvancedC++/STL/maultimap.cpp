#include<iostream>
#include<map>
#include<multimap>
using namespace std;


//duplicate key...

int main(){

	multimap<int, string> lookup;

	lookup.insert(make_pair(30, "asdf"));
	lookup.insert(make_pair(10, "rfsdf"));
	lookup.insert(make_pair(30, "uidf"));
	lookup.insert(make_pair(70, "xczdf"));

	for(multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++){
		cout << it->first << " " << it->second << endl;
	}

	cout << "\n";

	for(multimap<int, string>::iterator it = lookup.find(10); it != lookup.end(); it++){
		cout << it->first << ":" << it->second << endl;
	}

	cout << "\n";

	pair<multimap<int, string>::iterator, multimap<int, string>::iterator>its = lookup.equal_range(30);
	for(multimap<int, string>::iterator it = its.first; it != its.second; it++){
		cout << it->first << ":" << it->second << endl;
	}

	cout << "\n";

	//C++11 special auto keyword
	auto its1 = lookup.equal_range(10);
	for(multimap<int, string>::iterator it = its1.first; it != its1.second; it++){
		cout << it->first << ":" << it->second << endl;
	}

	return 0;
}