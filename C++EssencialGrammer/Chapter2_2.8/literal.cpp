#include <iostream>
using namespace std;

int main() {

	float pi = 3.14f;
	int i = 12345;
	int j = (unsigned int)123;
	long l = 5L;
	double d = 6.0e-10;

	// Decimal 0 1 2 3 4 5 6 7 8 9 10
	// Octal : 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa  : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 

	//8����
	//�Ǽ��� �� �տ� 0�� ���̰� �Ǹ� 8������ �Ǿ������. 
	int x = 012;
	cout << x << endl;

	//16���� 
	int y = 0xF;
	cout << y << endl;

	//C++ 14���� binary literal �� ���������� 
	int z = 0b1111; //15��� 
	cout << z << endl;

	//���� �� ���̳ʸ� ���� ���� ������ ' ��ũ�� ���� �� �ְ� �Ǿ���, �����Ϸ��� �̸� �����Ѵ�.
	int v = 0b1111'1010'0011;
	cout << v << endl;




}