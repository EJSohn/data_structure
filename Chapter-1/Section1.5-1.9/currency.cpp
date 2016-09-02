#include <iostream>
#include <cstring>
#include "currency.h"
using namespace std;

currency::currency(signType theSign, unsigned long theDollars,
                                     unsigned int theCents)
{
    setValue(theSign, theDollars, theCents);
}

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents)
{
    if (theCents > 99)
        throw "Cents should be < 100";
    sign = theSign;
    dollars = theDollars;
    cents = theCents;

}

void currency::setValue(double theAmount)
{
    if ( theAmount < 0 ) { sign = minus; 
                           theAmount = -theAmount;}
    else sign = plus;
    
    dollars = (unsigned long) theAmount;
    cents = (unsigned int) ((theAmount + 0.001 - dollars)*100);
}

currency currency::add(const currency& x) const
{
    long a1, a2, a3;
    currency result;
    
    a1 = dollars * 100 + cents;
    if (sign == minus) a1 = -a1;

    a2 = x.dollars * 100 + x.cents;
    if (x.sign==minus) a2 = -a2;

    a3 = a1 + a2;

    if (a3<0) {result.sign = minus; a3 = -a3;}
    result.dollars = a3/100;
    result.cents = a3 - result.dollars * 100;

    return result;
}

// exercise 16-(b)
currency currency::subtract(const currency& x) const
{
    long a1, a2, a3;
    currency result;

    a1 = dollars * 100 + cents;
    if (sign == minus) a1 = -a1;

    a2 = x.dollars * 100 + x.cents;
    if (sign == minus) a2 = -a2;

    a3 = a1 - a2;

    if(a3<0) {result.sign = minus; a3 = -a3;}
    result.dollars = a3/100;
    result.cents = a3 - result.dollars * 100;

    return result;
}

currency& currency::increment(const currency& x)
{
    *this = add(x);
    return *this;
}

void currency::output() const
{
    if (sign==minus) cout << '-';
    cout << '$' << dollars << '.';
    if (cents < 10) cout << '0';
    cout << cents <<endl;
}

// exercise 16-(a)
void currency::input()
{
    double userValue;
    
    cout<<"please enter the currency value you want"<<endl;
    cin>> userValue;
    if (typeid(userValue)!=typeid(double))
        throw "the input value must be double";
    
    setValue(userValue);
}



