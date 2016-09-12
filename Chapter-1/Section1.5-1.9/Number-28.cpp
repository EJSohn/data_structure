#include <iostream>

// include for STL accumulate, adjacent_difference
// inner_product, partial_sum, iota.
#include <numeric>

using namespace std;

template <class T>
T product(T a[], int n)
{
    T theProduct = 1;
    return accumulate(a, a+n, theProduct, multiplies<T>());
}

int main()
{
    int arr[] = {1,2,3};

    cout<<product(arr, 3)<<endl;
    return 0;
}

