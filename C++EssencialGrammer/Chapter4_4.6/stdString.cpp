#include <iostream>
#include <string>
#include <limits>
int main(){
    
	using namespace std;

	/*cout << "Hello, world" << endl; 

	const string my_hello = "hello, world";
	cout << my_hello << endl; 

	const char my_strs[] = "hello, world";
	cout << my_strs << endl;

	string my_ID = "123"; 
	cout << my_ID << endl << endl;*/

	/*string name;
	cout << "Your name? : ";
	cin >> name; 

	string age;
	cout << "Your age? : ";
	cin >> age;

	cout << "이름 : " << name << " 나이 : " << age << endl << endl;

	string name;
	cout << "Your name? : ";
	getline(cin, name);

	string age;
	cout << "Your age? : ";
	getline(cin, age);

	cout << "이름 : " << name << " 나이 : " << age << endl << endl;*/
	
	int age;
	cout << "Your age? : ";
	cin >> age;

	//cin.ignore(32767, '\n');
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string name;
	cout << "Your name? : ";
	getline(cin, name);

	cout << name << " " << age << endl;

	string a = "hello";
	string b = " world"; 
	string c = a + b; 

	cout << c << endl; 

	cout << c.length() << endl; 

	

	
}
