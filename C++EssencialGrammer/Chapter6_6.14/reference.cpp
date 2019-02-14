#include <iostream>

using namespace std;

//void doSomething(int &n) {
//
//	n = 10;
//	cout << "In do something : " << n << endl; 
//	cout << "&n : " << &n << endl; 
//}

//void printElements (int (&arr)[5]){
//
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}

//struct Somthing {
//
//	int v1;
//	float v2;
//};
//
//struct Other {
//
//	Somthing st; 
//};


int main(){

	int value = 5;
	int *const ptr = &value; 
	int &ref = value;

	cout << *ptr << endl; 
	cout << ref << endl; 

	*ptr = 10;
	cout << *ptr << endl;
	ref = 100;
	cout << ref << endl;

	cout << *ptr << endl;
	cout << ref << endl;
	
	/*Other ot;
	int &v = ot.st.v1; 
	v = 1; 
*/
  
	/*const int length = 5;

	int arr[length] = { 1,2,3,4,5 };

	printElements(arr);
*/

	/*int n = 5; 

	cout << n << endl;
	cout << "&n : " << &n << endl;

	doSomething(n);

	cout << n << endl;*/

	//int value = 5;

	////pointer
	//int *ptr = nullptr;
	//ptr = &value; 

 //   //reference
	////내부적으로 ref가 value와 같은 메모리를 사용하는 것처럼 작동한다,
	//int &ref = value; 

	//cout << " value :  " << value << endl;
	//cout << " &value : " << &value << endl << endl;

	//cout << " ptr : " << ptr<< endl;
	//cout << " &ptr :" << &ptr << endl;
	//cout << " *ptr : " << *ptr << endl<<endl;

	//cout << " ref :  " << ref << endl;
	//cout << " &ref : " << &ref << endl<<endl;

	//cout << "ref에 10을 대입함. value의 값이 변경 됨" << endl; 
	//ref = 10; 

	//cout << " value :  " << value << endl;
	//cout << " &value : " << &value << endl << endl;

	//cout << " ptr : " << ptr << endl;
	//cout << " &ptr :" << &ptr << endl;
	//cout << " *ptr : " << *ptr << endl << endl;

	//cout << " ref :  " << ref << endl;
	//cout << " &ref : " << &ref << endl;

	/*int x = 5;
	int &ref = x; */

	/*const int y = 8; 
	const int &ref = y; */


	/*int value1 = 5;
	int value2 = 10;

	int &ref1 = value1;
	cout << ref1 << endl;

	ref1 = value2; 

	cout << ref1 << endl; */

	

}


