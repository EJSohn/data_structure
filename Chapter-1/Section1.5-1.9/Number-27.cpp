#include <iostream>
using namespace std;

template <class T>
T sum(T a[], int n)
{
    T theSum = 0;
    return accumulate(a, a+n, theSum);
}

int main()
{
    int arr[] = {1,2,3};

    cout<<sum(arr, 3)<<endl;
    return 0;
}

