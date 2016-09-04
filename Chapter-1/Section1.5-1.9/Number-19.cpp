#include <iostream>
using namespace std;

double factorial(int n)
{
    // this is factorial function
    // that use non-recursive way.
    double result = 1;
    while( n>1 ){ result *= n;
                  n -= 1; }
    return result;
}

int main()
{
    int num;
    
    cout<<"please enter the number to compute"<<endl;
    cin>>num;

    cout<<"result: "<<factorial(num)<<endl;
    return 0;
}

