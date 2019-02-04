#include <iostream>
using namespace std; 

int main() {

	char c1 = 65;
	char c2 = 'A';

	//A A 65 65 
	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl << endl;
	
	//c - style casting(강제 타입변환)
	cout << (char)65 << endl; 
	cout << (int)'A' << endl;
	cout << endl;

	//c++ - style casting (강제 타입변환)
	//65를 char로 바꾸는 것이 아닌 아스키 코드표에서 65에 해당 된 문자를 출력한다.
	cout << char(65) << endl; 
	cout << int('A') << endl;
	cout << endl;
	
	//(기본타입간 타입변환하기 전에 있어 컴파일러에게 문제가 없는지 확인 후 캐스팅)
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl << endl;

	char ch = 97;
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl << endl;

	char ch2 = 65;
	
	cin >> ch2; 

	cout << ch2 << " " << static_cast<int>(ch2) << endl << endl;
 
	cout << sizeof(char) << endl;

	//모든 문자를 표현할 수 없기 때문에 캐스팅을 해준다
	cout << (int)numeric_limits<char>::max() << endl;
	cout << (int)numeric_limits<char>::lowest() << endl<< endl;

	cout << (int)numeric_limits<unsigned char>::max() << endl;
	cout << (int)numeric_limits<unsigned char>::lowest() << endl << endl;

	// \n는 단순 줄바꿈, endl는 cout 버퍼에있는 모든 문자를 출력하라, 비워라.
	// 비슷한 기능으로 std::flush가 있는데 줄바꿈을 하지 않고 버퍼를 비우는 역할을 한다. 
	cout << int('\n') << endl;
	cout << int('\t') << endl;
	cout << int('\a') << endl;

	//따옴표를 출력하기 위해서는 \" 를 해야만 출력할 수 있다.
	cout << "\"안녕하세요\"" << endl; 

	//그외 데이터 형
	wchar_t c;  //윈도우 플랫폼 용 
	char32_t c1; //아스키코드 외의 유니코드를 포함 할 수 있음. 4byte형 char 
	
}