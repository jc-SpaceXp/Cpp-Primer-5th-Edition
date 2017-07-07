// Exercise 6.5: Write a function to return the absolute value of its argument.
#include <iostream>

//calculating ABS (|x|) of a number
// don't think i can do: face (cin >> int x)
int abs(int x) {						
	if (x > 0) {
		x = x; 
	} else if (x < 0) {
	        x = x*(-1); 
	} else {
		x = 0;
	}
	
	return x;
}

int main() {
        int x, y;
	y = -20;
	x = abs(y);
	std::cout << "Absolute value of: " << y << " is " << x << std::endl;
	return 0;
}
