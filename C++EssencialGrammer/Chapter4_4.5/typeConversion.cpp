#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
 
	int a = 123;

	cout << typeid(123).name() << endl;
	cout << typeid(a).name() << endl;

	int b = 123.0;
	cout << typeid(123).name() << endl;
	cout << typeid(a).name() << endl;

	//numeric promotion
	 float c = 1.0f;
	 double d = c; 
     
	 //numeric conversion
	 double e = 3; 
	 short f = 2; 

	 int i = 30000;
	 char g = i;  

	 cout << static_cast<int>(g) << endl;

	 float x = 3.14f;
	 int y = x;

	 cout <<  y << endl;

	 //unsigned
	 cout << 5u - 10 << endl; //5-10 -> 이상한 수 출력 
	 cout << 5 - 10 << endl;  //-5



	

	
}
