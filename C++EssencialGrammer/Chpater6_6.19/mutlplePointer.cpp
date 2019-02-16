#include <iostream>

using namespace std;

int main(){
 
	int *ptr = nullptr;
	int **ptrptr = nullptr; //포인터에 대한 포인터, 원래 변수는 int 

	int value = 5;

	ptr = &value; 
	ptrptr = &ptr; 
	
	cout << " ptr : " << (int)ptr << " *ptr : " << (int)*ptr << " &ptr : " << (int)&ptr << endl;
	cout << " ptrptr : " << (int)ptrptr << " *ptrptr : " << (int)*ptrptr << " &ptrptr : " << (int)&ptrptr << endl;
	cout << " **ptrptr : " << **ptrptr << endl;

	const int row = 3;
	const int col = 5;

	const int s2da[3][5] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	////이중 포인터 
	//int **matrix = new int*[row];

	//for (int r = 0; r < row; r++) {
	//	matrix[r] = new int[col];
	//}

	////초기화 
	//for (int r = 0; r < row; r++) {
	//	
	//	for (int c = 0; c < col; c++) {
	//		
	//		matrix[r][c] = s2da[r][c];
	//	}
	//}

	////출력
	//for (int r = 0; r < row; r++) {

	//	for (int c = 0; c < col; c++) {

	//		cout << matrix[r][c] << " ";
	//	}
	//	cout << endl; 
	//}

	////제거 
	//for (int r = 0; r < row; r++) {
	//	
	//	delete[] matrix[r];
	//}
	//delete matrix;


	//이중포인터를 사용하지 않음 
	int *matrix = new int[row*col]; 

	//초기화 
	for (int r = 0; r < row; r++) {

		for (int c = 0; c < col; c++) {

			//1차원 배열을 2차원 배열처럼 구부려서 표현
			matrix[ c + col * r] = s2da[r][c];
		}
	}
	
	//출력
	for (int r = 0; r < row; r++) {

		for (int c = 0; c < col; c++) {

			cout << matrix[c + col * r] << " ";
		}
		cout << endl; 
	}

	delete matrix;
}

