#include <iostream>

int main() {

	using namespace std;

	enum class color {

		red, blue
	};

	enum class fruit {

		banana, apple
	};

	color color = color::red;
	fruit fruit = fruit::banana;

	/*if (color == fruit) {
		cout << "color is fruit?" << endl; 
	}*/

	return 0;
}



