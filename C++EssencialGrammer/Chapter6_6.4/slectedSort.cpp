#include <iostream>

using namespace std;

	//				value index
 //3 5 2 1 4		  1		3
 //1 5 2 3 4		  2		2
 //1 2 5 3 4		  3		3
 //1 2 3 5 4		  4     4
 //1 2 3 4 5 

void printArray(const int array[], const int length) {

	for (int i = 0; i < length; i++) {

		cout << array[i] << " "; 
	}

	cout << endl;
} 

int main(){
 
	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };

	printArray(array,length);

	for (int startIndex = 0; startIndex < length - 1; ++startIndex) {

		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; currentIndex++) {

			if (array[smallestIndex] > array[currentIndex]) {
				smallestIndex = currentIndex;
			}

			//swap two values in the array 
			// std::swap(array[smallestIndex], array[startIndex]);
			{
				int temp = array[smallestIndex];
				array[smallestIndex] = array[startIndex];
				array[startIndex] = temp;
			}
		}
		printArray(array, length);
	}
}

//void print(const int* array, const int length) {
//	for (int i = 0; i < length; ++i)
//		cout << array[i] << " ";
//	cout << endl;
//}
//
//int main() {
//
//	const int length = 5;
//	int array[length]{ 3,1,2,5,4 };
//	int tmp;
//	for (int i = 0; i < length; ++i) {
//		for (int j = 0; j < i; ++j) {
//			if (array[i] < array[j]) {
//				tmp = array[i];
//				array[i] = array[j];
//				array[j] = tmp;
//				print(array, length);
//			}
//		}
//	}
//	print(array, length);
//	return 0;
//}

