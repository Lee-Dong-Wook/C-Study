#include <iostream>
using namespace std; //�������� �ؼ��ϱ� ���� �ѹ��� ������ �Ѵ�. 

namespace a {

	int my_var = 1; 
	
	void doSomething() {
		
		cout << my_var << endl; 
	}
}

namespace b {

	int my_var = 2; 

	void doSomething() {

		cout << my_var << endl;
	}
}




int main(){
   
	//namespace std::cout;;
	//using std::cout;
    //cout; ��� ������ ����̴�. 

	/*a::my_var;
	a::doSomething();

	b::my_var;
	b::doSomething();*/

	{
		using namespace a;
		doSomething();
	}

	{
		using namespace b;
		doSomething();
	}

	}


