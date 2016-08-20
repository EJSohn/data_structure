#include <iostream>
using std::cout;
using std::endl;
using std::bad_alloc;
using std::cerr;

template <class Ta, class Tb>
void make2dArray(Ta ** &x, int numberOfRows, Tb &rowSize)
{//create a two-dimensional array.

    int rs = sizeof(rowSize)/sizeof(rowSize[0]);
    if( numberOfRows!= rs )
        throw "the number of rows is not match";
    
    //create pointers for the rows
    x = new Ta * [numberOfRows];

    // get memory for each row
    for ( int i=0; i<numberOfRows; i++)
        x[i] = new Ta [rowSize[i]];
}

int main()
{
    char **x;
    int r = 5;
    int c[5] = {1,2,3,4,5};

    try { make2dArray(x,r,c); }
    catch ( bad_alloc )
    {
        cerr << "Could not create x" <<endl;
        exit(1);
    }
    catch ( char* e )
    {
        cout<< e <<endl;
        exit(1);
    }
    
    cout<< "allocation is complete." <<endl;
    return 0;
}




