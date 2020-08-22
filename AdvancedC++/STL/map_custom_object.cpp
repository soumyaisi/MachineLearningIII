#include<iostream>
#include<map>
using namespace std;

class Person{
private:
	string name;
	int age;
public:
	//default constructor
	Person(): name(""), age(0){

	}
	//copy constructor
	Person(const Person &other){
		cout << "copy constructor" << endl;
		name = other.name;
		age = other.age;
	}
	//constructor
	Person(string name, int age):
		name(name), age(age){
	}

	void print(){
		cout << name << " " << age << endl;
	}
};

int main(){
	map<int, Person> people;
	people[0] = Person("ssd", 43);
	people[1] = Person("qwe", 21);
	people[2] = Person("zxc", 89);
	
	people.insert(make_pair(55, Person("fgtr", 34)));

 	for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++){
 		//cout << it->first << " " << it->second << endl;
 		it->second.print();
 	}
 	
	return 0;
}