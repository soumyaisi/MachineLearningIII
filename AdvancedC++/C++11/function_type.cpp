#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;


bool check(string &test){
	return test.size() == 3;
}

class Check{
public:
	bool operator()(string &test){
		return test.size() == 5;
	}
}check1;


void run(function<bool(string&)> check){
	string test = "sgd";
	cout << check(test) << endl;
}


int main(){
	std::vector<string> vec{"sss", "aaa", "ert"};
	int count = count_if(vec.begin(), vec.end(), [](string test){return test.size() == 3;});
	
	cout << count << endl;

	cout << count_if(vec.begin(), vec.end(), check);
	cout << count << endl;

	cout << count_if(vec.begin(), vec.end(), check1);
	cout << count << endl;

	int size = 5;
	auto lambda = [size](string test){return test.size() == 3;};
	run(lambda);
	run(check1);
	run(check);

	function<int(int, int)> add = [](int a, int b){return a+b;};
	cout << add(4,88) << endl;


	return 0;
}