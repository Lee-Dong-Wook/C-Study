#include <iostream>

using namespace std;

enum Type {
	INT,FLOAT,CHAR
};

int main()
{
	int i = 5; 
	float f = 3.0;
	char c = 'a';

	void *ptr = nullptr;

	ptr = &c;
	ptr = &i;
	ptr = &f;
	

   //�Ѱ�� void pointer�� ���������� � ������ �� ���� ���ٴ� ��
	 
	//int�� ������ Ÿ���� ������ Ÿ���� �� �� ������ ������ ������ ��밡�� �ϴ�. ������ void pointer�� �Ұ�
	// ptr + 1�� �Ѵٸ� +1�� �� �� �� byte�� �� �ؾ��ϴ��� �� �� ���� ����, ������ ���� �𸣴ϱ� 
	int *ptr_int = &i;
	
	cout << ptr_int << endl;
	cout << ptr_int + 1 << endl;
	
	cout << &f << " " << ptr << endl;

	cout << static_cast<float*>(ptr) << endl;  //float ������ �޸� �ּ� 
	cout << *static_cast<float*>(ptr) << endl; //de-referencing 

	Type type = FLOAT; 

	if (type == FLOAT) {
		cout << static_cast<float*>(ptr) << endl;   
		cout << *static_cast<float*>(ptr) << endl; 
	}

	else if (type == INT) {
		cout << static_cast<int*>(ptr) << endl;
		cout << *static_cast<int*>(ptr) << endl;
	}
}

