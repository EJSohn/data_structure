#include <iostream>
using namespace std;

template <class T>
T ** changeLength2D(T ** &x,int oldLength, int newLength)
{
    T ** newArray = new T * [newLength];
    for( int i=0; i<oldLength; i++)
    {
        int numberOfColumns = sizeof(x[i])/sizeof(x[i][0]);
        newArray[i] = new T [numberOfColumns];
        newArray[i] = x[i];
        delete [] x[i];
    }

    return newArray;
}

int main()
{
    int** x = new int*[5];
    for (int i=0; i<5; i++)
    {
        x[i] = new int[8];
        for( int a=0; a<8; a++)
        {
            x[i][a] = a;
        }
    }

    try 
    { 
        int ** newArray = changeLength2D(x, 5, 10); 
        for(int i=0; i<10; i++)
        {
            for(int a=0; a<8; a++)
            {
                cout<<"newArray["<<i<<"]["<<a<<"] ="<<newArray[i][a]<<endl;
            }
        } 
    }
    catch (bad_alloc)
    {
        cerr<< "Colud not create new array" <<endl;
        exit(1);
    }

    return 0;
}


