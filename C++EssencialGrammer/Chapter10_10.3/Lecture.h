#pragma once
#include <string>
#include "Teacher.h"
#include "Student.h"
class Lecture {

private:
	std::string _name;

	//Lecture 인스턴스가 사라질 때 teacher, student인스턴스도 사라진다.
	//이것이 컴포지션 방법의 주된 특징이였다. 
	/*Teacher teacher; 
	std::vector<Student> students; */

	Teacher *teacher;
	std::vector<Student*> students;

public : 
	Lecture(const std::string & name_in) : _name(name_in){}

	~Lecture() {
		//do not delete teacher
		//do not delete students 
	}
	
	/*void assignTeacher(const Teacher &const teacher_input) {
		
		teacher = teacher_input; 
	}*/

	void assignTeacher(Teacher *const teacher_input) {

		teacher = teacher_input;
	}

	/*void registerStudent(const Student &const student_input) {

		students.push_back(student_input);
	}*/

	void registerStudent( Student *const student_input) {

		students.push_back(student_input);
	}

	void study() {

		std::cout << _name << "Study" << std::endl << std::endl;

		//foreach에서 주의할점 중 값을 &로 받지않고 일반 변수로 받으면 값이 업데이트가 되지 않는다. 
		//Note : 'auto element' doesn't work
		/*for (auto & element : students) { 
		
			element.setIntel(element.getIntel() + 1);
		}*/

		//foreach에서 주의할점 중 값을 &로 받지않고 일반 변수로 받으면 값이 업데이트가 되지 않는다. 
		//Note : 'auto element' doesn't work
		//de referencing 또는 element->setIntel로 할 수도 있다. 
		for (auto & element : students) { 

			(*element).setIntel((*element).getIntel() + 1);
		}
	}

	friend std::ostream & operator << (std::ostream &out, const Lecture &lecture) {

		out <<"Lecture name : "<< lecture._name << std::endl;

		/*out << lecture.teacher << std::endl;

		for (auto element : lecture.students) {

			out << element << std::endl; 
		}*/

		out << *lecture.teacher << std::endl;

		for (auto element : lecture.students) {

			out << *element << std::endl;
		}

		return out;
	}

};