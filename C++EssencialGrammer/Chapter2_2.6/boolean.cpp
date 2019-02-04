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

	if (1) {  //조건문에서는 조건식에 0이외의 모든 수는 true이고 0은 false 이다. 

		cout << "true" << endl;
	}

	else
		cout << "false" << endl;

	bool Boolean; 
	cin >> Boolean; //문자나 문자열을 입력하니 false로 출력한다. 

	cout << "내가 입력한 것 : " << Boolean << endl;
}