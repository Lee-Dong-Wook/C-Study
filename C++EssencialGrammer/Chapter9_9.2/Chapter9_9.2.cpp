#include <iostream>
#include <fstream>
using namespace std;

class Point {

private:
	double _x, _y, _z;

public :
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: _x(x), _y(y), _z(z) {}

	double getX() { return _x; }
	double getY() { return _y; }
	double getZ() { return _z; }

	friend std::ostream& operator << (std::ostream &out, const Point &point) {

		out << point._x << " " << point._y << " " << point._z;

		return out;
	}

	friend std::istream& operator >> (std::istream &in, Point &point);
};

 std::istream& operator >> (std::istream &in, Point &point) {

	in >> point._x >> point._y >> point._z; 

	return in;
}

int main(){

	ofstream of("out.txt");

	Point p1(1.0, 2.0, 3.0),p2(4.0,5.0,6.0);

	cout << p1 << " " << p2 << " " << endl; 
	of << p1 << " " << p2 << " " << endl;

	of.close();

	Point p3, p4;

	cin >> p3 >> p4; 
	cout << p3 << " " << p4 << " " << endl;
}

