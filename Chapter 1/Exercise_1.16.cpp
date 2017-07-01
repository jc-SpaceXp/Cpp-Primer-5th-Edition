#include <iostream>

int main() {
	int sum = 0, value;
	std::cout << "Enter a series of numbers: ";
	for (value = 0; std::cin >> value; sum += value);
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}