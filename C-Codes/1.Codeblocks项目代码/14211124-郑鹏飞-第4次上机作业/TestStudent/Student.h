#ifndef STUDENT_H
#define STUDENT_H
#define MAX_SIZE 10
#include "Date.h"
#include "Course.h"
#include <iostream>
#include <string>
#include "ObligatoryCourse.h"
#include "ElectiveCourse.h"
using namespace std;
class Student
{
    friend ostream& operator<<(ostream&, const Student &s);   //���������������Ԫ���������ѧ���Լ�ѡ����Ϣ
    public:
        Student& addCourse(Course *course);             //ͨ���γ�ָ����ӿγ̣�ʵ��ѧ��ѡ�ι���
        Student& addCourse(const string &courseName, int creditHour);//ͨ���γ�����ѧ����Ϣ��ӿγ̣�ʵ��ѧ��ѡ�ι���
        bool removeCourse(int i);                       //ɾ��ָ��λ�õĿγ�
        bool removeCourse(const string& courseName);    //���ݿγ�����ɾ���γ�

        //void print() const;   //��ӡѧ����Ϣ

        Student& setName(const char* const n);//set��������������
        int setCourseScore();
        const char* getName() const {return name;}//get�������������
        const Date& getBirthDate() const {return birthDate;}//get�������������
        const int getCourseNumber()const{return courseNumber;}
        static int getCount() {return count;}//��̬get��������ö�������
        const string getCourseName(int i)const{return courseList[i]->getName();}
        Student(const char* const n, int y, int m, int d);//���캯��
        Student(const char* const n, const Date &d);//���캯��
        Student(const Student &s);  //�������캯��
        virtual ~Student(); //��������
    protected:
    private:
        char *name; //����
        const Date birthDate;   //����
        static int count;   //��̬��Ա������ͳ��ѧ����Ŀ

        int courseNumber;   //��ǰʵ�ʿγ���Ŀ
        Course *courseList[MAX_SIZE];   //�洢��ǰѧ����ѡ�Ŀγ�ָ��

};

#endif // STUDENT_H
