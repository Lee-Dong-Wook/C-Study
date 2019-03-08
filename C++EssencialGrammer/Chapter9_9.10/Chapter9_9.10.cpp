#include <iostream>
#include <cassert>
using namespace std;

class Fraction {

private:
	int _numerator;
	int _denominator;

public:

	Fraction(char) = delete;
	
	explicit Fraction(int num = 0, int den = 1) :_numerator(num), _denominator(den) {

		assert(den != 0);
	}

	Fraction(const Fraction &fraction) :_numerator(fraction._numerator), _denominator(fraction._denominator) {//copy constructor

		cout << "Copy constructor called" << endl;
	}

	friend std::ostream &operator << (std::ostream & out, const Fraction &f) {
		out << f._numerator << " / " << f._denominator << endl;

		return out;
	}
};

void doSomething(Fraction frac) {

	cout << frac << endl;
}

int main() {

	Fraction frac(6);
	doSomething(frac); // 6/1  두번째 값 1은 생성자에서의 기본값  
	
	//Fraction frac2('c');
	
	return 0; 
}

