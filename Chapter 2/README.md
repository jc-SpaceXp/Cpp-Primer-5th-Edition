# Chapter 2: 
# Non-programming Exercises

# Exercise 2.03
> What output will the following code produce?
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;

int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```
 
OUTPUTs (via g++):   
32  
4294967264 (undefined behaviour)  
32  
-32  
0  
0  


# Exercise 2.04
> Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is. 

[Exercise_2.04.cpp](exercise_2.04.cpp)

# Exercise 2.05
> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
> - a) 'a', L'a', "a", L"a"
> - b) 10, 10u, 10L, 10uL, 012, 0xC*
> - c) 3.14, 3.14f, 3.14L*
> - d) 10, 10u, 10., 10e-2

a) 
- 'a' is of type char,   
- L'a' is of type char but L makes modifies it to be a wide/long char  
- "a" is a string literal,  
- L"a" is a wide/long string literal   
  
b) 
- 10   is of type int (decimal)  
- 10u  is of type unsigned int (decimal)  
- 10L  is of type long (long int) (decimal)  
- 10uL is of type unsigned long (unsigned long int) (decimal)   
- 012  is of type octal - starts w/ 0 if 12 type 12?  
- 0xC  is of type hexadecimal  
  
c) 
- 3.14  is of type double (remeber deafult for float)  
- 3.14f is of type float (single precision)  
- 3.14L is of type long double  

d) 
- 10    is of type int (decimal)  
- 10u   is of type unsigned int (decimal)  
- 10.   is of type double  
- 10e-2 is of type double (exponential form)   

# Exercise 2.06
> is there any difference in the two definitions below?
```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```

Yes - 1st line = decimal 2nd is treated as octal (which makes month = 09 invalid, as there is no 9 in octal) however there is no difference in value (for days)

# Exercise 2.07
> What values do these literals represent? What type does each have?
```cpp
a) "Who goes with F\145rgus?\012" 
b) 3.14e1L
c) 1024f
d) 3.14L 
```

Outputs:  
a) "Who goes with Fergus? NEW LINE" - string literal (CALCULATIONS (using ACII TABLE): \145  = e, \012 = new line feed)  
b) 31.4  - long double  
c) error: expects decimal point prior to 'f' suffix    
d) 3.14  - long double  

# Exercise 2.09
> Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.
```cpp
a) std::cin >> int input_value;      
b) int i = { 3.14 };                  
c) double salary = wage = 9999.99;    
d) int i = 3.14;                         
```
a) ILLEGAL - correction as follows:  
```cpp
int input_value = 0; 
std::cin >> input_value; 
```  
b) LEGAL   - truncated to 3 or 3.14 isn't int change to float i.e double i = 3.14;  
c) LEGAL   - only if you declared 'wage' before i.e. double wage;  
d) LEGAL   - truncated to 3  

# Exercise 2.10
> What are the initial values, if any, of each of the following variables?

```cpp
std::string global_str;
int global_int;
int main() {
    int local_int;
    std::string local_str;
}
```

global_str = empty string 
global_int = 0 (defualt initialisation of global )
local_int  = undefined, is un-intilised and is undefined
local_str  = '' empty string is defined by string class 

# Exercise 2.11
> Explain whether each of the following is a declaration or a definition:
```cpp
a) extern int ix = 1024;   
b) int iy;                 
c) extern int iz;          
```

a) is a definition 
b) is a definition 
c) is a declaration

# Exercise 2.12
> Which, if any, of the following names are invalid?
```cpp
a) int double = 3.14;                    
b) int _;                        
c) int catch-22;                      
d) int 1_or_2 = 1;                
e) double Double = 3.14;
```
a) invalid (variable name matches c++ keywoard)
b) valid
c) invalid (due to -)
d) invalid (cant start with a number)
e) valid (but confusing)

# Exercise 2.13
> What is the value of j in the following program?
```cpp
int i = 42;
int main() {
    int i = 100;
    int j = i;
}
```

copy value of `i` into `j` - local variable (100) over-writes global variable (42)
j = 100

# Exercise 2.14
> Is the following program legal? If so, what values are printed?
```cpp  
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
     sum += i;
std::cout << i << " " << sum << std::endl;
```

Yes it's legal, since the for statement isn't a compound one (no need for '{}'), including cout the output would be the sum of 1 to 9 (inclusive) 45 and i - outputing: `100 "" 45` 

# Exercise 2.15 
> Which of the following definitions, if any, are invalid? Why?
```cpp
a) int ival = 1.01;           
b) int &rval1 = 1.01;        
c) int &rval2 = ival;         
d) int &rval3;                
```

a) valid but truncation occurs
b) invalid - can't address of operator with a number (intiliser must be an object)
c) valid if ival is declared/defined
d) invalid - address of what

# Exercise 2.16
> Which, if any, of the following assignments are invalid? If they are valid, explain what they do
```cpp
int i = 0, &r1 = i; double d = 0, &r2 = d;
```
```cpp
a) r2 = 3.14159;        //valid - set d to 3.14159
b) r2 = r1;             //valid - sets r2 to r1 which 
c) i = r2;              //valid - truncation occurrs
d) r1 = d;              //valid - truncation occurs
```

# Exercise 2.17
> What does the following code print?
```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```

Ouputs:  
`10 " " 10` 
i is a refference of r1 and r1 = 10

# Exercise 2.18
> Write code to change the value of a pointer. Write code to change the value to which the pointer points.


```cpp
//code to change the value of a pointer
int main() {
	int x = 0;
	int c = 10;
	int *ptr = &x;
	ptr = c;
	
	return 0;
}
```

```cpp
//code to change the value to which the pointer points
int main()
{
   int x = 0;
   int c = 10;
   int *ptr = &x;
   *ptr = c;
return 0;
}
```


# Exercise 2.19
> Explain the key differences between pointers and references. definition:

The pointer is "points to" any other type, reference is "another name" of an object.  
Key Difference:  
1. a reference is another name of an already existing object. a pointer is an object in its own right.
2. Once initialised, a reference remains bound to its initial object. There is no way to rebind a reference to refer to a different object. A pointer can be assigned and copied.
3. a reference always get the object to which the reference was initially bound. a single pointer can point to several different objects over its lifetime.
4. a reference must be initialised. a pointer need not be initialised at the time it is defined.

# Exercise 2.20
> What does the following program do?
```cpp
int i = 42;
int *p1 = &i; *p1 = *p1 * *p1;
```
Defines `i` as 42, declares a pointer `p1` and initialises it to be a reference of `i`, 
then does de-reference of `p1` (`i` changes value) = value of `p1` squared 
therefore `i = 42 * 42 = 1764`

# Exercise 2.21
> Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
```cpp
int i = 0;
```

```cpp
a) double* dp = &i;    // illegal - pointer must be same type as reference  
b) int *ip = i;        // illegal - cannot initialise a variable of type 'int *' with an lvalue of type 'int'
c) int *p = &i;        // legal - pointer p is a reference to i  
```

# Exercise 2.22
> Assuming `p` is a pointer to int, explain the following code:
```cpp
if (p) // ...
if (*p) // ...
```
 
- Tests whether p is nullptr?
- Tests if the pointer of p is empty (0)

# Exercise 2.23
> Given a pointer `p`, can you determine whether `p` points to a valid object? If so, how? If not, why not?

No, need to see it's declaration and initialisation

# Exercise 2.24
> Why is the initialization of `p` legal but that of `lp` illegal?
```cpp
int i = 42;
void *p = &i;
long *lp = &i;
```

- void returns no value, thus void and any other data type are compatible 
- however the pointer of `lp` has a different type to that of `i` (int)

# Exercise 2.25
> Determine the types and values of each of the following variables.
```cpp
a) int* ip, i, &r = i;       // all of type int, however ip isn't initialised (compiler warning?), i is an empty integer and r is a refference to i  
b) int i, *ip = 0;           // i is of type int but pointer ip is a null pointer
c) int* ip, ip2;             // ip is a null pointer, and ip2 is an empty integer
```

# Exercise 2.26
> Which of the following are legal? For those that are illegal, explain why.
```cpp
a) const int buf;                 // invalid - const must have a value - must be initialised
b) int cnt = 0;                   // valid
c) const int sz = cnt;            // valid if cnt is a const, invalid if not
d) ++cnt; ++sz;                   // invalid can't write to const 
```

# Exercise 2.27
> Which of the following initialisations are legal? Explain why.
```cpp
a) int i = -1, &r = 0;                    // i is legal, r is illegal - null reference is illegal
b) int *const p2 = &i2;                   // legal 
c) const int i = -1, &r = 0;              // i is legal, r is illegal - null reference is illegal
d) const int *const p3 = &i2;             // legal if i2 is defined
e) const int *p1 = &i2;                   // legal if i2 is defined
f) const int &const r2;                   // illegal reference must be initialised, also invalid syntax for r2 const int & implies a const reference.
g) const int i2 = i, &r = i;              // both are is legal if i has been initalised 
```

# Exercise 2.28
> Explain the following definitions. Identify any that are illegal.
```cpp
a) int i, *const cp;                                  // empty integer i, cp illegal - must initialise
b) int *p1, *const p2;                                // pointer p1 of type int (points to int),  p2 illegal - must initialise, 
c) const int ic, &r = ic;                             // illegal - ic must be initialised 
d) const int *const p3;                               // p3 illegal - must initialise
e) const int *p;                                      // pointer p of type const int (points to const int)
```

# Exercise 2.29
> Using the variables in the previous exercise, which of the following assignments are legal? Explain why.

```cpp 
a) i = ic;                                             // legal 
b) p1 = p3;                                            // illegal - diff types of pointers
c) p1 = &ic;                                           // illegal - can't modify const
d) p3 = &ic;                                           // illegal - can't modify const
e) p2 = p1;                                            // illegal - can't modify const
f) ic = *p3;                                           // illegal - can't modify const
```

# Exercise 2.30
> For each of the following declarations indicate whether the object being declared has top-level or low-level const.
```cpp
int i = 0;
const int * p2 = &v2, *const p3 = &i, &r2 = v2;        // p2 is a pointer to the address of v2, p3 is const pointer to address of i,r2 is a refference to v2, 
```

```cpp
const int v2 = 0;         v2 is a top level const
int v1 = v2;              v1 is neither
int *p1 = &v1;            p1 is a low level const
int &r1 = v1;             r1 is neither
const int *p2 = &v2;      p2 is a low level const
const int *const p3 = &i; p3 is a top level (due to *const pointer) and low const (implicit conversion of i to const?)
const int &r2 = v2;       r2 is a low level const
```

# Exercise 2.31
> Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level const applies in each case.
```cpp
a) r1 = v2;                                               // legal - v2 is a top level const
b) p1 = p2;                                               // illegal - p2 is a low level const but p1 isn't
c) p2 = p1;                                               // legal - can convert int* to const int*
d) p1 = p3;                                               // illegal - p3 is a top level and low level const, p1 isn't a low level const 
e) p2 = p3;                                               // p3 is a top level const, p3 isn't copied into p2
```

# Exercise 2.32
> Is the following code legal or not? If not, how might you make it legal?
```cpp
int null = 0, *p = null;
```

illegal pointer - not how to set a null-pointer, how to correctly set a null-pointer:  
```cpp
int null = 0, *p = nullptr;
```

# Exercise 2.33 
> Using the variable definitions from this section, determine what happens in each of these assignments:

```cpp
a = 42;	// set 42 to int a.
b = 42; // set 42 to int b.
c = 42; // set 42 to int c.
d = 42; // 
e = 42; // 
g = 42; // error g is an reference
```

# Exercise 2.34
> Write a program containing the variables and assignments from the previous exercise. 
> Print the variables before and after the assignments to check whether your predictions in the previous exercise were correct. 
> If not, study the examples until you can convince yourself you know what led you to the wrong conclusion.

[Exercise_2.34.cpp](exercise_2.34.cpp)


# Exercise 2.35
> Determine the types deduced in each of the following definitions. Once you’ve figured out the types, write a program to see whether you were correct.

```cpp
const int i = 42;
auto j = i; const auto &k = i; auto *p = &i; const auto j2 = i, &k2 = i;
```

A) 


# Exercise 2.36
> In the following code, determine the type of each variable and the value each variable has when the code finishes:

```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;
```

A) 

# Exercise 2.37
> Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression i = x is int&. Using that knowledge, determine the type and value of each variable in this code:
```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
```

A)

# Exercise 2.39
> Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference.

[Exercise_2.39.cpp](exercise_2.39.cpp)

# Exercise 2.40
> Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference.

[Exercise_2.40.cpp](exercise_2.40.cpp)

# Exercise 2.41
> Use your Sales_data class to rewrite the exercises in § 1.5.1(p. 22), § 1.5.2(p. 24), and § 1.6(p. 25). For now, you should define your Sales_data class in the same file as your main function.
