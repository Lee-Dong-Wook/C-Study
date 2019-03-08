#include <iostream>
using namespace std;

class Cents {

private : 
	int _cents; 

public :
	Cents(int cents = 0) {

		_cents = cents; 
	}

	int getCents() { return _cents; }
	void setCents(int cents) { _cents = cents; }

	operator int() { cout << "cast here" << endl; return _cents; }
};

void printInt(const int &value) {

	cout << value << endl; 
}

class Dollar {
private : 
	int _dollars = 0; 

public : 
	Dollar(const int &input) : _dollars(input){}

	operator Cents() {

		return Cents(_dollars * 100);
	}
};
int main()
{
	//��� ������. �����ε��� �����ڸ� ����ϰ� �ִ�. 
	Cents cent(7);
	int value = (int)cent;
	value = int(cent);
	value = static_cast<int>(cent);

	printInt(cent);

	Dollar dol(2);

	cent = dol;

	printInt(cent);

	return 0; 


}

