#include <iostream>
using namespace std;

int main() {

	int x = 5;
	int y = -2; 
	int z = x % y; //나머지 연산자 
	
	cout << x / y << endl; 

	cout << float(x) / y << endl;
	cout << x / float(y) << endl; 
	cout << float(x) / float(y) << endl; 
	
	//c++ 11에서 %연산에 대해서 부호가 음수가 있을 경우 나누었을 때 음수인지 양수인지 고민을
	//하는 상황이 올 때는 왼쪽에 있는 연산자 기준으로 부호를 지정한다. 

	int v = x; 
	v += y; // v = v+y; +,-,*,/,% 모두 가능 
	return 0; 
}