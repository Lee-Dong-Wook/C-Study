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
	
	////�迭�� �ּҰ��� ����
	//cout << (int)array << endl; 

	////�迭 ��
	//cout << array[0] <<" " <<array[1] << endl; 

	//cout << (int)&array[0] <<" "<< (int)&array[1] << endl;

	//
	////de-referencing�� �ϴ� �ε���[0]�� �� 1�� ��� 
	//cout << *array << endl;

	//int *ptr = array;
	//cout <<"ptr " <<(int)ptr << endl; 
	//cout <<"&ptr " << (int)&ptr << endl;
	//cout <<"*ptr " << *ptr << endl;

 //   
	//char name[] = "raynor";
	//cout << name << endl;  //�ּҰ� �ȳ����� raynor ���ڿ� ������ ��� 
	//cout << *name << endl; 
	//cout << (int)&name << endl;
	//cout << (int)&name[0] << endl;
	//cout << (int)&name[1] << endl;


	//cout << sizeof(array) << endl;  //20 �迭��ü�� ũ�� 

	//int *ptr = array; 

	//cout << sizeof(ptr) << endl;  //4 ������ ���� ptr�� ũ�� 
	//	
	//printArray(array);//4��� 

	//cout << "array[0] : " << array[0] << " array[1] : " << array[1] << " array : " << (int)array <<
	//	" &array[0] : " << (int)&array[0] << endl; 

	

}

