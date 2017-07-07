// Exercise 6.12: Rewrite the program from exercise 6.10 to use references instead of pointers to swap the value of two ints.
// Which version do you think would be easier to use and why?
#include <iostream>
using namespace std;

void swap(int &x, int &y) {						
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int a, b;
	a = 100;
	b = 105;
	
	cout << "Here are two ints: " << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	
	swap(a, b);		//implied that int *x = &a and int *y = &b 
	
	cout << endl << "The values of A, B should change now" << endl;
	cout << "Here are two ints: " << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	return 0;
}
