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
		//cout << "copy constructor" << endl;
		name = other.name;
		age = other.age;
	}
	//constructor
	Person(string name, int age):
		name(name), age(age){
	}

	void print() const{
		cout << name << " " << age << endl;
	}

	//operator overloading
	bool operator<(const Person &other) const{
		if(name == other.name){
			return age < other.age;
		}
		else{
			return name < other.name;
		}
		
	}
};

int main(){
	map<Person, int> people;
	people[Person("ssd", 43)] = 11;
	people[Person("ssd", 46)] = 19;
	people[Person("qwe", 21)] = 12;
	people[Person("zxc", 89)] = 13;
	

 	for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++){
 		cout << it->second << ":" << flush;
 		it->first.print();
 	}
 	
	return 0;
}