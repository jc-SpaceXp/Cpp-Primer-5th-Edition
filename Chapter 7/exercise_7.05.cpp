//Exeercise 7.5: Provide operations in your Person class to return the name and address.
// Should these functions be const? Explain your choice.
#include <iostream>
#include <string>

struct Person {
	std::string GetName() const {return Name;}
	std::string GetAddr() const {return Address;}
	
	std::string Name;
	std::string Address;
};


// The member function 'GetName' and 'GetAddr' should be 'const', because
// they don't change the object.

int main {
	return 0;
}


