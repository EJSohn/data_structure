

Chapter 1 Section1-1.5 Exercises!
===================

16 . Extend the class currency of Program 1.13 by adding the following public member functions:

> (a) input() input a currency value from the standard input stream and assign it to the invoking object.
> 
> (b) subtract(x) subtracts the value of the currency object x from that of the invoking object and returns the result. 
> 
> (c) percent(x) returns a currency object whose value is x percent of the value of the invoking object and the number x. which is of type double. 
> 
> (d) devide(x) returns the currency object that results from dividing the invoking object by the number x. which is type double

18 .

> (a) Do Exercise 16 using the implementation of Program 1.22. Overload the operators >>, -, %, *, and /. When overloading >>, declare it as a friend function and do not define a public input function to facilitate the input.
> 
> (b) Replace the two setValue functions by overloading the assignment operator =. An overload of the type operator=(int x) that assigns an integer to an object of type currency should replace the three-parameter setValue function. x represents the sign, dollar amount, and cents rolled into a single integer. An overload of the type operator=(double x) should replace the single-parameter setValue function. 

19 . Write a non-recursive function to compute n!. 

20 . 

> (a) Write a recursive function to compute the Fibonacci number Fn. 
> 
> (c) Write a non-recursive function to compute the Fibonacci number Fn. Your code should compute each Fibonacci number just once.  

21 . Consider the function f, which is defined in Equation 1.4. n is a non-negative integer.

    f(n)
	    if ( n%2==0 ) return n/2; else return f(3n + 1);

> (c) Write a recursive C++ function to compute f(n).
> 
> (d) Use your proof for part (b) to arrive at a non-recursive C++ function to compute f. Your code should have no loops.

22 . [Ackermann's Function] Equation 1.5 defines **Ackermann's function**. In this definition, i and j are integers that are >= 1.

    A(i,j)
	    if ( i==1&&j>=1 ) return 2^j;
	    else if ( i>=2&&j==1 ) return A(i-1, 2);
	    else return A(i-1,A(i,j-1));

> (c) Write a recursive C++ function to compute A(i, j).


23 . [GCD] **The greatest common divisor (GCD)** of two non-negative integers x and y is 0 when exactly one of them is 0. When at least one of x and y is nonzero, their GCD, gcd(x,y), is the greatest integer that evenly divides both. So gcd(0,0) = 0, gcd(10,0) = gcd(0,10) = 10, and gcd(20,30) = 10. Euclid's GCD algorithm is a recursive algorithm that is believed to date back to 375 B.C.; it is perhaps the earliest example of a recursive algorithm. Euclid's algorithm implements the recursive definition given in Equation 1.6.

    gcd(x,y)
	    if ( y==0 ) return x;
	    else  gcd(y, x mod y);

> (c) Write a recursive C++ function to compute gcd(x,y).

24 . Write a recursive template function to determine whether element x is one of the elements in the array a[0:n-1].

25 . [Subset Generation] Write a recursive C++ function to output all subsets of n elements. For example, the subsets of the three-element set {a, b, c} are {} (empty set), {a}, {b}, {c}, {a,b}, {a,c}, {b,c} and {a,b,c}. These subsets may be denoted by the 0/1 vector sequence 000, 100, 010, 001, 110, 101, 011, and 111 respectively.  So it is sufficient that your C++ code output all 0/1 sequences of length n.

26 . [Gray Code] The **Hamming distance** between two vectors is the number of positions in which the vectors differ. 

    g(n)
	    if ( n==1 ) return 1;
	    else return g(n-1),n,g(n-1)

> (c) Write a recursive C++ function to compute g(n).
