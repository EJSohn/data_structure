#include <iostream>
using std::cout;
using std::endl;

template<class Ta, class Tb>
void iota(int n, Ta value, Tb& a)
{
    for(int i=0; i<n; i++)
    {
        a[i]= value + i;
    }
    
}

template<class T>
void printArray(const T& arr, int length)
{
    cout<<"[";
    for(int i=0; i<length; i++)
    {
        cout<<arr[i];
        cout<<",";
    }
    cout<<"]"<<endl;
}


int main(){
    float a[5];
    int b[5];

    iota(5, 1.2, a);
    iota(5, 3, b);

    printArray(a, 5);
    printArray(b, 5);

    return 0;
}


