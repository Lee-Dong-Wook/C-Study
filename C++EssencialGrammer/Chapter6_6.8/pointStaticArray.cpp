#include <iostream>

using namespace std;

struct myStruct {

	int array[5] = { 1,2,3,4,5 };	
};

//void printArray(int array[]) {
//
//	cout << sizeof(array) << endl; //4byte
//
//	*array = 100;
//}

void doSomething(myStruct *ms) {

	cout << sizeof((*ms).array) << endl; 
}

int main(){

	myStruct ms;
	
	cout << ms.array[0] << " " << ms.array[1] << endl;
	cout << sizeof(ms.array) << endl;

	doSomething(&ms);
	
	//int array[5] = { 1,2,3,4,5 };
	
	////배열의 주소값이 나옴
	//cout << (int)array << endl; 

	////배열 값
	//cout << array[0] <<" " <<array[1] << endl; 

	//cout << (int)&array[0] <<" "<< (int)&array[1] << endl;

	//
	////de-referencing을 하니 인덱스[0]의 값 1이 출력 
	//cout << *array << endl;

	//int *ptr = array;
	//cout <<"ptr " <<(int)ptr << endl; 
	//cout <<"&ptr " << (int)&ptr << endl;
	//cout <<"*ptr " << *ptr << endl;

 //   
	//char name[] = "raynor";
	//cout << name << endl;  //주소가 안나오고 raynor 문자열 통으로 출력 
	//cout << *name << endl; 
	//cout << (int)&name << endl;
	//cout << (int)&name[0] << endl;
	//cout << (int)&name[1] << endl;


	//cout << sizeof(array) << endl;  //20 배열자체의 크기 

	//int *ptr = array; 

	//cout << sizeof(ptr) << endl;  //4 포인터 변수 ptr의 크기 
	//	
	//printArray(array);//4출력 

	//cout << "array[0] : " << array[0] << " array[1] : " << array[1] << " array : " << (int)array <<
	//	" &array[0] : " << (int)&array[0] << endl; 

	

}

