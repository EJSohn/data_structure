
Chapter 1 Section1-1.5 Exercises!
===================

 1. ..
 2. Write a template function count that returns the number of occurrences of value in the array a[0:n-1]. 
 3. Write a template function fill that sets a[start:end-1] to value. 
 4. Write a template function inner-product that reuturns sum(i=0)(n-1){a[i]*b[i]}.
 5. Write a template function iota that sets a[i] = value + i, 0<= i < n.
 6. Write a template function is_sorted that returns true iff a[0:n-1] is sorted.
 7. Write a template function mismatch that returns the smallest i, 0<=i < n such that a[i]!=b[i].
 8. ..
 9. ..
 10. Modify Program 1.8 so that it throws an exception of type int. The value of the thrown exception should be 1 if a, b, and c are all less than 0; the value should be 2 if all three equal 0. When neither of these conditions is satisfied, no exception is thrown. Write a main function that uses your modified code; catches the exception if thrown; and outputs a message that depends on the value of the thrown exception.
 11. Do Exercise 2. Your code for the functin should throw an exception of type char* in case n<1.
 12. Write a general version of **make2dArray** whose third parameter is one-dimensional array **rowSize** rather than the integer **numberOfColumns**. Your function should create a two-dimensional array in which row **i** has **row-Size[i]** positions
 13. Write a template function **changeLength1D** to change the length (i.e, number of positions) of a one-dimensional array from **oldLength** to **newLength**. Your function should allocate space for a new one-dimensional array of length **newLength**; copy the first min{oldLength, newLength} elements of the old array into the new one; and free the space allocated to the old array.
 14. Write a function **changeLength2D** that changes the dimensions of a two-dimensional array.

 




