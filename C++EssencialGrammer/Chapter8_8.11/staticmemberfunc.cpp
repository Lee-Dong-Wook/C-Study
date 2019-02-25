#include <iostream>

using namespace std;

class Something {

public : 

	class _init {
	
	public:
		_init() {
			s_value = 9999;
		}
	};

private:
	static int s_value;
	int _value; 

	static _init s_initalizer;

public : 
	/*Something() {
		s_value = 100;
		_value = 123;	
	}*/
	static int getValue() {	return s_value; }

	int temp() { _value = 5; return this->s_value+_value; }
};

int Something::s_value;
Something::_init Something::s_initalizer; 


int main() {

	cout << Something::getValue() << endl;

	Something s1,s2; 
	cout << s1.getValue() << endl;

	int (Something::*fptr1)() = &Something::temp; 

	cout << (s1.*fptr1)() << endl;
	cout << (s2.*fptr1)() << endl;

	int (*fptr2)() = &Something::getValue;
	cout << fptr2() << endl; 
}

