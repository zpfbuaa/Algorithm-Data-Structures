#include "ObligatoryCourse.h"

ObligatoryCourse::ObligatoryCourse(const string &n, int ch):Course(n,ch)
{
    mark=0;
}

ObligatoryCourse::~ObligatoryCourse()
{
    //dtor
}

void ObligatoryCourse::setScore(int s)
{
    mark=s;
}
