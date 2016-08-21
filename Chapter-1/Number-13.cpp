#include <iostream>
using namespace std;

template <class T>
T * changeLength1D(T * &x,int oldLength, int newLength)
{
    T *newArray = new T [newLength];
    for( int i=0; i<oldLength; i++)
    {
        newArray[i] = x[i];
    }
    delete [] x;
    return newArray;
}

int main()
{
    int *x = new int [5];
    for (int i=0; i<5; i++)
    {
        x[i] = i;
    }

    try { int *newArray = changeLength1D(x, 5, 10); }
    catch (bad_alloc)
    {
        cerr<< "Colud not create new array" <<endl;
        exit(1);
    }

    return 0;
}


