#ifndef BIGDECIMALINT_H
#define BIGDECIMALINT_H
#include <iostream>
using namespace std;
class BigDecimalInt
{
    public:
        BigDecimalInt();
        BigDecimalInt(string );
        BigDecimalInt operator+ (BigDecimalInt );
        BigDecimalInt operator- ( BigDecimalInt );
        friend ostream& operator<<(ostream&, BigDecimalInt );
        ~BigDecimalInt();
    protected:

    private:
        string num;
};

#endif // BIGDECIMALINT_H
