#include <iostream>

using namespace std;

int main(){
     
	const int num_rows = 3; 
	const int num_columns = 5;

	for (int row = 0; row < num_rows; ++row) {
		
		for (int col = 0; col < num_columns; ++col) {

			cout << '[' << row << ']' << '[' << col << ']' << '\t';	
		}
		cout << endl;
	}
	cout << endl;

	//row-major <-> column-major
	int array[num_rows][num_columns] = { {1,2,3,4,5}, {6,7,8,9,10},{11,12,13,14,15} };

	for (int row = 0; row < num_rows; ++row) {

		for (int col = 0; col < num_columns; ++col) {

			cout << array[row][col] << '\t';
			cout << (int)&array[row][col] <<"  ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}


int array[row][col];

i

