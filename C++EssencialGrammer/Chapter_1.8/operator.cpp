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
	// + is operator(������) , 1 or 2 is operand(�ǿ�����)
	cout << 1 + 2 << endl;

	//���� ������(Conditional operator)�� C++�� ������ ���� ������(Ternary operator)
	//�̴�. 
	// x�� 0���� ���̸� 1, �����̸� 2 
	int y = (x > 0) ? 1 : 2;

	cout << y << endl;
}
