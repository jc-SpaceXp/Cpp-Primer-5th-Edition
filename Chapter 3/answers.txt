Exercise 3.7

Q) What would happen if you define the loop control variable in the previous exercise as type char? 
Predict the results and then change your program to use a char to see if you were right.

A)


Exercise 3.30

Q) Identify the indexing errors in the following code

constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
      ia[ix] = ix;

A) will go to ia[10] due to pre-increment, which is the non-existent 11th element - causes undefined behaviour

Exercise 3.31
######SEEE####
exercise_3.31.cpp

Exercise 3.32
######SEEE####
exercise_3.32.cpp
exercise_3.32_V2.cpp



Exercise 3.33 

Q) What would happen if we did not initialize the scores array
in the program on page 116?

A)


Exercise 3.34

Q) Given that p1 and p2 point to elements in the same array,
what does the following code do? Are there values of p1 or p2 that make
this code illegal?
p1 += p2 - p1;

A) same as p1 = p2, code seems legal just mean p2 is copied into p1 but they
   both point to the same array so makes no difference

   from github: 
   we assume p1 and p2 point to an array arr. so p1 = &arr[0]; and p2 = &arr[0].
   p2 - p1 is the distance of arr[0] to arr[0], and must be zero. so p1 += 0; can not change the p1's point.
   p1 += p2 - p1; same as p1 = p2;. If p2 and p1 are legal, this code always legal.


Exercise 3.35
######SEEE####
exercise_3.35.cpp

Exercise 3.36   PAGE 174
######SEEE####
exercise_3.36.cpp


Exercise 3.37

Q) What does the following program do?

const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
const char *cp = ca;
while (*cp) {
    cout << *cp << endl;
    ++cp;
}

A) since ca[] isn't a null terminated sequence therefore within the while loop undefined behaviour will occur as it expects a '\0'

Exercise 3.38  
Q) In this section, we noted that it was not only illegal but
meaningless to try to add two pointers. Why would adding two pointers be meaningless?

A) a pointer points to a specific memeory address adding two different pointers means adding two different locations of
	memory 


Exercise 3.39
######SEEE####
exercise_3.39.cpp


Exercise 3.41
######SEEE####
exercise_3.41.cpp

Exercise 3.42
######SEEE####
exercise_3.42.cpp

