#include <iostream>
#include <array>
#include <tuple>

using namespace std; 

//����� ���� �ڷ���
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
//	//�������� �ּҸ� ��ȯ�ϰ� �ȴ�. 
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

//std:array<int, 100> my_array; //�޸𸮰� �����ִ� ��Ȳ���� �Ű������� �����ؼ� ��elment�� ���۷����� �����Ѵ�. 
//	
//	my_array[30] = 10; 
//	
//	cout << my_array[30] << endl;
//
//	get(my_array, 30) = 1024; //��ġ lvalue�� �����ΰ� ó�� �Ǿ������. my_array[30]�� ���� ������ �Ǿ������. 
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