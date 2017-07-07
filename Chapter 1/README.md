# Chapter 1: Answers To Non-programming Exercises

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
> Write a program that uses the multiplication operator (*) to print the product of two numbers.

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
> Compile a program that has incorrectly nested comments.

[Exercise_1.07.cpp](Exercise_1.07.cpp)

# Exercise 1.08
> Indicate which, if any, of the following output statements are legal:

```cpp
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```

legal
legal
legal
illegal

# Exercise 1.09
> Write a program that uses a _while_ to sum the numbers from 50 to 100.

[Exercise_1.09.cpp](Exercise_1.09.cpp)

# Exercise 1.10
> In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a _while_ that prints the numbers from ten down to zero.

[Exercise_1.10.cpp](Exercise_1.10.cpp)

# Exercise 1.11
> Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.

[Exercise_1.11.cpp](Exercise_1.11.cpp)

# Exercise 1.12
> What does the following _for_ loop do? What is the final value of sum?

```cpp
int sum = 0;
for (int i = -100; i <= 100; ++i)
    sum += i;
```

The _for_ loop calculates the sum of -100 to 100, therefore the final value of **sum** equals _zero_

# Exercise 1.13
> Rewrite the exercises from § 1.4.1 (p. 13) using for loops.
