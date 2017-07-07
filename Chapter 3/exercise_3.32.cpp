//Exercise 3.31 C++ Primer 5th Edition 
//Copy the array you defined in the previous exercise into
//another array. Rewrite your program to use vectors.

# include <iostream>
using namespace std;

int main()
{
	int array[10];							//empty initialisation, all values curently set to zero
	int *ptrArray = array;
	int counter = *ptrArray; 				// sets counter to zero

	int copy[10];
	int *ptrCopy = copy;
	int counter2 = *ptrCopy; 				// sets counter to zero

		while (counter != 10 && counter2 != 10)				// true for all elements in array
			{
			*ptrArray = counter;			// de-reference ptrArray to get 1st element in array (0)
			 counter++;					    // increments counter, so next element in array will equal this value
			 ptrArray++;					// increments pointer to advance to next element

			//copying values from array[i] to copy[i]
			*ptrCopy = counter2;
			ptrCopy++;				     	// increments pointer to advance to next element
			counter2++;					    // increments counter, so next element in array will equal this value
			}
return 0;
}

//using pointers are a lot longer in terms of code, see v2 for more concise code