#include <iostream>
#include <typeinfo>

using namespace std;

struct Something {

	int a, b, c, d; //4 x 4 = 16byute 
};

int main()
{
	//int x = 5; 
	////���� ���, ������ ������ �ִ� ����  ��� 
	//cout << "������ ��� �� : " <<x << endl; 

	//cout << "������ ����� �޸� �ּ�(16��) : " <<&x << endl; // & : address of operator 
	//cout << "������ ����� �޸� �ּ�(10)" <<(int)&x << endl; 
	//
	////de-reference operator * 
	//cout <<"�ּҿ� ������ ���� �ִµ� �鿩�ٺ���. : "<< *(&x) << endl;	

	//int x = 10; 

	//�����ʹ� ������ �ּҸ� �����ϴ� ���� 
	//int *ptr_x = &x; 

	//cout << "���� x�� ����Ǿ� �ִ� �� : " << x << endl<<endl;
	//cout << "���� x�� ��ġ�ϴ� �޸� �ּ� : " << &x << endl<<endl;
	//cout << "ptr_x�� ����ִ� ���� x�� ��ġ�ϴ� �޸� �ּ� : " << ptr_x << endl<<endl; 
	//
	////de-referenceing 
	//cout << "ptr_x�� ����ִ� ���� x�� ��ġ�ϴ� �޸� �ּҿ� ����Ǿ� �ִ� �� " << *ptr_x << endl<<endl;

	//double d = 1.0;

	//double *ptr_d = &d; 
	//cout << "���� d�� ����Ǿ� �ִ� �� : " << d << endl << endl;
	//cout << "���� d�� ��ġ�ϴ� �޸� �ּ� : " << &d << endl << endl;
	//cout << "ptr_d�� ����ִ� ���� x�� ��ġ�ϴ� �޸� �ּ� : " << ptr_d << endl << endl;

	////de-referenceing 
	//cout << "ptr_d�� ����ִ� ���� d�� ��ġ�ϴ� �޸� �ּҿ� ����Ǿ� �ִ� �� " << *ptr_d << endl<<endl;

	/*int a = 5;
	double d = 123.0;

	int *ptr_a = &a;
	double *ptr_d = &d;

	cout << typeid(ptr_a).name() << endl; 
	cout << sizeof(a) <<endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&a) << " " << sizeof(ptr_a) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl; */

	/*Something ss;
	Something *ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl; */

	

}

