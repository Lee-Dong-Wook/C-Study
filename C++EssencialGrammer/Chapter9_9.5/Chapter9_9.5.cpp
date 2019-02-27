#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

class Digit {

private:
	int _Digit;

public:
	Digit(int digit = 0) :_Digit(digit) {  }


	friend std::ostream& operator << (std::ostream &out, const Digit &d) {

		out << d._Digit;

		return out;
	}

	//prefix
	Digit & operator ++ () {

		++_Digit;
		return *this;
	}

	//postfix //post 일때는 매개변수로 아무거나 들어간다. 
	Digit & operator ++ (int) {

		Digit temp(_Digit);
		++(*this);
		return temp;
	}

	
};

int main() {

	Digit d(5);

	cout << ++d << endl; 
	cout << d << endl;
	cout << d++ << endl;
	cout << d << endl;
	return 0;
}
