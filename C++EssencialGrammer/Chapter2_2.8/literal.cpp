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

	//8진수
	//실수로 수 앞에 0을 붙이게 되면 8진수가 되어버린다. 
	int x = 012;
	cout << x << endl;

	//16진수 
	int y = 0xF;
	cout << y << endl;

	//C++ 14부터 binary literal 이 가능해졌음 
	int z = 0b1111; //15출력 
	cout << z << endl;

	//또한 긴 바이너리 값을 보기 쉽도록 ' 마크를 붙일 수 있게 되었다, 컴파일러가 이를 무시한다.
	int v = 0b1111'1010'0011;
	cout << v << endl;




}