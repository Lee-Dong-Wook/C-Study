#include <iostream>
using namespace std;

int main() {

	int x = 5;
	int y = -2; 
	int z = x % y; //������ ������ 
	
	cout << x / y << endl; 

	cout << float(x) / y << endl;
	cout << x / float(y) << endl; 
	cout << float(x) / float(y) << endl; 
	
	//c++ 11���� %���꿡 ���ؼ� ��ȣ�� ������ ���� ��� �������� �� �������� ������� �����
	//�ϴ� ��Ȳ�� �� ���� ���ʿ� �ִ� ������ �������� ��ȣ�� �����Ѵ�. 

	int v = x; 
	v += y; // v = v+y; +,-,*,/,% ��� ���� 
	return 0; 
}