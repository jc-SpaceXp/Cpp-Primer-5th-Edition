//Exercise 6.9: Write your own versions of the fact.cc and factMain.cc files [Ex 6.3 file]  
// fact.cc - definition of our fact function
#include <iostream>
#include "Chapter_6.h"

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

// Exercise 6.5
// calculating ABS (|x|) of a number
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
