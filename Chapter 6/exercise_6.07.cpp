// Exercise 6.7: Write a function that returns 0 when it is first called and then generates numbers in sequence each time it is called again.
#include <iostream>

int call() {						
	static int count_calls;	// default initilisation = 0; hence 0 when first called, value isn't destroyed once compiler moves past function (into main)
	return count_calls++;
}

int main() {
  	// i = number of numbers printed
	std::cout << "Here's a number sequence: " << std::endl;
  	for (int i = 0; i != 10; i++) {	
		std::cout << call(); 
  	}
	std::cout << std::endl;
	return 0;
}

// to improve add a random number generator to call() and return that
