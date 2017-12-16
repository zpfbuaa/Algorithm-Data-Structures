#ifndef STUDENT_H
#define STUDENT_H
#include "Date.h"
using namespace std;

class Student
{
public:
    Student(const char *n,int y,int m,int d);//-----------���캯��
    Student(const Student&s); //--------------------------�������캯��
    ~Student();//-----------------------------------------��������

//-----------All the get functions------------------//��get ������

    char* getName()
    {
        return name;
    }
    const Date& getBirthDate() const
    {
        return birthDate;
    }

//------------All the set functions-----------------//��set ������

    Student& setName(const char* const n);
    const void setBirthDate(int y,int m,int d);

//-------------print function-----------------------//��print ������

    void print();

//-------------static member function---------------//
    static int getCount();

private:
    char* name;
    Date birthDate;
    static int Count;
};

#endif
