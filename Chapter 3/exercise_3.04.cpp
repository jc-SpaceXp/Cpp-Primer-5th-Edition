//Exercise 3.4 via C++ Primer 5th Ed.
// comparing two strings and seeing which one is larger or equal
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1;
	string s2;


	cout << "input string 1: " << endl;
	cin  >> s1;
	cout << "input string 2: " << endl;
	cin  >> s2;

	if (s1 > s2)
		cout << "\nstring 1 is larger than string 2 " << endl;
	else if (s1 < s2)
		cout << "\nstring 2 is larger than string 1" << endl;
	else
		cout << "\nthe two strings you've entered are identical" << endl;

return 0;
}