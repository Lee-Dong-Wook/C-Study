#include <iostream>
//#include <cstdint>

int main() {

	using namespace std;

	int16_t i(5); //�ش� �÷������� 2byte �����ͷ� �ٲ� 
	int8_t myint = 65; //1byte�� ���� 

	//int8�̶� �������� ���� ���������� ���δ� char������ ��ü�� �Ǿ��ִ�.  

	cout << myint << endl;

	int_fast8_t fi(5); //������ �߿��� 8bit�߿��� ���� ó���� ���� ��.
	int_least64_t fl(5); // ��� 8byte�� ������ ������ Ÿ��. 

	return 0; 
}