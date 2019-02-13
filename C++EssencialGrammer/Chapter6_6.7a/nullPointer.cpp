#include <iostream>
#include <cstddef>
using namespace std;

void doSomthing(double *ptr) {
	
	if (ptr != nullptr) {

		//do something
		cout <<"함수 ptr : "<< ptr  << endl;
		cout <<"함수 &ptr : "<< &ptr  << endl;
		cout <<"함수 *ptr : "<< *ptr << endl<<endl; 

		*ptr = 15; 

		cout << "함수 ptr : " << ptr << endl;
		cout << "함수 &ptr : " << &ptr << endl;
		cout << "함수 *ptr : " << *ptr << endl << endl;
		
		
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

	////현재 ptr은 nullptr 이기 때문에 아무것도 저장되어있지 않다. 
	//cout << "ptr에 저장된 주소 :" << ptr << endl;    //00000000
	//cout << "ptr변수 주소 : " << &ptr << endl<<endl; //수시로 메모리 할당 
	

	double d = 123.0; 
	ptr = &d;

	////doSomthing(d); 포인터 변수가 아니기 때문에 안 됨.
	////매개변수로 들어가자 바로 de-referencing이 되어 값이 출력. 
	//doSomthing(&d);
	//doSomthing(ptr);

	////main
	//cout << "d의 주소(&d) : " << &d << endl;
	//cout << "ptr에 저장된 d주소(ptr) :" << ptr << endl;
	//cout << "ptr변수 주소(&ptr) : " << &ptr << endl;		//수시로 메모리 할당
	//cout << "de referencing(*ptr) : " << *ptr << endl;

	//std::nullptr_t nptr; //null 포인터만 사용할 수 있음. 파라미터로 nullptr만 받을 수 있는 떄가 있다. 

	
	
	doSomthing(ptr);

	cout << "m함수 ptr : " << ptr << endl;
	cout << "m함수 &ptr : " << &ptr << endl;
	cout << "m함수 *ptr : " << *ptr << endl << endl;
}

