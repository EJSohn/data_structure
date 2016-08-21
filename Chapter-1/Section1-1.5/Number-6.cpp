#include <iostream>
using std::cout;
using std::endl;

template<class T>
bool is_sorted(const T& a)
{
    int array_length = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<array_length-1; i++)
    {
        if(a[i]>a[i+1])
        {
            return false;
        }

    }

    return true;
}

int main(){

    int array_one[] = {2, 100, 74, 4, 50};
    float array_two[] = {1.0, 6.7, 4.5, 5.2, 2.2};

    cout<<is_sorted(array_one)<<endl;
    cout<<is_sorted(array_two)<<endl;

    return 0;
}

