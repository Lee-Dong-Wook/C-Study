
#include <iostream>
using namespace std;

int sum(int a, int b) {

	int result = a + b;

	return result;
}

int main()
{
	std::cout << "�ȳ��ϼ���" << endl;
	cout << "�ȳ��ϼ���\n";
	cout << "abc" << "\t" << "bcd" << endl;
	cout << "abcd" << "\t" << "ef" << endl;
	cout << "\a";

	cout << sum(1, 2) << endl;
	cout << sum(3, 4) << endl;

	int x, y;
	cout << "���� �Է��ϼ���";
	cin >> x >> y;

	cout << sum(x, y);
}
