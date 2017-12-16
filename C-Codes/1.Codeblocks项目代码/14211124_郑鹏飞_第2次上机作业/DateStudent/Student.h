#ifndef STUDENT_H
#define STUDENT_H
#include "Date.h"
using namespace std;

class Student
{
public:
    Student(const char *n,int y,int m,int d);//-----------构造函数
    Student(const Student&s); //--------------------------拷贝构造函数
    ~Student();//-----------------------------------------析构函数

//-----------All the get functions------------------//（get 函数）

    char* getName()
    {
        return name;
    }
    const Date& getBirthDate() const
    {
        return birthDate;
    }

//------------All the set functions-----------------//（set 函数）

    Student& setName(const char* const n);
    const void setBirthDate(int y,int m,int d);

//-------------print function-----------------------//（print 函数）

    void print();

//-------------static member function---------------//
    static int getCount();

private:
    char* name;
    Date birthDate;
    static int Count;
};

#endif
