// Exercise 6.17: Write a function to determine whether a string contains any capital letters. Write a function to change a string to all lowercase.
//Do the parameters you used in these functions have the same type? If so, why? If not, why not?
#include <iostream>
#include <string>
#include <cctype>				// includes to-lower and to-upper functions
using namespace std;

/**
auto c --> requires -std-c++11
char swap_case(string &x) {						
	// while loop, read string one char at a time, if within ascii range of capital letter, replace w/ lowercase (A - a = some number)
	// if A - a = some number than, A minus some number will give us a
  	for (auto c : x) {
		tolower(c);
		cout << c;
  	}
}
**/

/**
can't use a char pointer on a string no effective way to do it
may just have to make a c string (a char array) and operate from there 
void make_lowercase(string &k) {

	char *point = k.c_str() 
	  for (*point; *point != '\0'; point++) {
		tolower(*point);
	  }
	cout << k << endl;
}
**/ 

int main() {
    string test ("HeLlO wOrLd");
	cout << test << endl;

	make_lowercase(test);
	//cout << test << endl;
	return 0;
}
