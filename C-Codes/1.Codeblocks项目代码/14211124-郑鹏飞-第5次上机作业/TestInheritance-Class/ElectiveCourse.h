#ifndef ELECTIVECOURSE_H
#define ELECTIVECOURSE_H

#include "Course.h"


class ElectiveCourse : public Course
{
    public:
    	int getScore() const;   //获得课程成绩
        bool setGrade(char g);  //设置课程成绩

        ElectiveCourse(const string &n="", int ch=0, char g='\0');
        ElectiveCourse(const ElectiveCourse &ec):Course(ec),grade(ec.grade){}	//拷贝构造函数
        virtual ~ElectiveCourse();
    protected:
    private:
        char grade;
};

#endif // ELECTIVECOURSE_H
