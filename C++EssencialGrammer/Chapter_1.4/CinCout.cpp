
#include <iostream>
using namespace std;

int sum(int a, int b) {

	int result = a + b;

	return result;
}

int main()
{
	std::cout << "안녕하세요" << endl;
	cout << "안녕하세요\n";
	cout << "abc" << "\t" << "bcd" << endl;
	cout << "abcd" << "\t" << "ef" << endl;
	cout << "\a";

	cout << sum(1, 2) << endl;
	cout << sum(3, 4) << endl;

	int x, y;
	cout << "수를 입력하세요";
	cin >> x >> y;

	cout << sum(x, y);
}
