#include <iostream>
#include "currency.h"

using namespace std;

int main()
{
    currency g, h, j, i;

    // exercise 16-(a)
    g.input();
    cout<<"input currency is:";
    g.output();
    cout<<endl;

    // exercise 16-(b)
    h.setValue(currency::plus, 3, 50);
    cout<<"subtract input currency at 3.50$:";
    j = h.subtract(g);
    j.output();
    cout<<endl;

    // exercise 16-(c)
    cout<<"input currency's 50 per is";
    i = g.percent(0.50);
    i.output();
    cout<<endl;

    // exercise 16-(d)

    currency a, b;

    cout<<"3.5 * input currency is:";
    a = g.multiply(3.5);
    a.output();
    cout<<endl;
    
    return 0;
}

