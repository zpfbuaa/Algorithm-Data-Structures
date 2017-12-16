#ifndef OBLIGATORYCOURSE_H
#define OBLIGATORYCOURSE_H
#include "Course.h"

class ObligatoryCourse:public Course
{
    public:
        ObligatoryCourse(const string &n, int ch);
        int getScore()const{return mark;}
        void setScore(int );
        virtual ~ObligatoryCourse();
    protected:
    private:
    int mark;

};

#endif // OBLIGATORYCOURSE_H
