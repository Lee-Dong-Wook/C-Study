#include <iostream>
#include <array>
#include <tuple>

using namespace std; 

//사용자 정의 자료형
std::tuple<int, double> getTuple() {
	
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a,d);
}

//return by address 
//int *getValue(int x) {
//
//	int value = x * 2; 
//	return &value; 
//}

//return by reference 
//int &getValue(int x) {
//
//	int value = x * 2; 
//	return value; 
//}

//int &get(std::array<int, 100> &my_array, int ix) {
//
//	return my_array[ix]; 
//}

//int *allocateMemory(int size) {
//
//	//사이즈의 주소를 반환하게 된다. 
//	return new int[size];
//}

//struct S {
//
//	int a, b, c, d; 
//};
//
//S getStruct() {
//
//	S my_s = { 1,2,3,4 };
//}

int main(){

	/*int *value = getValue(3);

	cout << value << endl;*/

	/*int *array = allocateMemory(1024);

	delete[] array; 

	*/
	//int &value = getValue(3);
	//cout << value << endl;
	//cout << value << endl;

//std:array<int, 100> my_array; //메모리가 잡혀있는 상황에서 매개변수로 복사해서 한elment의 레퍼런스를 리턴한다. 
//	
//	my_array[30] = 10; 
//	
//	cout << my_array[30] << endl;
//
//	get(my_array, 30) = 1024; //마치 lvalue가 변수인거 처럼 되어버린다. my_array[30]와 같은 역할이 되어버린다. 
//
//	cout << my_array[30] << endl; 
//

	/*S my_s = getStruct(); 
	my_s.b;*/

	std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl; //a
	cout << std::get<1>(my_tp) << endl; //b

	auto[a, d] = getTuple();
	cout << a << endl;
	cout << d << endl; 
	return 0;
}