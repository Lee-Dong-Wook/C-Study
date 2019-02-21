#include <iostream>
#include <string>

using namespace std;

class Student {

	int		_id;
	string  _name; 

public : 
	Student(const string &name) {

		init(0, name);
	}

	Student(const int &id, const string &name){

		init(id, name);
	}

	void init(const int &id, const string &name) {

		_id = id;
		_name = name; 
	}

	void print() {

		cout << _id << " " << _name << endl; 
	}

};

int main(){
 
	Student st1(1, "raynor");
	st1.print();

	Student st2("Sara");
	st2.print(); 
}


