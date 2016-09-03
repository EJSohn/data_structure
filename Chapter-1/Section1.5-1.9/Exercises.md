

Chapter 1 Section1-1.5 Exercises!
===================

(16) Extend the class currency of Program 1.13 by adding the following public member functions:

> (a) input() input a currency value from the standard input stream and assign it to the invoking object.

> (b) subtract(x) subtracts the value of the currency object x from that of the invoking object and returns the result.

> (c) percent(x) returns a currency object whose value is x percent of the value of the invoking object and the number x. which is of type double.
> devide(x) returns the currency object that results from dividing the invoking object by the number x. which is type double

(18) 

> (a) Do Exercise 16 using the implementation of Program 1.22. Overload the operators >>, -, %, *, and /. When overloading >>, declare it as a friend function and do not define a public input function to facilitate the input.

> (b) Replace the two setValue functions by overloading the assignment operator =. An overload of the type operator=(int x) that assigns an integer to an object of type currency should replace the three-parameter setValue function. x represents the sign, dollar amount, and cents rolled into a single integer. An overload of the type operator=(double x) should replace the single-parameter setValue function. 





