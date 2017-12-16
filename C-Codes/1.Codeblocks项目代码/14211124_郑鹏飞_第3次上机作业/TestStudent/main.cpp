#include <iostream>
#include "Date.h"
#include "Student.h"
#include "Course.h"
#include <string>
#include <cstring>
using namespace std;

int main()
{
    cout<<"\tMaybe we need to verify two header files\n\t(Student.h and Date.h) "<<endl;
    cout<<"=======================================\n"<<endl;
    cout<<"\tFirstly, we  verify  Student.h :\n"<<endl;
	cout<<"��ǰϵͳ����"<<Student::getCount()<<"λѧ��\n";

	Student stu1("����", 1985, 1, 1);
	stu1.addCourse("�߼����Գ������-2", 3);
	stu1.addCourse(new Course("��ѧ����", 5));
	stu1.addCourse("����", 2);
	Date d(1987, 3, 1);
	Student stu2("����", d);
	stu2.addCourse("�߼����Գ������-2", 3);
	stu2.addCourse(new Course("��ѧ����", 5));
	stu2.addCourse("˼���������", 2);

	Student *stu3;
	stu3=new Student("����", 1986, 2, 28);
	stu3->addCourse("�߼����Գ������-2", 3);
	stu3->addCourse(new Course("��ѧ����", 5));
	stu3->addCourse("��������", 2);

    cout<<"=======================================\n";
	cout<<"��ǰϵͳ����"<<Student::getCount()<<"λѧ��\n";
	cout<<stu1<<stu2<<(*stu3);

	delete stu3;
	cout<<"=======================================\n";
	cout<<"��ǰϵͳ����"<<Student::getCount()<<"λѧ��\n";
	cout<<stu1<<stu2<<endl;

	cout<<"=======================================\n"<<endl;
    cout<<"\tNow we verify Date.h : \n";
    cout<<"\n=======================================\n";
    Date d1;
    cout<<"d1="<<d1;
    Date d2=d1;
    cout<<"d2="<<d2;
    cout<<"d2++="<<d2++;
    cout<<"++d2="<<++d2;
    Date d3;
    d3.setDate(2008,2,28);
    cout<<"After d3.setDate(2008,2,28):  d3="<<d3;
    cout<<"d3's next day: "<<d3++;
    cout<<"Get d3's year: "<<d3.getYear()<<"\nGet d3's month: "
        <<d3.getMonth()<<"\nGet d3's day: "<<d3.getDay();
    cout<<"\n==========Program over!!!=============";
    cout<<endl;
	return 0;
}
