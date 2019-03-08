#include <iostream>
#include <cassert>
using namespace std;

class Fraction {

private : 
	int _numerator;
	int _denominator;

public : 
	Fraction(int num = 0, int den = 1) :_numerator(num), _denominator(den) {

		assert(den != 0);
	}
	//�ڱ�� �Ȱ��� Ÿ���� �ν��Ͻ��� ������ ���縦 �Ѵ�. 
	Fraction(const Fraction &fraction):_numerator(fraction._numerator), _denominator(fraction._denominator){//copy constructor

		cout << "Copy constructor called" << endl; 
	}

	friend std::ostream &operator << (std::ostream & out, const Fraction &f) {
		out << f._numerator << " / " << f._denominator << endl; 

		return out; 
	}
};

Fraction doSomething() {

	Fraction temp(1, 2);
	cout << &temp << endl; 
	return temp; 
}
int main(){
	
	Fraction frac(3, 5); //�Ϲ� ������

	Fraction fr_copy(Fraction(1,10));//���������
	
	cout << frac << " " << fr_copy << endl;  // 3/5, 3/5 	

	Fraction result = doSomething();
	cout << result << endl; 
	cout << &result << endl; 
}

