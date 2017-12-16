#include "Course.h"

Course::Course(const string &n, int ch)
{
    name=n;
    creditHour=ch;
}

Course::~Course()
{
    //dtor
}
ostream& operator<<(ostream &output, const Course&c)
{
//    output<<"课程名称："<<c.name
//		<<"\t学分："<<c.creditHour
//		<<"\tScore "<<c.getScore()
//		<<"\n";
      output<<"课程名称："<<c.name<<"学分："<<c.creditHour<<"       Score "<<c.getScore()<<"\n";
    return output;
}

