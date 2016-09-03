#include <iostream>
#include "currencyOverload.h"

using namespace std;

int main()
{
    currency g, h(currency::plus, 3, 50), i, j, k;

    g.setValue(currency::minus, 2, 25);
    i.setValue(-6.45);

    j = h + g;
    cout << h <<" + "<<g<<" = "<<j<<endl;

    // exercise 18(b)
    k = g - i;
    cout << g <<" - "<<i<<" = "<<k<<endl;

    // exercise 18-(a)
    currency a;
    cin>>a;
    cout<<a<<endl;
    return 0;
}

