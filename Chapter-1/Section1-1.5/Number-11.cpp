#include <iostream>
using std::cout;
using std::endl;

template<class Ta, class Tb>
int count(Ta& a, Tb value)
{
    int arr_len = sizeof(a)/sizeof(a[0]);
    if (arr_len < 1 ) throw "the array is empty";
    int cnt = 0;

    for(int i=0; i<arr_len; i++)
    {
        if( a[i]==value )
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    float a[]= {};
    int value = 2;
    
    try { cout<<count(a, value)<<endl; }
    catch ( char const*  e )
    {
        cout<<e<<endl;
        return 1;
    }

    return 0;
}

