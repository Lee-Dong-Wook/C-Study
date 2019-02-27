#include <iostream>
using namespace std;

class Cents {

private:
	int _cents;

public:
	Cents(int cents) { _cents = cents; }
	int getCents() const { return _cents; }
	int &getCents() { return _cents; }

	Cents operator -() const {

		return Cents(-_cents);
	}

	bool operator !() const {

		return (_cents == 0) ?  true : false;
		
	}
	
		friend std::ostream& operator << (std::ostream &out, const Cents &_cents) {

			out << _cents._cents;

			return out;
	}
};

int main() {

	Cents cents1(6);
	Cents cents2(0);

	cout << cents1 << endl;
	cout << -cents1 << endl; 
	cout << -Cents(10) << endl; 

	//어떤 타입인지 확인하고 싶으면 아래와 같은방법.
	//temp를 확인해보면 bool 형, auto temp = cents1; 으로 바꾸고 확인하면 cents형으로 나옴 
	//auto temp = !cents1;

	cout << !cents1 << " " << !cents2 << endl; 
	

	return 0;
}
