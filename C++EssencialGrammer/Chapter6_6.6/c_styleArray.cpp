
#include <iostream>
#include <cstring>

int main(){
	using namespace std; 

	/*char myString[] = "string"; 

	for (int i = 0; i < 7; ++i) {
		cout <<"문자 : "<< myString[i] << endl;
		cout <<"ASCII" << (int)myString[i] << endl;
	}

	cout << sizeof(myString) << endl;
	cout << sizeof(myString) / sizeof(myString[0]) << endl;*/

	//char cinString[255];

	/*cin >> cinString; 

	cinString[0] = 'A';
	
	cinString[4] = '\0';
	
	cout << cinString << endl; */

	/*cin.getline(cinString,255);

	int ix = 0;
	while (true) {

		if (cinString[ix] == '\0') {
			break; 
		}

		cout << ix << " " << cinString[ix] << " " << (int)cinString[ix] << endl;

		++ix;
	}*/

	//전통적인 c-style  <cstring>에 정의된 함수 사용 
	char source[] = "Copy this";
	char dest[50];
	strcpy_s(dest, source);

	cout << source << endl;
	cout << dest << endl; 

	strcat(dest, source);
	cout << source << endl;
	cout << dest << endl;

	//strcmp는 같으면 0 다르면 -1 
	cout << strcmp(dest,source) << endl;
}

