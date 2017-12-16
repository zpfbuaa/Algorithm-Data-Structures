#ifndef STUDENT_H
#define STUDENT_H
#define MAX_SIZE 21

#include "Date.h"
#include "course.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
class Student
{
    friend class Course;
    friend ostream& operator<<(ostream& out,Student& s);
    public:
        void print() const;

        Student& setName(const char* const n);//set��������������
        const char* getName() const {return name;}//get�������������
        const Date& getBirthDate() const {return birthDate;}//get�������������
        static int getCount() {return count;}//��̬get��������ö�������

        Student(const char* const n, int y, int m, int d);//���캯��
        Student(const char* const n, const Date &d);//���캯��
        Student(const Student &s);  //�������캯��

        Student& addCourse(Course* course);
        Student& addCourse(const string& courseName,int creditHo);
        virtual ~Student(); //��������
    protected:
    private:
        char *name; //����
        const Date birthDate;   //����
        static int count;   //��̬��Ա������ͳ��ѧ����Ŀ
        Course* courseList[MAX_SIZE];
        int courseNumber;
};

#endif // STUDENT_H
