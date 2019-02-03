#include <iostream>
using namespace std;

int main() {

	short s			= 1; //2byte = 2 * 8bit = 16bit = 2^16
	int i			= 1; //4byte
	long l			= 1; //4byte
	long long ll	= 1; //8byte

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
    
	cout << "short로 나타낼 수 있는 가장 큰 수는? " << endl;
	cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;

	//short가 나타낼 수있는 가장 큰 수, 작은 수 를 나타냄. 
	cout << "short로 나타낼 수 있는 가장 큰 수와 작은 수는? " << endl;
	cout << numeric_limits<short>::max() << endl; 
	cout << numeric_limits<short>::min() << endl;

	cout << endl; 

	cout << "overflow 현상 발견 " << endl;
	short v = 32767;
	v = v + 1; //32768? 
	cout << v << endl; // overflow 현상이 일어남. -32767출력 

	v = numeric_limits<short>::min();

	v = v - 1;

	cout << v << endl; // overflow 현상이 일어남. 32767출력 
	return 0; 
}