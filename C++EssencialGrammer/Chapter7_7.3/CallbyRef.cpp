#include <iostream>
#include <cmath> //sin(), cos()  
#include <vector>

using namespace std;

typedef int* pint; 

//void addOne(int &y) {
//
//	y = y + 1;
//
//	cout << "IN addOne" << endl;
//	cout << " value : " << y << " address : " << &y << endl << endl;
//}

//void getSinCos(const double &degrees, double &sin_out, double &cos_out) {
//
//	static const double pi = 3.141592; 
//
//	const double radians = degrees * pi / 180.0;
//
//
//	sin_out = std::sin(radians);
//	cos_out = std::cos(radians); 
//
//}

//void foo(int *&ptr)
//void foo(pint &ptr) { 
//
//	cout <<" ptr :  "<< ptr <<"  &ptr :  "<<&ptr<< endl;
//}

void printElement(const vector<int> &arr) {

}

int main(){

	/*int x = 5; 

	cout << " value : " << x << " address : " << &x << endl<<endl; 

	addOne(x);

	cout << " value : " << x << " address : " << &x << endl << endl;*/

	/*double sin = 0.0;
	double cos = 0.0;

	getSinCos(30.0,sin,cos);

	cout << "sin value : " << sin <<" "<<"cos value : "<< cos << endl; */


	//foo(6);

	/*int x = 5; 
	pint ptr = &x;

	foo(ptr);

	cout << " m_ptr : " << ptr << " &m_ptr : " << &ptr << endl;*/

	//int arr[] = { 1,2,3,4 };
	vector<int> arr = { 1,2,3,4 }; 
	printElement(arr);
}


