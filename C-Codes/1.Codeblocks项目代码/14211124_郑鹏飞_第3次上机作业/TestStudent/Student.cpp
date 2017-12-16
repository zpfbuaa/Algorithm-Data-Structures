#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;

int Student::count=0;

Student::Student(const char* const n, const Date &d)
    :birthDate(d)
{
    name=NULL;
    setName(n);
    count++;
    courseNumber=0;
}

Student::Student(const char* const n, int y, int m, int d)//���캯��
    :birthDate(y, m, d)
{
    name=NULL;
    setName(n);
    count++;
    courseNumber=0;
}

Student::Student(const Student &s)  //�������캯��
    :birthDate(s.birthDate)
{
    name=NULL;
    setName(s.name);
    count++;
    courseNumber=s.courseNumber;
}

Student::~Student()
{
    delete[] name;
    count--;
}

Student& Student::setName(const char * const n)
{
    if(name) delete[] name;
    name = new char[strlen(n)+1];
    strcpy(name, n);
    return *this;
}

void Student::print() const
{
	cout<<"������"<<name
		<<"\t���գ�";
	cout<<birthDate;
	cout<<"\n";
}

ostream& operator<<(ostream& out,Student& s)
{
    out<<"������"<<s.name<<" �������ڣ�"<<s.birthDate<<", ѡ����Ϣ���£�"<<endl;
    for(int i=1;i<=s.courseNumber;i++)
    cout<<*(s.courseList[i])<<endl;
    return out;
}

Student& Student::addCourse(Course* course)
{
    courseList[++courseNumber]=course;
    return (*this);
}

Student& Student::addCourse(const string& courseName,int creditHo)
{
    addCourse(new Course(courseName,creditHo));
    return (*this);
}
