#include <iostream>
#include "currency.h"

using namespace std;

int main()
{
    currency g, h(plus, 3, 50), i, j;

    g.setValue(minus, 2, 25);
    i.setValue(-6.45);

    j = h.add(g);
    h.output();
    
    return 0;
}

