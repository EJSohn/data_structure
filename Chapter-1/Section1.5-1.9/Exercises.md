

Chapter 1 Section1-1.5 Exercises!
===================

16 . Extend the class currency of Program 1.13 by adding the following public member functions:

> (a) input() input a currency value from the standard input stream and assign it to the invoking object.

> (b) subtract(x) subtracts the value of the currency object x from that of the invoking object and returns the result.

> (c) percent(x) returns a currency object whose value is x percent of the value of the invoking object and the number x. which is of type double.
> devide(x) returns the currency object that results from dividing the invoking object by the number x. which is type double

18 .

> (a) Do Exercise 16 using the implementation of Program 1.22. Overload the operators >>, -, %, *, and /. When overloading >>, declare it as a friend function and do not define a public input function to facilitate the input.

> (b) Replace the two setValue functions by overloading the assignment operator =. An overload of the type operator=(int x) that assigns an integer to an object of type currency should replace the three-parameter setValue function. x represents the sign, dollar amount, and cents rolled into a single integer. An overload of the type operator=(double x) should replace the single-parameter setValue function. 

19 . Write a non-recursive function to compute n!. 

20 . 

> (a) Write a recursive function to compute the Fibonacci number Fn. 

> (b) Show that your code for part (a) computes the same Fi more than once when it invoked to compute Fn for any n > 2.

> (c) Write a non-recursive function to compute the Fibonacci number Fn. Your code should compute each Fibonacci number just once.  

21 . Consider the function f, which is defined in Equation 1.4. n is a non-negative integer.

    if ( n%2==0 ) f(n) = n/2; else f(n) = f(3n + 1);

> (c) Write a recursive C++ function to compute f(n).

> (d) Use your proof for part (b) to arrive at a non-recursive C++ function to compute f. Your code should have no loops.
