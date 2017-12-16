#ifndef ELECTIVECOURSE_H
#define ELECTIVECOURSE_H
#include "Course.h"

class ElectiveCourse:public Course
{
    public:
        ElectiveCourse(const string &n, int ch);
        char getScore()const {return grade;}
        void setScore(char );
        virtual ~ElectiveCourse();
    protected:
    private:
    char grade;
    int mark;
};

#endif // ELECTIVECOURSE_H
