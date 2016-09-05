#include <iostream>

using namespace std;

unsigned int Fibonacci(unsigned int n)
{
    if(n<2) return n;
    else return Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{
    unsigned int n;
    cout<<"please enter the number"<<endl;
    cin>>n;

    cout<<"result: [";
    for (int i=0; i<=n; i++) { cout<<Fibonacci(i)<<", "; }
    cout<<"]"<<endl;
    
    return 0;
}


