#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){

	map<string, vector<int> > scores;

	scores["qwe"].push_back(12);
	scores["qwe"].push_back(22);
	scores["adsf"].push_back(32);

	for(map<string, vector<int> >::iterator it = scores.begin(); it != scores.end(); it++){
		string name = it ->first;
		vector<int> score = it->second;

		cout << name << ":" << flush;

		for(int i = 0; i < score.size(); i++){
			cout << score[i] << " " << flush;
		}

		cout << "\n";
	}
	return 0;
}