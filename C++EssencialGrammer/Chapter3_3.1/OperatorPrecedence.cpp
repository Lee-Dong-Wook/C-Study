#include <iostream>
using namespace std;

int main() {

	int x = 4 + 2 * 3; 

	//*와 /의 우선순위는 같다. 그렇기 때문에 컴파일러에서 결합규칙에 따라 우선순위를 지정한다. 
	//참고 https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B
	int y = 3 * 2 / 4; 

	cout << x << endl;

	cout << y << endl; 
	return 0;
}