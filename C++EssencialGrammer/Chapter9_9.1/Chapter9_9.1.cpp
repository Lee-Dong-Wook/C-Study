#include <iostream>
using namespace std;

class Cents {
	
private:
	int _cents;

public : 
	Cents(int cents) { _cents = cents; }
	int getCents() const { return _cents; }
	int &getCents() { return _cents; }

	Cents operator +(const Cents &c2) {
		//this는 생략가능 
		return Cents(this->_cents + c2._cents);
	}
};

int main() {

	Cents cents1(6);
	Cents cents2(8);

	cout << (cents1 + cents2 + Cents(6) + Cents(500)).getCents() << endl;

	return 0;

}
