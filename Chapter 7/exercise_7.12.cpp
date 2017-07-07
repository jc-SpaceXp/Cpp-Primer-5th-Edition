//Exeercise 7.11: Move the definition of the Sales_data constructor that takes an istream into the body of the Sales_data class.
#include <iostream>
#include <string>


// prototypes
struct Sales_data;
std::istream &read (std::istream &is, Sales_data &item);

struct Sales_data {
	Sales_data() = default;
	Sales_data(const std::string &no, unsigned u, double p)
	: bookNo(no) 
	, units_sold(u)
	, revenue(p*u)
	{};
	Sales_data(std::istream &is) {read(is, *this)};
	
	
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data &);
	
	//unchanged members
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
	os << item.isbn() << " " << item.units_so1ld << " " << item.revenue;
	return os;	
};


int main {
	// does it have to been constructed in the order they apear?? Looks like it 
	Sales_data d1;
	Sales_data d2 ("0-201-78345-X", 5, 2.5);
	Sales_data d3 (std::cin);
	
	return 0;
}