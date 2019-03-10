#pragma once
#include <string>
#include "Position2D.h" //position2D�� iostream�� �����ϰ� �ֱ⿡ ���⼭�� �� �ʿ䰡 ����. 

class Monster{

private:
	std::string _name;
	Position2D _location; 
	//���������. 
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

		//position2d������ << ������ �����ε��� �߱� ������ ���� 
		out << monster._name << " " << monster._location << std::endl;
		return out;
	}
};