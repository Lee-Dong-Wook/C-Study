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

	//postfix //post �϶��� �Ű������� �ƹ��ų� ����. 
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
