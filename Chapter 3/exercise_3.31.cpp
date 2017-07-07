//Exercise 3.31 C++ Primer 5th Edition 
//Write a program to define an array of ten ints. Give each element the same value as its position in the array.

# include <iostream>
using namespace std;

int main()
{
	int array[10];							//empty initialisation, all values curently set to zero
	int *ptrArray = array;					// same as ptrArray = &array[0], ptrArray points to 0th index (1st element) of array
	int counter = *ptrArray; 				// sets counter to zero
		while (counter != 10)				// true for all elements in array
			{
			*ptrArray = counter;			// de-reference ptrArray to get 1st element in array[0]
			counter++;						// increments counter, so next element in array will equal this value
			ptrArray++;						// increments pointer to advance to next element
			}
return 0;
}