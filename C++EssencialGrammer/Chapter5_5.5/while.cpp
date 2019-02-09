#include <iostream>
using namespace std; 

int main(){

	/*int count = 0;

	while (true)
	{
		count++;
		cout << count << endl;
	
		if (count >= 10) break;
	}

	cout << "out" << endl;*/

	/*unsigned int count = 10;

	while (count >= 0)
	{
		if (count == 0) cout << "zero";

		else cout << count << " ";
		
		count--;
	}*/

	/*int outer_num = 1;

	while (outer_num <= 5) {

		int inter_num = 1;
		while (inter_num <= outer_num) {
			cout << inter_num;
			inter_num++;
		}
		cout << endl; 
		outer_num++;
	}*/

	
	
	int limit = 1;

	while (limit > 0 && limit <= 5) {
		
		
		int print = 5;

		while (print >= limit) {
			
			cout << print << " ";
			print--; 
		}	

		limit++;
		cout << endl;
	}
}


