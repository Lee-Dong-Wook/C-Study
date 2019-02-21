#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date {
 
	int _month;
	int _day;
	int _year;

public : 
	void setMonth(const int& month) {_month	= month;} //set
	void setDay(const int &day) {_day = day;}
	void setYear(const int &year) {_year = year;}

	const int &getMonth() {return _month;} //get 
	const int &getDay() {return _day;}
	const int &getYear() {return _year;}

	void copyFrom(const Date &original) {

		_month	= original._month;
		_day	= original._day;
		_year	= original._year;
	}
};

int main(){

	Date today; // = {8, 4, 2019}

	today.setMonth(8);
	today.setDay(4);
	today.setYear(2019);

	today.getMonth();
	today.getDay();
	today.getYear();

	cout << today.getMonth() << endl;
	cout << today.getDay() << endl;
	cout << today.getYear() << endl;	

	Date copy;
	copy.copyFrom(today);
}
