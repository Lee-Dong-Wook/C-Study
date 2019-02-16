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
	

   //한계는 void pointer의 데이터형이 어떤 것인지 알 수가 없다는 것
	 
	//int형 포인터 타입은 데이터 타입을 알 수 있으며 포인터 연산을 사용가능 하다. 하지만 void pointer는 불가
	// ptr + 1을 한다면 +1을 할 때 몇 byte를 더 해야하는지 알 수 없기 때문, 데이터 형을 모르니까 
	int *ptr_int = &i;
	
	cout << ptr_int << endl;
	cout << ptr_int + 1 << endl;
	
	cout << &f << " " << ptr << endl;

	cout << static_cast<float*>(ptr) << endl;  //float 데이터 메모리 주소 
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

