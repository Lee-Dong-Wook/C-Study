#include <iostream>
using namespace std;

int main() {

	int a = 123;
	int _value = 5;
	float MyAge = 15;
	float MyWeight = 30;

	cout << "operator" << endl;

	int x = 2; // x is a variable, 2 is a literal 
	cout << "operator" << endl; // "operator is string" is literal 

	// 1 and 2 are literal , 1+2 is expression 
	// + is operator(연산자) , 1 or 2 is operand(피연산자)
	cout << 1 + 2 << endl;

	//조건 연산자(Conditional operator)는 C++의 유일한 삼항 연산자(Ternary operator)
	//이다. 
	// x가 0보다 참이면 1, 거짓이면 2 
	int y = (x > 0) ? 1 : 2;

	cout << y << endl;
}
