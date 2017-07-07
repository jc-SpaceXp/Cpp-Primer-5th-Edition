//Exercise 3.35 C++ Primer 5th Edition
//Using pointers, write a program to set the elements in an array to zero
#include <iostream>
using namespace std;

int main()
{
	int array[4] = {12, 11, 10, 6};
	int *ptrArray = array;
	*ptrArray = {0, 0, 0, 0}
	cout << array[2] <<endl; 

return 0;
} 

//WRONG