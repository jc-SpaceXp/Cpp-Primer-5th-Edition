//Exercise 6.3: Write & test your own version of fact  
#include <iostream>

//calculating factorial [!] of a number
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
        y = 6;
	x = fact(y);
	std::cout << "Factorial of " << y << " is : " << x << std::endl;
	return 0;
}
