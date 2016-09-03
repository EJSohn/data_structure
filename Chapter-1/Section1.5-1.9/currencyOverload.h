class currency
{
    friend std::ostream& operator<<(std::ostream&, const currency&);
    public:
        // constructor
        enum signType {plus, minus};
        currency(signType theSign = plus,
                 unsigned long theDollars = 0,
                 unsigned int theCents = 0);
        //destructor
        ~currency() {}
        void setValue(signType, unsigned long, unsigned int);
        void setValue(double);
        signType getSign() const
        { 
            if (amount < 0) return minus; 
            else return plus; 
        }
        unsigned long getDollars() const
        {
            if (amount < 0) return (-amount)/100;
            else return amount/100;
        }
        unsigned int getCents() const
        {
            if (amount < 0) return -amount -getDollars() * 100;
            else return amount - getDollars() * 100;
        }
        currency operator+(const currency&) const;
        currency& operator+=(const currency& x)
        {
            amount += x.amount; return *this;
        }
        // exercise 18-(a)
        currency operator-(const currency&) const;
        void output(std::ostream&) const;
    private:
        long amount;
};


