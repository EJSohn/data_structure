#include <iostream>
using std::cout;
using std::endl;

int abc(int a, int b, int c)
{
    if ( a<0 & b<0 & c<0 ) throw 1;
    else if ( a==0 & b==0 & c==0 ) throw 2;
    else return a + b * c;
}

int main()
{
    try { cout<< abc(2,0,4) <<endl; }
    catch (int e)
    {
        if(e==1) cout<<"all parameters are less than 0";
        else if(e==2) cout<<"all parameters are equal 0";
        return 1;
    }

    return 0;
}

