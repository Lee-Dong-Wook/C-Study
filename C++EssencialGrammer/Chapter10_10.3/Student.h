#pragma once
#include <iostream>
#include <string>

class Student {

private:
	std::string _name;
	int _intel; //intelligence

	//TODO : more mebers like home, address, salary, age, evaluation, etc.

public:
	Student(const std::string &name_in = "No name", const int &intel_in = 0) : _name(name_in), _intel(intel_in) {}


	void setName(const std::string &name_in) {_name = name_in;}

	void setIntel(const int &intel_in) {_intel = intel_in;}

	std::string getName() {return _name;}
	int getIntel() { return _intel; }

	friend std::ostream & operator << (std::ostream &out, const Student &student) {

		out << student._name << " " << student._intel;
		return out;
	}
};