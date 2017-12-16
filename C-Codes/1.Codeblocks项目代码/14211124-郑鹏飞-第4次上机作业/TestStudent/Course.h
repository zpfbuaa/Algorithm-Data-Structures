#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>
using namespace std;

class Course
{
    friend ostream& operator<<(ostream &, const Course&);
    public:
        const string& getName()	const	{return name;}  //get��������ÿγ�����
        void setName(const string &n)	{name=n;}       //set�������޸Ŀγ�����
        int getCreditHour()	const	{return creditHour;}//get��������ÿγ�ѧ��
        void setCreditHour(int ch){creditHour=ch;}      //set�������޸Ŀγ�ѧ��

        Course(const string &n="", int ch=0);   //���캯��
        virtual ~Course();                      //��������
    protected:
    private:
        string name;
        int creditHour;
};

#endif // COURSE_H
