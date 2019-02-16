#include <iostream>

using namespace std;

int main(){
 
	int *ptr = nullptr;
	int **ptrptr = nullptr; //�����Ϳ� ���� ������, ���� ������ int 

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

	////���� ������ 
	//int **matrix = new int*[row];

	//for (int r = 0; r < row; r++) {
	//	matrix[r] = new int[col];
	//}

	////�ʱ�ȭ 
	//for (int r = 0; r < row; r++) {
	//	
	//	for (int c = 0; c < col; c++) {
	//		
	//		matrix[r][c] = s2da[r][c];
	//	}
	//}

	////���
	//for (int r = 0; r < row; r++) {

	//	for (int c = 0; c < col; c++) {

	//		cout << matrix[r][c] << " ";
	//	}
	//	cout << endl; 
	//}

	////���� 
	//for (int r = 0; r < row; r++) {
	//	
	//	delete[] matrix[r];
	//}
	//delete matrix;


	//���������͸� ������� ���� 
	int *matrix = new int[row*col]; 

	//�ʱ�ȭ 
	for (int r = 0; r < row; r++) {

		for (int c = 0; c < col; c++) {

			//1���� �迭�� 2���� �迭ó�� ���η��� ǥ��
			matrix[ c + col * r] = s2da[r][c];
		}
	}
	
	//���
	for (int r = 0; r < row; r++) {

		for (int c = 0; c < col; c++) {

			cout << matrix[c + col * r] << " ";
		}
		cout << endl; 
	}

	delete matrix;
}

