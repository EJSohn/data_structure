#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    float a[] = {2.0, 8.12, 2, 21.4, 2.0, 2.0};
    int value = 2;

    cout<<count(a, a+6, value)<<endl;
    return 0;
}

