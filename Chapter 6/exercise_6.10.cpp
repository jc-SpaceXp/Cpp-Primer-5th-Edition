// Exercise 6.10: Using pointers, write a function to swap the values of two ints. Test the function by calling it and printing the swapped values..
#include <iostream>
using namespace std;

void swap(int *x, int *y) {						
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a, b;
	a = 100;
	b = 105;
	
	cout << "Here are two ints: " << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	
	swap(&a, &b);		//implied that int *x = &a and int *y = &b 
	
	cout << endl << "The values of A, B should change now" << endl;
	cout << "Here are two ints: " << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	return 0;
}
