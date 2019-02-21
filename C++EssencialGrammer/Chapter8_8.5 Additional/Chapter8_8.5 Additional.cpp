#include <iostream>
#include <string>

using namespace std;
 
class Student
{
private:
	int		m_id;
	string	m_name;

public:
	Student(const string &name_in)
		: Student(0, name_in)
	{
		cout << "Upper constructor\n";
	}
	Student(const int &id_in, const string &name_in)
		: m_id(id_in), m_name(name_in)
	{
		cout << "Lower constructor\n";
	}
	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student st1("jack jack");
	st1.print();

	Student st2(1, "back back");
	st2.print();
	return 0;
}

