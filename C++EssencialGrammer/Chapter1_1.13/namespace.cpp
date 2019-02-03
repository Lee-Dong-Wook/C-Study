#include <iostream>

namespace mySpace1 {

	namespace mySpace2 {
		
		void DoNothing() {
			cout << "do nothing";
		}
	}
	int DoSomething(int a, int b) {
		return a + b;
	}
}

using namespace std;
using namespace mySpace1::mySpace2;

int main() {
	
	DoNothing();

	return 0; 
}