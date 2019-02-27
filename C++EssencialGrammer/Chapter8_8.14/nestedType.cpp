#include <iostream>

class Fruit {

public : 
	enum class FruitType {

		Apple, Banana, Cherry,
	};

private:
	FruitType _type;

public : 
	Fruit(FruitType type) : _type(type) {}

	FruitType getType() { return _type; }
};

int main(){

	Fruit apple(Fruit::FruitType::Apple);

	if (apple.getType == Fruit::FruitType::Apple) {

		std::cout << "apple" << std::endl;
	}
	return 0; 

}

