// Exercise 6.8: Write a header file named that contains declarations for the functions you wrote for the exercises in 6.1 (Ex 6.3, 6.4, 6.5)
#include <iostream>


// Exercise 6.3: Write & test your own version of fact
// calculating factorial [!] of a number
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

// Exercise 6.4: Write a function that interacts with the user, asking for a number and generating the factorial of that number
// calculating factorial [!] of a number via user input
int user_fact(int x) {
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

// calculating ABS (|x|) of a number
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
