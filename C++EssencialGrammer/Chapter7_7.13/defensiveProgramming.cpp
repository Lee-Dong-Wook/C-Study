#include <iostream>

using namespace std; 

int main(){

		////syntax error 문법오류 
		//int x

		////semantic error 의미오류 
		////x가 5보다 클 때 출력인데 조건식에서는 5를 포함한다. 논리 오류 
		//int x;
		//cin >> x;

		//if (x >= 5)
		//cout << "x is greater than 5" << endl; 

		//violated assumption 사용자가 의도와 별개로 사용한다. 
		//hello string 의 길이는 6 하지만 사용자가 ix에 6 넘어서의 숫자를 입력 안하리라고는 보장 못한다. 
		//1024를 입력하면 런타임 에러 발생 
		string hello = "raynor";

		cout << "Input form 0 to" << hello.size() - 1 << " " << endl; 

		while (true) {

			int ix;
			cin >> ix;
			if (ix >= 0 && ix <= hello.size() - 1)
				cout << hello[ix] << endl;

			else
				cout << "plz try agin" << endl;

		}
	


}
