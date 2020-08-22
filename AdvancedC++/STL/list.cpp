#include<iostream>
#include<list>
using namespace std;


//store each element in different place in memory
//doubly linked list

int main(){
	list<int> numbers;
	numbers.push_back(12);
	numbers.push_back(16);
	numbers.push_back(19);
	numbers.push_front(22);

	list<int>::iterator it1 = numbers.begin();
	numbers.insert(it1, 23);
	list<int>::iterator it;
	for(it = numbers.begin(); it != numbers.end(); it++){
		cout << *it << endl;
	}

	return 0;
}