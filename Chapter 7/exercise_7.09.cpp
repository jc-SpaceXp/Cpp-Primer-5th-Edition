//Exeercise 7.9:  Add operations to read and print Person objects to the code
//you wrote for the Eexercise_7.4.cpp (pg. 260)
#include <iostream>
#include <string>

struct Person {
	std::string GetName() const {return Name;}
	std::string GetAddr() const {return Address;}
	
	std::string Name;
	std::string Address;
};

std::istream &read (std::istream &is, Person &rhs) {
	is >> rhs.Name >> rhs.Address;					// overloading outputstream to handle 2 values, which are returned
	return is;
}

std::ostream &print (std::ostream &os, const Person &rhs) {
	os << rhs.Name << " " << rhs.Address;
	//os << rhs.GetName() << rhs.Address(); performs the same job - as functions return Name & addr
	return os;
}

int main {
	return 0;
}