//Exercise 6.9: Write your own versions of the fact.cc and factMain.cc files [Ex 6.3 file]
// factMain.exe - stores a main function that calls fact

#include <iostream>
#include "Chapter_6.h"

int main () {
	int y;
	y = 6;
	std::cout << "Factorial of " << y << " is : " << fact(y) << std::endl;

	int j;
	std::cout << "Enter a number: ";
	std::cin >> j;
	std::cout << "Factorial of " << j << " is : " << user_fact(j); << std::endl;

	int k = -87
	std::cout << "Absolute Value of: " << k << "is " << abs(k) << std::endl; 

	return 0;
}
