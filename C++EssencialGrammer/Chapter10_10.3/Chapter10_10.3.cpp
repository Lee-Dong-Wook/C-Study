#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

using namespace std;

int main(){

    Student *std1 = new Student("Jack Jack",0);
	Student *std2 = new Student("Dash", 1);
	Student *std3 = new Student("Violet", 2);

	Teacher *teacher1 = new Teacher("Prof. Hong");
	Teacher *teacher2 = new Teacher("Prof. Good");

	//Composition Relationship
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(teacher1);
	lec1.registerStudent(std1);
	lec1.registerStudent(std2);
	lec1.registerStudent(std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(teacher2);
	lec2.registerStudent(std1);

	//TODO : implement Aggregation Relationship

	//test
	{
		cout << lec1 << endl; 
		cout << lec2 << endl; 

		//event 
		lec2.study(); //�ɷ�ġ ��� 

		cout << lec1 << endl; 
		cout << lec2 << endl; //lec1�� lec2�� jack jack�� ���� ���ε� ���� study�� ���� �ɷ�ġ�� �޶�����? 

		//delete memory
		delete std1;
		delete std2;
		delete std3;

		delete teacher1;
		delete teacher2;
	}
	
}

