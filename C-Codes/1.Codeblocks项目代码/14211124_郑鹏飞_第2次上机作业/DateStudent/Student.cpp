#include "Student.h"
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int Student::Count=0;//---------------------------------------初始化Count

Student::Student(const char *n,int y,int m,int d)//-----------构造函数
{
    name=NULL;
    setName(n);
    birthDate.setDate(y,m,d);
    Count++;//how many objects we create,and add to it.
}

Student::Student(const Student& s):birthDate(s.birthDate)//---拷贝构造函数
{
    name=NULL;
    setName(s.name);
    Count++;//add to the Count again.
}

Student::~Student()//-----------------------------------------析构函数
{
    cout<<"Student "<<"\""<<name<<"\""<<" went\n";
    if(name) delete[] name;//处理对象
    Count--;//minus the Count.
}

Student& Student::setName(const char*n)
{
    if(name) delete[] name;
    int len = strlen(n);
    name = new char[len + 1];
    strcpy(name, n);
    return *this;
}

const void Student::setBirthDate(int y,int m,int d)
{
    birthDate.setDate(y,m,d);
}

void Student::print()
{
    cout<<"Student's name is "<<name<<".\n";
    cout<<name<<"'s birth date"<<" is ";
    birthDate.print();
    cout<<"\n";
}
int Student::getCount()
{
    return Count;
}
