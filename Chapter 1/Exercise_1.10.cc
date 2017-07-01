#include <iostream>

int main()
{	
	//decrementing and printing the value of x from 10 to 0
	int x = 10;
	while (x >= 0)
		{
		 std::cout << x-- << std::endl;
		 // x-- can include it in above line
		}
	return 0; 
}