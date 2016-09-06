#include <iostream>

using namespace std;

long evenOdd(long n)
{
    // use recursion
    if(n%2==0) return n/2;
    else return evenOdd(3*n+1);
}

long evenOddV2(long n)
{
    // not use recursion
    if(n%2==0) return n/2;
    else return (3*n+1)/2;
}

int main()
{
    long num;
    cout<<"please enter the number"<<endl;
    cin>>num;

    cout<<"use recursion: "<<evenOdd(num)<<endl;
    cout<<"not use recursion: "<<evenOddV2(num)<<endl;

    return 0;
}




