#include <iostream>
#include <typeinfo>

using namespace std;

struct Something {

	int a, b, c, d; //4 x 4 = 16byute 
};

int main()
{
	//int x = 5; 
	////변수 사용, 변수가 가지고 있는 값을  출력 
	//cout << "변수에 담긴 값 : " <<x << endl; 

	//cout << "변수가 저장된 메모리 주소(16진) : " <<&x << endl; // & : address of operator 
	//cout << "변수가 저장된 메모리 주소(10)" <<(int)&x << endl; 
	//
	////de-reference operator * 
	//cout <<"주소에 실제로 뭐가 있는데 들여다보자. : "<< *(&x) << endl;	

	//int x = 10; 

	//포인터는 변수의 주소를 저장하는 변수 
	//int *ptr_x = &x; 

	//cout << "변수 x에 저장되어 있는 값 : " << x << endl<<endl;
	//cout << "변수 x가 위치하는 메모리 주소 : " << &x << endl<<endl;
	//cout << "ptr_x가 담고있는 변수 x가 위치하는 메모리 주소 : " << ptr_x << endl<<endl; 
	//
	////de-referenceing 
	//cout << "ptr_x가 담고있는 변수 x가 위치하는 메모리 주소에 저장되어 있는 값 " << *ptr_x << endl<<endl;

	//double d = 1.0;

	//double *ptr_d = &d; 
	//cout << "변수 d에 저장되어 있는 값 : " << d << endl << endl;
	//cout << "변수 d가 위치하는 메모리 주소 : " << &d << endl << endl;
	//cout << "ptr_d가 담고있는 변수 x가 위치하는 메모리 주소 : " << ptr_d << endl << endl;

	////de-referenceing 
	//cout << "ptr_d가 담고있는 변수 d가 위치하는 메모리 주소에 저장되어 있는 값 " << *ptr_d << endl<<endl;

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

