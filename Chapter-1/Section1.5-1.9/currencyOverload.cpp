#include <iostream>
#include "currencyOverload.h"
using namespace std;

currency currency::operator+(const currency& x) const
{
    currency result;
    result.amount = amount + x.amount;
    return result;
}

void currency::ouput(ostream& out) const
{
    long theAmount = amount;
    if ( theAmount < 0 ) { out<< "-";
                           theAmount = -theAmount;}
    long dollars = theAmount / 100;
    out<<"$"<<dollars<<".";
    int cents = theAmount - dollars * 100;
    if (cents < 10) out << "0";
    cout << cents;
}

ostream& operator<<(ostream& out, const currency& x)
{
    long theAmount = x.amount;
    if (theAmount <0) { out<<"-";
                        theAmount = -theAmount;}
    long dollars = theAmount / 100;
    out << "$" <<dollars << ".";
    int cents = theAmount - dollars * 100;
    if (cents < 10) out << "0";
    out << cents;
    return out;
}

