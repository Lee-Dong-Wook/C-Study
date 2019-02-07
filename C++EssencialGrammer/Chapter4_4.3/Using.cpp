#include <iostream>
using namespace std; //불편함을 해소하기 위해 한번에 선언을 한다. 

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
    //cout; 모두 동일한 기능이다. 

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


