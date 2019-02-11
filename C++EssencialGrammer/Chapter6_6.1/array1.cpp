#include <iostream>


struct Rectangle {

	int length;
	int width; 
};

enum alphabat {

	A,			//0
	B,			//1
	C,			//2
	Num_alphabat //3 
};

int main()
{
	using namespace std;

	int one_student_score; 
	int student_scores[5];

	cout << sizeof(one_student_score) << endl;
	cout << sizeof(student_scores) << endl;

	one_student_score = 9; 

	student_scores[0] = 1; //first element 
	student_scores[1] = 2;
	student_scores[2] = 3;
	student_scores[3] = 4;
	student_scores[4] = 5; 

	float sum = 0.0f;
	float avg = 0.0f;

	for (int i = 0; i < 5; i++) {
		
		cout << student_scores[i] << endl;

		sum += student_scores[i];
	}

	avg = sum / 6.0f;

	cout << "avg : " << avg << endl; 

	cout << sizeof(Rectangle) << endl; 

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl; 
	
	rect_arr[0].length = 1;
	rect_arr[1].length = 2;
	rect_arr[0].width = 1;
	rect_arr[0].width = 1;
	
    //인덱스를 쓰지않고 .을 찍고 멤버변수에 입력을 하니 포인터로 접근을 해버린다. 
	//rect_arr->length; 
	//rect_arr->width;
	
	int my_arr[5] = { 1,2,3, };
	// int my_arr[5]{ 1,2,3, };
	for (int i = 0; i < 5; i++) {
		cout << my_arr[i] << endl;
	}

	int alpha_arr[5] = { 1,2,3 };

	cout << alpha_arr[A] << endl;
	cout << alpha_arr[B] << endl;
	cout << alpha_arr[C] << endl;

	//실제 갯수와 개수와 맞기 때문에 유용하다. 
	int students_scores[Num_alphabat];

	students_scores[A] = 0;
	students_scores[B] = 1;
	students_scores[C] = 2;

 
	/*int num = 0;
	cin >> num;*/

	const int num = 5; 

	int num_arr[num];

	return 0; 
}

