#include <iostream>
#include "currency.h"

using namespace std;

int main()
{
    currency g, h, j, i;

    // exercise 16-(a)
    g.input();
    g.output();

    // exercise 16-(b)
    h.setValue(currency::plus, 3, 50);
    j = h.subtract(g);

    j.output();

    // exercise 16-(c)
    i = g.percent(0.50);
    i.output();
    
    return 0;
}

