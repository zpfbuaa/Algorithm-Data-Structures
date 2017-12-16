#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date d1;
    d1.print();
    d1.printisLeapYear();
    Date d2=d1;
    d2.print();
    d1.setDate(2015,2,29);
    d1.print();
    d1.nextDay();
    d1.printisLeapYear();
}
