//EXERCISE 3.2 via C++ Primer 5th Ed.
//reading the standard input a line at a time
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{	
	string line;
	cout << "Reading user input, to stop enter 0" << endl;

	while (1)
		{	
			getline(cin, line);
			if (line == "0")
				break;
		};	
	
return 0;
}