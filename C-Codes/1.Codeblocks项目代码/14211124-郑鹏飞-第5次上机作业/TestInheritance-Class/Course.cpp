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
//    output<<"�γ����ƣ�"<<c.name
//		<<"\tѧ�֣�"<<c.creditHour
//		<<"\tScore "<<c.getScore()
//		<<"\n";
      output<<"�γ����ƣ�"<<c.name<<"ѧ�֣�"<<c.creditHour<<"       Score "<<c.getScore()<<"\n";
    return output;
}

