//Exercise 3.31 C++ Primer 5th Edition 
//Copy the array you defined in the previous exercise into
//another array. Rewrite your program to use vectors.

# include <iostream>
#include <vector>
using namespace std;

int main()
{
	int array[10];
	for (int i = 0; i != 10; i++) array[i] = i;			// no need for {} as it isn't a compound statement thus can be truncated to one line

	int copy[10];
	for (int c = 0; c != 0; c++) copy[c] = c;           //or copy[c] = array[i]

	//vectors
	vector<int> vARR(10);
	for (int v = 0; v != 10; v++) vARR[v] = array[v];
return 0;
}