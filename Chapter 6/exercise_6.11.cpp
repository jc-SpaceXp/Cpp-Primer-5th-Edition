// Exercise 6.11: Write and test your own version of reset which takes a reference. 
#include <iostream>
using namespace std;

void reset(int &k) {						
  	k = 0;
}

int main() {
  	int a;
	a = 105;
	cout << "Here is one int: " << endl;
	cout << "A: " << a << endl;
	
	reset(a);		//implied that int &k = a   
	
	cout << endl << "The value of A should change now" << endl;
	cout << "A: " << a << endl;

	return 0;
}
