#include <iostream>

using namespace std;


//class A {
//
//public :
//	
//	int _value; 
//
//	A(const int &input) {
//		_value = input; 
//		cout << " 持失切 " << endl;	
//	}
//
//	~A() {
//		cout << "社瑚切" << endl; 
//	}
//	
//	void print() {
//		cout << _value << endl;
//	}
//
//};

class Cents {

private : 
	int _cents;

public :
	Cents(int cents) { _cents = cents; }

	int getCents() const { return _cents;  }
};

Cents add(const Cents &c1, const Cents &c2) {

	return Cents(c1.getCents() + c2.getCents());
}

int main(){

	//A a(1);
	//a.print();

	//A(2).print();

	cout << add(Cents(6), Cents(8)).getCents() << endl; 

	cout << int(6) + int(8) << endl; 
}


