#include <iostream>
using namespace std;

template <class T>
T ** changeLength2D(T ** &x,int oldLength, int newLength, int numberOfColumns)
{
    T ** newArray = new T * [newLength];
    for( int i=0; i<oldLength; i++)
    {
        // int numberOfColumns = sizeof(x[0])/sizeof(T); 
        // this not working. why? x, x[0]'s value are 8 and never change.

        newArray[i] = new T [numberOfColumns]; 
        newArray[i] = x[i];  
        delete [] x[i];
    }

    return newArray;
}

int main()
{
    int numberOfColumns = 8;
    int** x = new int*[5];
    for (int i=0; i<5; i++)
    {
        x[i] = new int[numberOfColumns];
        for( int a=0; a<numberOfColumns; a++)
        {
            x[i][a] = a;
        }
    }
    try 
    { 
        int ** newArray = changeLength2D(x, 5, 10, numberOfColumns); 
        for(int i=0; i<10; i++)
        {
            for(int a=0; a<8; a++)
            {
                //cout<<"newArray["<<i<<"]["<<a<<"] ="<<newArray[i][a]<<endl;
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


