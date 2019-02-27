#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

class Cents {

private:
	int _cents;

public:
	Cents(int cents = 0) { _cents = cents; }
	int getCents() const { return _cents; }
	int &getCents() { return _cents; }

	friend std::ostream& operator << (std::ostream &out, const Cents &_cents) {

		out << _cents._cents;

		return out;
	}

	friend bool operator ==(const Cents &c1, const Cents &c2) {

		return c1._cents == c2._cents;
	}

	friend bool operator !=(const Cents &c1, const Cents &c2) {
		
		return c1._cents != c2._cents;
	}

	//std::sort()�� �����ϴµ��� ������ ������ ���� ������ ��� �ǹ̷� �����ؾ��Ѵ�. 
	friend bool operator < (const Cents &c1, const Cents &c2) {

		return c1._cents < c2._cents;
	}
};

int main() {

	Cents cents1(6);
	Cents cents2(0);

	if (cents1 == cents2) {

		cout << "Equal" << endl; 
	}
	else cout << "Different" << endl;

	if (cents1 != cents2) {

		cout << "Different" << endl;
	}
	else cout << "Equal" << endl;


	vector<Cents>arr(20);

	for (unsigned int i = 0; i <20; i++) 
		arr[i].getCents() = i;
	
	std::random_device rd;
	std::mt19937 g(rd());

	//c++ 17������ random_shuffle�� �����. shuffle�� ��� 
	std::shuffle(arr.begin(), arr.end(), g);

	for (auto &e : arr)
		cout << e << " ";
	cout << endl; 

	std::sort(begin(arr),end(arr));

	for (auto &e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}
