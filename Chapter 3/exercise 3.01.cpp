//EXERCISE 3.1 via C++ Primer 5th Ed.
// using the 'using' decleration
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int sum = 0, val = 1;
	while (val <= 10)
		{
			sum += val;
			++ val;
		}
	cout << "Sum of 1 to 10 inclusive is " << sum << endl;

	return 0;
}