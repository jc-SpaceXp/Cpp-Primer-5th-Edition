# Chapter 1 Answers To Non-programming Exercises

# Exercise 1.01
> Review the documentation for your compiler and determine what file naming convention it uses. Compile and run the _main_ program from page 2.

[Exercise_1.01.cpp](Exercise_1.01.cpp)

# Exercise 1.02
> Change the program to return -1. 

[Exercise_1.02.cpp](Exercise_1.02.cpp)

# Exercise 1.03
> Write a program to print "Hello, World" on the standard output.

[Exercise_1.03.cpp](Exercise_1.03.cpp)

# Exercise 1.04
> Write a program that uses the multiplication operator, *, to print the product of two numbers.

[Exercise_1.04.cpp](Exercise_1.04.cpp)

# Exercise 1.05
> We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.

[Exercise_1.05.cpp](Exercise_1.05.cpp)

# Exercise 1.06
> Explain whether the following program fragment is legal.

```cpp
std::cout << "The sum of " << v1;
          << " and " << v2;
		  << " is " << v1 + v2 << std::endl;
```

Program fragment is illegal, if the semi-colons at the end of the first two lines where removed, the statement would then be legal

legal fragment:
```cpp
std::cout << "The sum of " << v1
          << " and " << v2
		  << " is " << v1 + v2 << std::endl;
```

# Exercise 1.07
