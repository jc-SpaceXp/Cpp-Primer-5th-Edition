//Exercise 6.4: Write a function that interacts with the user, asking for a number and generating the factorial of that number.
//Call this function from main.  
#include <iostream>

//calculating factorial [!] of a number via user input
int fact(int x) {
        int calc;
	calc = 1;

	// using 1TBS/OTBS (1 true brace style) indent style
	if (x == 0) {
		calc = 1;

	} else if (x > 0) {
		while (x > 0) {
			calc *= x;
			x--;
		}
	} else if (x < 0) {
		while (x < 0) {
			calc *= x;
			x++;
		}
	}
	return calc;

}

int main () {
        int x, y;

	std::cout << "Enter a number: ";
	std::cin >> y;

	x = fact(y);
	std::cout << "Factorial of " << y << " is : " << x << std::endl;

	return 0;
}
