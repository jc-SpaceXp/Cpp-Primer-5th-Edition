//Exeercise 7.6: Define your own versions of the add, read, and print functions.
// Appears this is just copy the functions via the book, not much else can be done
#include <iostream>
#include <string>

struct Sales_data {
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data &);

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};


Sales_data &Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
	Sales_data sum = lhs;  // Use default copy constructor
	sum.combine(rhs);
	return sum;
}

std::istream &read (std::istream &is, Sales_data &item) {
	double price;				//def int = 0.0f
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;	
};

std::ostream &print (std::ostream &os, const Sales_data &item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue;
	return os;	
};



// The member function 'GetName' and 'GetAddr' should be 'const', because
// they don't change the object.

int main {
	return 0;
}


