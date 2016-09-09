#include <iostream>
using namespace std;

void grayCode(unsigned int n)
{
    if ( n<1 ) throw "n should not be negative number";
    if ( n==1 ) cout<<"1 ,";
    if ( n>1 ) 
    {
        grayCode(n-1);
        cout<<n<<" ,";
        grayCode(n-1);
    }
}

int main()
{
    unsigned int n;
    cout<<"please enter the number n"<<endl;
    cin>>n;
    grayCode(n);
    cout<<endl;

    return 0;
}


