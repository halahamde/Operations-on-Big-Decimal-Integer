// Course:  CS213 - Programming II  - 2018
// Title:   Assignment II -Task3- Problem
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    1 Novamber 2018
// Version: 1.0
//_________________________________________________________________
#include <iostream>
#include "BigDecimalInt.h"

using namespace std;
int main()
{
BigDecimalInt num1("123456789012345678901234567890");
BigDecimalInt num2("113456789011345678901134567890");
BigDecimalInt num3 = num2 + num1;
BigDecimalInt num4 = num2 - num1;
cout << "num1 = " << num1 << endl;
cout << "num2 = " << num2 << endl;
//236913578023691357802369135780
cout << "num2 + num1 = " << num3 << endl;
//10000000001000000000100000000
cout << "num2 - num1 = " << num4 << endl;
BigDecimalInt num5("333333333333333333333333333333");
BigDecimalInt num6("-111111111111111111111111111111");
BigDecimalInt num7 = num5 + num6;
BigDecimalInt num8 = num5 - num6;
//222222222222222222222222222222
cout << "num5 + num6 = " << num7 << endl;
//444444444444444444444444444444
cout << "num5 - num6 = " << num8 << endl;
    return 0;
}
