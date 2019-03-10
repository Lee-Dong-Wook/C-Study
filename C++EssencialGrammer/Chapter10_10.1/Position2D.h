#pragma once
#include <iostream>

class Position2D {

private : 
	int _x;
	int _y;

public : 
	Position2D(const int &x_in, const int &y_in) : _x(x_in), _y(y_in) {}

	//TODO: overload operator =
	void set(const Position2D &pos_target) {

		set(pos_target._x, pos_target._y);
	}
	void set(const int &x_target, const int &y_target) {

		_x = x_target;
		_y = y_target; 
	}

	//monster 클래스에서 별도로 출력하는 것을 옮겨 왔다. 

	friend std::ostream & operator << (std::ostream &out, const Position2D &position2d) {

		out <<  position2d._x << " " << position2d._y << std::endl;
		return out;
	}

};