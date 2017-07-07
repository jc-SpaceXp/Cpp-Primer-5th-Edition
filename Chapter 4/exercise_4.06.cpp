//Exercise 4.6 C++ Primer 5th Edition
//Write a program to determine whether a int is value is even or odd
#include <iostream>
using namespace std;

int main()
{
	int even = 2;
	int input;
	cout << "Enter A Number: ";
	cin  >> input;
	if (input == 0 || input % even == 0)
		cout << "Your Number Is Even" << endl;
	else 
		cout << "Your Number Is Odd" << endl;
	// do i need {}
	return 0;
}