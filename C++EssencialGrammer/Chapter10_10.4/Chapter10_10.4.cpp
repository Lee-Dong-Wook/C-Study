#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Doctor; //forward declaration 

class Patient{

private : 
	string _name;
	vector<Doctor*> _doctors;

public :
	Patient(string name_in) : _name(name_in){}

	void addDoctor(Doctor *new_doctor) {

		_doctors.push_back(new_doctor);
	}

	void meetDoctor();

	friend class Doctor;
};

class Doctor {

private : 
	string _name; 
	vector<Patient*> _patients;

public : 
	Doctor(string name_in) : _name(name_in) {}

	void addPatient(Patient *new_patient) {

		_patients.push_back(new_patient);
	}

	void meetPatient() {

		for (auto &ele : _patients) {

			cout << "Meet Patients : " << ele->_name << endl;
		}
	}

	friend class Patient; 
};

void Patient::meetDoctor() {

	for (auto &ele : _doctors) {

		cout << "Meet Doctor : " << ele->_name << endl;
	}
}

int main()
{
	Patient *p1 = new Patient("Jack");
	Patient *p2 = new Patient("Dash");
	Patient *p3 = new Patient("Violet");

	Doctor *d1 = new Doctor("Dr. K");
	Doctor *d2 = new Doctor("Dr. L");

	//상호적이다.
	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	//patients meets doctor
	p1->meetDoctor();

	//doctors meets patient
	d1->meetPatient();

	//delete
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;
}



