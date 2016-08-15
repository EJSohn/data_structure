#include <iostream>
using std::cout;
using std::endl;

template<class Ta, class Tb>
int count(Ta& a, Tb value)
{
    int arr_len = sizeof(a)/sizeof(a[0]);
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
    float a[] = {2.0, 4.12, 5.98, 21.4, 2.0, 2.0};
    int value = 2;

    cout<<count(a, value)<<endl;
    return 0;
}

