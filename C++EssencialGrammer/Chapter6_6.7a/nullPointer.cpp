#include <iostream>
#include <cstddef>
using namespace std;

void doSomthing(double *ptr) {
	
	if (ptr != nullptr) {

		//do something
		cout <<"�Լ� ptr : "<< ptr  << endl;
		cout <<"�Լ� &ptr : "<< &ptr  << endl;
		cout <<"�Լ� *ptr : "<< *ptr << endl<<endl; 

		*ptr = 15; 

		cout << "�Լ� ptr : " << ptr << endl;
		cout << "�Լ� &ptr : " << &ptr << endl;
		cout << "�Լ� *ptr : " << *ptr << endl << endl;
		
		
	}

	else {
		//do nothing with ptr
		cout << "null ptr, do nothing" << endl<<endl; 
	}

}
int main(){

	//double *ptr = 0; //c-style
	//double *ptr = null;
	double *ptr = nullptr; // modern c++

	//doSomthing(ptr);
	//doSomthing(nullptr);

	////���� ptr�� nullptr �̱� ������ �ƹ��͵� ����Ǿ����� �ʴ�. 
	//cout << "ptr�� ����� �ּ� :" << ptr << endl;    //00000000
	//cout << "ptr���� �ּ� : " << &ptr << endl<<endl; //���÷� �޸� �Ҵ� 
	

	double d = 123.0; 
	ptr = &d;

	////doSomthing(d); ������ ������ �ƴϱ� ������ �� ��.
	////�Ű������� ���� �ٷ� de-referencing�� �Ǿ� ���� ���. 
	//doSomthing(&d);
	//doSomthing(ptr);

	////main
	//cout << "d�� �ּ�(&d) : " << &d << endl;
	//cout << "ptr�� ����� d�ּ�(ptr) :" << ptr << endl;
	//cout << "ptr���� �ּ�(&ptr) : " << &ptr << endl;		//���÷� �޸� �Ҵ�
	//cout << "de referencing(*ptr) : " << *ptr << endl;

	//std::nullptr_t nptr; //null �����͸� ����� �� ����. �Ķ���ͷ� nullptr�� ���� �� �ִ� ���� �ִ�. 

	
	
	doSomthing(ptr);

	cout << "m�Լ� ptr : " << ptr << endl;
	cout << "m�Լ� &ptr : " << &ptr << endl;
	cout << "m�Լ� *ptr : " << *ptr << endl << endl;
}

