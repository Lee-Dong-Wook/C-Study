#include <iostream>

using namespace std;

class Fraction {

	int _numerator;
	int _denominator;

public:

	Fraction(const int &numerator = 1 , const int &denominator = 1) {

		_numerator = numerator;
		_denominator = denominator;

		cout << "기본 생성자 실행 " << endl; 
	}

	void print() {

		cout << _numerator << " / " << _denominator << endl; 
	}
};

class Second {

public : 
	Second() {
		cout << "class Second constructor()" << endl; 
	}
};

class First {

	Second sec; 

public :
	First(){
		cout << "class First constructor()" << endl;
	}
};

int main(){

	Fraction frac(3,5);
	frac.print();

	Fraction B_frac;
	B_frac.print();

	First fir; 

}
