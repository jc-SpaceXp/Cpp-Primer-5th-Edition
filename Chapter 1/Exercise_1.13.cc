#include <iostream>

int main()
{	
	int sum, val;

	//re-writing a while loop into:
	//while (val <= 10)
	//	{
	//	 sum += val;
	//	 ++val; 
	//	}
	//std::cout << "Sum of 1 to 10 inclusive " << sum << std::endl;

	// A FOR LOOP
	for (val = 1, sum = 0; val <= 10; ++val)
		{
		 sum += val; //could turn for loop into an empty loop body if placing sum += val in last for section w/ comma 
		}
	std::cout << "Sum of 1 to 10 inclusive " << sum << std::endl;
	return 0; 
}