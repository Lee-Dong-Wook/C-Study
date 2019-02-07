#include <iostream>
#include <bitset>
using namespace std;

int main(){
    
	// << left shift
	// >> right shift
	// ~(NOT), &(AND), |(OR), ^(XOR)조건연산자에는 없지만 비트연산자에는 있다.

	unsigned int a = 1; 
	unsigned int b = 4;
	
	//a,b가 내부적으로 어떻게 저장되는지 확인가능하다. 
	cout << "a : "<< bitset<8>(a) << endl; //0001
	cout << "b : " << bitset<8>(b) << endl << endl; //0100

	//left shift operator  
	unsigned int c = 5;
	unsigned int d = c << 1; 
	cout <<"c : " << bitset<8>(c) <<" 10진수 : " << c << endl; //0101 5
	cout <<"d : "<< bitset<8>(d) << " 10진수 : " << d << endl << endl; //1010 10

	unsigned int e = c << 2; 
	cout << "c : " << bitset<8>(c) << " 10진수 : " << c << endl; //0101 5
	cout << "d : " << bitset<8>(e) << " 10진수 : " << e << endl << endl; //10100 20

	//right shift operator 
	unsigned int f = 1024; 
	
	cout << bitset<16>(f) << " 10진수 : "  << f <<  endl;            //1024
	cout << bitset<16>(f >> 1) << " 10진수 : " <<  (f >> 1) << endl; // 512
	cout << bitset<16>(f >> 2) << " 10진수 : " <<  (f >> 2) << endl; // 256
	cout << bitset<16>(f >> 3) << " 10진수 : " <<  (f >> 3) << endl; // 128
	cout << bitset<16>(f >> 4) << " 10진수 : " <<  (f >> 4) << endl<<endl; //  64 
	
	//bitwise not 
	cout << bitset<16>(f) << " 10진수 : " << f << endl;     //0000010000000000 10진수 : 1024
	cout << bitset<16>(~f) << " 10진수 : " << (~f) << endl << endl; //1111101111111111 10진수 : 4294966271
	
	unsigned int g = 0b1100; //12
	unsigned int h = 0b0110; //6 

	cout << g << " " << h << endl << endl;
	cout << bitset<4>(g&h) << endl; //AND
	cout << bitset<4>(g|h) << endl; //OR
	cout << bitset<4>(g^h) << endl; //XOR

	return 0;
}

