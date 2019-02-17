#include <iostream>

using namespace std;

//typedef int* pint; 

//void foo(const double &degrees, double *sin_out, double cos_out) {
//
//	cout << " ptr : " <<(int)ptr << "		&ptr : " << (int)&ptr << "		*ptr : "<< (int)*ptr<< endl;
//	
//	*ptr = 100;
//}

//void foo(const double &degrees, double *sin_out, double *cos_out) {
//	
//	*sin_out = 1.0;
//	*cos_out = 5.0;
//	
//}

void foo(int *arr, int length) {

	for (int i = 0; i < length; i++) {

		cout << arr[i] << endl; 
	}
	arr[0] = 1.0; 

}

int main(){

	//int value = 5; 

	//pint ptr = &value;
	//cout << "value : "<<(int)value<< "		&value : " << (int)&value << endl;

	////foo(&value); 
	////foo(5); //리터럴은 안됨 주소만 가능 하다 d
	//foo(ptr);
	//foo(&value);

	//cout << " m_ptr : " << (int)ptr << "	 m_&ptr : " << (int)&ptr << "	 m_*ptr : " << (int)*ptr << endl;
	
	/*double sin = 0.0; 
	double cos = 0.0;

	cout << "sin : " << sin << " cos : " << cos <<endl;
   
	foo(30,&sin,&cos);
	cout << "sin : " << sin << " cos : " << cos << endl;*/
}


