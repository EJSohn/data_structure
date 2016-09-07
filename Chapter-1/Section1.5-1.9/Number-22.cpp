#include <iostream>
#include <math.h>

using namespace std;

unsigned int AckermannsFunction(unsigned int i, unsigned int j)
{
    if (i<1||j<1) throw "input values should be >=1";
    else if (i==1&&j>=1) return pow(2,j);
    else if (i>=2&&j==1) return AckermannsFunction(i-1, 2);
    else return AckermannsFunction(i-1, AckermannsFunction(i, j-1));
}

int main()
{
    int i, j;
    cout<<"please enter two value"<<endl;
    cout<<"i: ";
    cin>>i;
    cout<<"j: ";
    cin>>j;

    cout<<"result: "<<AckermannsFunction(i, j)<<endl;
    return 0;
}



