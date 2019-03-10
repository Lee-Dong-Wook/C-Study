#pragma once
#include <string>
#include "Position2D.h" //position2D가 iostream을 포함하고 있기에 여기서는 할 필요가 없다. 

class Monster{

private:
	std::string _name;
	Position2D _location; 
	//깔끔해졌다. 
	//int _x; //location
	//int _y; 

public : 
	Monster(const std::string name,const Position2D &pos_in) : _name(name), _location(pos_in){}

	void moveTo(const Position2D &pos_target) {

		/*_x = x_target;
		_y = y_target;*/
		_location.set(pos_target);
	}

	friend std::ostream & operator << (std::ostream &out, const Monster &monster) {

		//position2d에서도 << 연산자 오버로딩을 했기 때문에 가능 
		out << monster._name << " " << monster._location << std::endl;
		return out;
	}
};