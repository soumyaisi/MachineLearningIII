#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool match(string s){
	return s.size() == 3;
}


int countString(vector<string> &texts, bool (*match)(string test)){
	int tally = 0;
	for(int i = 0; i < texts.size(); i++){
		if(match(texts[i])){
			tally++;
		}
	}
	return tally;
}


int main(){

	vector<string> texts;
	texts.push_back("One");
	texts.push_back("Three");
	texts.push_back("Five");
	texts.push_back("Two");

	cout << match("erts") << endl;
	cout << count_if(texts.begin(), texts.end(), match) << endl;

	cout << countString(texts, match) << endl;
	return 0;
}