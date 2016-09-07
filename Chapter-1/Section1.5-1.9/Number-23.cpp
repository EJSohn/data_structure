#include <iostream>
using namespace std;


// Euclid's algorithm. this is THE fisrt algorithm  
// that use recursion!
unsigned int gcd(unsigned int x, unsigned int y)
{
    if ( y==0 ) return x;
    else return gcd(y, x%y);
}

int main()
{
    unsigned int x, y;
    cout<<"please enter the two number"<<endl;
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;

    cout<<"result: "<<gcd(x,y)<<endl;
    return 0;
}




