#include <iostream>
#include <cstdlib>
#include <typeinfo>
#include "Date.h"
#include "Student.h"
#include "Course.h"
#include "ObligatoryCourse.h"
#include "ElectiveCourse.h"

using namespace std;
int zero(Student &s);

void one(Student &s)
{
    cout<<"---------------必修课课程列表--------------\n\n";
    cout<<"   1.高级语言程序设计-2              学分:3"<<endl;
    cout<<"   2.数据结构                        学分:4"<<endl;
    cout<<"   3.思想政治理论课－－纲要          学分:3"<<endl;
    cout<<"   4.职业生涯与规划                  学分:2"<<endl;
    cout<<"   5.线性代数                        学分:4"<<endl;
    cout<<"   6.多元微积分                      学分:3"<<endl;
    cout<<"------------------------------------------\n\n";
    cout<<"请选择你要选的必修课: ";
    int choose1;
    int num=s.getCourseNumber();
    ObligatoryCourse *ob1,*ob2,*ob3,*ob4,*ob5,*ob6;
    ob1=new ObligatoryCourse("高级语言程序设计-2",3);
    ob2=new ObligatoryCourse("数据结构",4);
    ob3=new ObligatoryCourse("思想政治理论课－－纲要",3);
    ob4=new ObligatoryCourse("职业生涯与规划",2);
    ob5=new ObligatoryCourse("线性代数",4);
    ob6=new ObligatoryCourse("多元微积分",3);
    cin>>choose1;
    if(choose1<=0||choose1>6)
    {
        cout<<"输入不合法!\n\n";
        zero(s);
    }
    else if(choose1>=1&&choose1<=6)
    {
    if(num!=0)
    {
        ObligatoryCourse *ob;
        switch(choose1)
        {
            case 1: ob=ob1;break;
            case 2: ob=ob2;break;
            case 3: ob=ob3;break;
            case 4: ob=ob4;break;
            case 5: ob=ob5;break;
            case 6: ob=ob6;break;
        }
        string name;
        int count=0;
        for(int i=0;i<num;i++)
        {
            name=s.getCourseName(i);
            if(name==ob->getName())
            {
                count++;
                cout<<"已经选过这门课程，不能重复选课!\n";
                break;
            }

        }
        if(count==0)
        {
            switch(choose1)
            {
            case 1: s.addCourse(ob1);break;
            case 2: s.addCourse(ob2);break;
            case 3: s.addCourse(ob3);break;
            case 4: s.addCourse(ob4);break;
            case 5: s.addCourse(ob5);break;
            case 6: s.addCourse(ob6);break;
            }
        }
        zero(s);
    }
    else if(num==0)
    {
    switch(choose1)
    {
        case 1: s.addCourse(ob1);break;
        case 2: s.addCourse(ob2);break;
        case 3: s.addCourse(ob3);break;
        case 4: s.addCourse(ob4);break;
        case 5: s.addCourse(ob5);break;
        case 6: s.addCourse(ob6);break;
    }
    }
    zero(s);
    }
}
void two(Student &s)
{
    cout<<"---------------选修课课程列表--------------\n\n";
    cout<<"   1.系统管理学分:1"<<endl;
    cout<<"   2.Java程序设计学分:3"<<endl;
    cout<<"   3.网站设计技术学分:1"<<endl;
    cout<<"   4.生命科学导论学分:1"<<endl;
    cout<<"   5.创业基础学分:1"<<endl;
    cout<<"   6.健康常识教育学分:1"<<endl;
    cout<<"------------------------------------------\n\n";
    cout<<"请选择你要选的选修课: ";
    int choose2;
    int num=s.getCourseNumber();
    ElectiveCourse *el1,*el2,*el3,*el4,*el5,*el6;
    el1=new ElectiveCourse("系统管理",1);
    el2=new ElectiveCourse("Java程序设计",3);
    el3=new ElectiveCourse("网站设计技术",1);
    el4=new ElectiveCourse("生命科学导论",1);
    el5=new ElectiveCourse("创业基础",1);
    el6=new ElectiveCourse("健康常识教育",1);
    cin>>choose2;
    if(choose2<=0||choose2>6)
    {
        cout<<"输入不合法!\n\n";
        zero(s);
    }
    else if(choose2>=1&&choose2<=6)
    {
    if(num!=0)
    {
        ElectiveCourse *el;
        switch(choose2)
        {
            case 1: el=el1;break;
            case 2: el=el2;break;
            case 3: el=el3;break;
            case 4: el=el4;break;
            case 5: el=el5;break;
            case 6: el=el6;break;
        }
        string name;
        int count=0;
        for(int i=0;i<num;i++)
        {
            name=s.getCourseName(i);
            if(name==el->getName())
            {
                count++;
                cout<<"已经选过这门课程，不能重复选课!\n";
                break;
            }

        }
        if(count==0)
        {
            switch(choose2)
          {
            case 1: s.addCourse(el1);break;
            case 2: s.addCourse(el2);break;
            case 3: s.addCourse(el3);break;
            case 4: s.addCourse(el4);break;
            case 5: s.addCourse(el5);break;
            case 6: s.addCourse(el6);break;
          }
        }
        zero(s);
    }
    else if(num==0)
    {
    switch(choose2)
    {
        case 1: s.addCourse(el1);break;
        case 2: s.addCourse(el2);break;
        case 3: s.addCourse(el3);break;
        case 4: s.addCourse(el4);break;
        case 5: s.addCourse(el5);break;
        case 6: s.addCourse(el6);break;
    }
    }
    zero(s);
    }
}
void three(Student &s)
{
    int num=s.getCourseNumber();
    if(num==0)
    {
        cout<<"姓名: "<<s.getName()<<" 出生日期: "<<s.getBirthDate()<<endl;
        cout<<"还未选课,目前没有选课信息\n\n";
    }
    else if(num!=0)
    {
        cout<<s<<"\n\n";
    }
    zero(s);
}
void four(Student &s)
{
    s.setCourseScore();
    cout<<"\n\n";
    zero(s);
}
void five(Student &s)
{
    int num=s.getCourseNumber();
    if(num==0)
    {
        cout<<"还未选课，不能进行退课！\n\n";
    }
    else if(num!=0)
    {
        cout<<"选课信息如下:\n\n";
        cout<<s<<endl;
        cout<<"请选择要退课的科目序号: ";
        int key;
        cin>>key;
        if(key<=0||key>num)
        {
            cout<<"输入不合法\n\n";
        }
        else
        {
            s.removeCourse(key-1);
        }
    }
    zero(s);
}
int zero(Student &s)
{
    cout<<"---------------选课系统主页面--------------\n\n";
    cout<<"             1.选必修课程             \n";
    cout<<"             2.选选修课程             \n";
    cout<<"             3.查看选课情况           \n";
    cout<<"             4.设置课程成绩           \n";
    cout<<"             5.退课                   \n";
    cout<<"             6.退出选课系统           \n";
    cout<<"\n-------------------------------------------\n\n";
    cout<<"请选择你要执行的操作: ";
    int choose0;
    cin>>choose0;
    if(choose0<=0||choose0>6)
    {
        cout<<"输入不合法!!!\n\n"<<endl;
        zero(s);
    }
    else
    {
    switch(choose0)
    {
        case 1: one(s);
                break;
        case 2: two(s);
                break;
        case 3: three(s);
                break;
        case 4: four(s);
                break;
        case 5: five(s);
                break;
        case 6: cout<<"\n\n--------------欢迎再来选课--------------\n\n";
                exit(1);
    }
    }
}

int main()
{
    cout<<"---------------欢迎来到选课系统--------------\n\n";
    cout<<"请先完善个人信息\n\n";
    cout<<"请输入学生姓名: ";
    char a[100];
    cin>>a;
    cout<<"\n请输入出生日期(格式:2015 5 15): ";
    int y,m,d;
    cin>>y>>m>>d;
    Student stu1(a,y,m,d);
    cout<<"\n\n";
    zero(stu1);
	return 0;
}
