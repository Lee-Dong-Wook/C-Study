#include <iostream>

using namespace std; 

class B {
 
	int _b;
	int _a;

public:
	B(const int &_b_intput) : _b(_b_intput) {

		_a = _b_intput;
	}

	void setValue(const int &b) {_b = b;}
	int getValue() { return _b; }

	void printValue() {
		cout << _a << endl; 
	}
};

class Something {

	int			_i = 1;
	double		_d = 2;
	char		_c = 'C';
	int		_arr[5] = { 5,4,3,2,1 };
	B			m_b = 100;

public:
	Something() :
		_i(1),
		_d(2),
		_c('c'),
		_arr{1, 2, 3, 4, 5},
		m_b(_i -1){ //initializer list 

		_i = 3; //  물론 여기서 다시 대입이 가능하다. 
		_d = 2;
		_c = 'a'; 
		m_b = 1000;
		
	}

	void print() {

		cout << _i << " " << _d << " " << _c  << " " << m_b.getValue() << endl;

		for (auto e : _arr)
			cout << e << " "; 

		cout << endl; 
	}
};

int main(){

	Something smt;
	smt.print();

	B bb(5);
	bb.printValue();
}
