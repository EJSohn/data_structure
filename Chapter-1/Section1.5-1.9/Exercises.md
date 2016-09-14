

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

27 . Write C++ code for the three-parameter template function accumulate .

28 . Write C++ code for the four-parameter template function accumulate.

29 . Write C++ code for the template function copy.

30 . Modify Program 1.35 so that it outputs all permutations of distinct elements. Do this by sorting the list elements into ascending order prior to generating the permutations. To sort, use the STL algorithm sort(start, end)

31 . Modify Program 1.35 so that it outputs all permutations of distinct elements . Do this by first using next_permutation to generate permutations that are lexically larger than the initial permutation and then using the STL algorithm prev_permutation to generate permutations that are lexically smaller than the initial permutation.

32 . Modify Program 1.35 so that it outputs all permutations of distinct elements. Do this by using the fact that when next_permutation returns the value false, the sequence[start, end) is the lexically smallest sequence. Hence, subsequent invocations of next_permutation will get you the remaining ( if any ) permutations you need.

33 . Do Exercise 2 using the STL  algorithm count, which has the syntax 

    cout(start, end, value)

34 . Do Exercise 3 using the STL algorithm fill, which has the syntax

    fill(start, end, value)

35 . Do Exercise 4 using the STL algorithm inner_product, which has the syntax

    inner_product(start1, end1, start2, initialValue)
36 . Do Exercise 5 using the STL algorithm iota, which has the syntax

    iota(start, end, value)
37 . Do Exercise 6 using the STL algorithm is_sorted, which has the syntax

    is_sorted(start, end)
38 . Do Exercise 7 using the STL algorithm mismatch, which has the syntax

    mismatch(start1, end1, start2)

39 . Write C++ code for STL template function count of Exercise 33.

40 . Write C++ code for STL template function fill of Exercise 34.

41 . Write C++ code for STL template function inner_product of Exercise 35.

42 . Write C++ code for STL template function iota of Exercise 36.

43 . Write C++ code for STL template function is_sorted of Exercise 37.

44 . Write C++ code for STL template function mismatch of Exercise 38.
