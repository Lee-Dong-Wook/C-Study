#include <iostream>
#include <string>

enum Color { //user - defined data type 

	BLACK,RED,BLUE,GREEN
}; 

int main(){
   
	using namespace std;

	Color paint		= BLACK; 
	Color apple		= RED;
	Color car		= BLUE;
	Color cow		= GREEN;
	Color my_color;

	cout << paint << " " << BLACK << endl; //0 0 출력
	cout << apple << " " << RED << endl;   //1 1 
	cout << car << " " << BLUE << endl;    //2 2
	cout << cow << " " << GREEN << endl;   //3 3

	//int color_id = BLACK;
	//
	//cout << color_id << endl; 

	//Color my_color = color_id;

	int in_number;

	cin >> in_number;

	if (in_number == static_cast<Color>(0)) {

		my_color = static_cast<Color>(0);
		cout << my_color << endl;
	}

	string str_input;

	getline(cin, str_input);

	//권장하지 않음 
	if (str_input == "BLACK") {

		my_color = static_cast<Color>(0);
		cout << my_color << endl;
	}
	
}


