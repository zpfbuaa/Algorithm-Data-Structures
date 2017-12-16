#ifndef COURSE_H
#define COURSE_H
#include<string>
#include<iostream>
using namespace std;

class Course
{
    friend ostream& operator<<(ostream& out,Course& cou);
    public:
        Course(const string n,const int cou);
        Course(const Course &cou);
        const string& getName()const {return Name;}
        const int& getCreditHour()const {return creditHour;}
        Course& setName(const string n);
        Course& setCreditHour(const int cre);
        virtual ~Course();
    protected:
    private:
            string Name;
            int creditHour;
};

#endif // COURSE_H
