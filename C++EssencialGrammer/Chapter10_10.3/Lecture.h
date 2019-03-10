#pragma once
#include <string>
#include "Teacher.h"
#include "Student.h"
class Lecture {

private:
	std::string _name;

	//Lecture �ν��Ͻ��� ����� �� teacher, student�ν��Ͻ��� �������.
	//�̰��� �������� ����� �ֵ� Ư¡�̿���. 
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

		//foreach���� �������� �� ���� &�� �����ʰ� �Ϲ� ������ ������ ���� ������Ʈ�� ���� �ʴ´�. 
		//Note : 'auto element' doesn't work
		/*for (auto & element : students) { 
		
			element.setIntel(element.getIntel() + 1);
		}*/

		//foreach���� �������� �� ���� &�� �����ʰ� �Ϲ� ������ ������ ���� ������Ʈ�� ���� �ʴ´�. 
		//Note : 'auto element' doesn't work
		//de referencing �Ǵ� element->setIntel�� �� ���� �ִ�. 
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