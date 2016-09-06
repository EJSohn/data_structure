#include <iostream>

using namespace std;

unsigned int Fibonacci(unsigned int n)
{
    // use recursion

    if(n<2) return n;
    else return Fibonacci(n-1)+Fibonacci(n-2);
}

unsigned int FibonacciV2(unsigned int n)
{
    // not use recursion

    // 동적 할당 
    unsigned int* result = new unsigned int[n];
    
    result[0] = 0;
    result[1] = 1;

    for( int i=2; i<n+1; i++ )
    {
        result[i] = result[i-2] + result[i-1];
    }

    return result[n];

}


int main()
{
    unsigned int n;
    cout<<"please enter the number"<<endl;
    cin>>n;

    cout<<"result: [";
    for (int i=0; i<=n; i++) { cout<<Fibonacci(i)<<", "; }
    cout<<"]"<<endl;
    
    cout<<"use non-recursive fibonacci function: "<<endl;
    cout<<FibonacciV2(n)<<endl;

    return 0;
}


