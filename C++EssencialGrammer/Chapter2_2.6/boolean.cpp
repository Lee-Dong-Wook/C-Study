#include <iostream>
using namespace std;

bool isEqual(int a, int b) {

	bool result = (a == b);

	return result;
}

int main() {

	bool b1 = true;
	bool b2 = false;
	
	cout << b1 << endl;
	cout << b2 << endl;

	cout << boolalpha;
	cout << b1 << endl;
	cout << b2 << endl;
	cout << endl;

	cout << (true &&  true) << endl;
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << ( false && false )  << endl;
	cout << endl; 

	cout << (true || true) << endl;
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;

	if (true)
		cout << true << endl;

	else
		cout << false << endl; 

	cout << isEqual(1, 2) << endl;
	cout << isEqual(1, 1) << endl;

	if (1) {  //���ǹ������� ���ǽĿ� 0�̿��� ��� ���� true�̰� 0�� false �̴�. 

		cout << "true" << endl;
	}

	else
		cout << "false" << endl;

	bool Boolean; 
	cin >> Boolean; //���ڳ� ���ڿ��� �Է��ϴ� false�� ����Ѵ�. 

	cout << "���� �Է��� �� : " << Boolean << endl;
}