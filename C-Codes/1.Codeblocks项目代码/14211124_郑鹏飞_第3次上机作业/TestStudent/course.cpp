#include "course.h"
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

Course::Course(const string n,const int cou)
{
    setName(n);
    setCreditHour(cou);
}
Course::Course(const Course &cou)
{
    setName(cou.Name);
    setCreditHour(cou.creditHour);
}

Course::~Course()
{

}
Course& Course::setName(const string n)
{
    Name=n;
    return *this;
}
Course& Course::setCreditHour(const int cre)
{
    creditHour=cre;
    return *this;
}

ostream& operator<<(ostream& out,Course& cou)
{
    out<<"课程名称: "<<cou.Name<<"学分: "<<cou.creditHour<<"\n";

    return out;
}
