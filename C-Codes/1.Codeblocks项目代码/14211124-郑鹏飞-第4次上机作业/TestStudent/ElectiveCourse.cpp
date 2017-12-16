#include "ElectiveCourse.h"

ElectiveCourse::ElectiveCourse(const string &n, int ch):Course(n,ch)
{

}

ElectiveCourse::~ElectiveCourse()
{
    //dtor
}

void ElectiveCourse::setScore(char s)
{
    grade=s;
    if(grade='A')
        mark=95;
    if(grade='B')
        mark=85;
    if(grade='C')
        mark=75;
    if(grade='D')
        mark=65;
    if(grade='E')
        mark=55;
}
