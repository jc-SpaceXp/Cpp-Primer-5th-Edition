//Exercise 2.34 C++ Primer 5th Edition
// Write a program containing the variables and assignments from the previous exercise. Print the variables 
// before and after the assignments to check whether your predictions in the previous exercise were correct. 
// If not, study the examples until you can convince yourself you know ￼￼what led you to the wrong conclusion.

#include <iostream>
using namespace std;

int main() {
	int i = 0, &r = i;										// i is 0 and r is a reference to i (therefore r = i)
	auto a = r;        										// value of r is copied into a - therefore indirectly a is a reference to i 

	cout << "first assignment of i: " << i << endl;			// i = 0
	cout << "first assignment of r: " << r << endl;			// r = 0
	cout << "first assignment of a: " << a << endl;			// a = 0


	const int ci = i, &cr = ci;								// ci = i - converts i to const and sets ci to 0, cr is a reference to ci
	auto b = ci;											// ci is copied into b - b is const due to auto and equals ci which equals 0 (ci = i)
	auto c = cr;											// cr is copied into c - c is const due to auto and equals cr which equals 0 (cr = ci = o)
	auto d = &i;											// d is a reference to i, d is int and d equals 0 (i)
	auto e = &ci;											// e is a reference to ci, e is const int and e equals 0 (ci = i)

	const auto f = ci;										// f is a const int and value of ci is copied into f (0)
	auto &g = ci;											// g is a const int& that is bound to ci

	 a = 42; 												// a = 42 , a affects nothing
	 b = 42; 												// b = 42 , b affects nothing
	 c = 42; 												// c = 42 , c affects nothing
	 *d = 42; 												// changes value of i to 42
	 e = &c;												// 

	return 0;
} 