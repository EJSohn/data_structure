#ifndef CURRENCY_H
#define CURRENCY_H

class currency
{
    public:
        // constructor
        enum signType {plus, minus}; 
        currency(signType theSign = plus,
                unsigned long theDollars = 0,
                unsigned int theCents = 0);

        // destructor
        ~currency() {}
        void setValue(signType, unsigned long, unsigned int);
        void setValue(double);
        // exercise 16-(a)
        void input();
        // exercise 16-(b)
        currency subtract(const currency&) const;
        // exercise 16-(c)
        currency percent(double) const;
        signType getSign() const {return sign;}
        unsigned long getDollars() const {return dollars;}
        unsigned int getCents() const {return cents;}
        currency add(const currency&) const;
        currency& increment(const currency&);
        void output() const;

    private:
        signType sign;
        unsigned long dollars;
        unsigned int cents;
};

#endif


