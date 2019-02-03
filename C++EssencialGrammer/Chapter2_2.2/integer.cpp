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
    
	cout << "short�� ��Ÿ�� �� �ִ� ���� ū ����? " << endl;
	cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;

	//short�� ��Ÿ�� ���ִ� ���� ū ��, ���� �� �� ��Ÿ��. 
	cout << "short�� ��Ÿ�� �� �ִ� ���� ū ���� ���� ����? " << endl;
	cout << numeric_limits<short>::max() << endl; 
	cout << numeric_limits<short>::min() << endl;

	cout << endl; 

	cout << "overflow ���� �߰� " << endl;
	short v = 32767;
	v = v + 1; //32768? 
	cout << v << endl; // overflow ������ �Ͼ. -32767��� 

	v = numeric_limits<short>::min();

	v = v - 1;

	cout << v << endl; // overflow ������ �Ͼ. 32767��� 
	return 0; 
}