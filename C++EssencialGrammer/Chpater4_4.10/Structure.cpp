#include <iostream>
#include <string>

using namespace std;

struct Person {
	
	double height = 177.0;
	float weight = 70.0f;
	int age = 25;
	string name = "Raynor";
	
	void print() {

		cout << height << " " << weight << " " << age << " " << name << endl << endl;
	}
};

struct Employee { //직원 한명에게 필요한 데이터용량 = 2+ 4+ 8 = 14byte

	short	id;		//2byte
	int		age;	//4byte
	double	wage;	//8byte
};

int main() {

	Person me;

	cout << me.name << endl; 

	cout << sizeof(Employee) << endl; //16이 출력 
	//컴퓨터가 데이터를 깔끔하게 정리할 때 2byte는 조금 처리가 힘듬. 그래서 2byte 뒤에 2byte를 공백으로 처리를함
	//직원 한명에게 필요한 데이터용량 = 2+ (공백2)+ 4+ 8 = 16byte => padding 
	
	return 0; 
}