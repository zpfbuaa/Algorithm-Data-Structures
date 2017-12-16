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
    cout<<"---------------���޿ογ��б�--------------\n\n";
    cout<<"   1.�߼����Գ������-2              ѧ��:3"<<endl;
    cout<<"   2.���ݽṹ                        ѧ��:4"<<endl;
    cout<<"   3.˼���������ۿΣ�����Ҫ          ѧ��:3"<<endl;
    cout<<"   4.ְҵ������滮                  ѧ��:2"<<endl;
    cout<<"   5.���Դ���                        ѧ��:4"<<endl;
    cout<<"   6.��Ԫ΢����                      ѧ��:3"<<endl;
    cout<<"------------------------------------------\n\n";
    cout<<"��ѡ����Ҫѡ�ı��޿�: ";
    int choose1;
    int num=s.getCourseNumber();
    ObligatoryCourse *ob1,*ob2,*ob3,*ob4,*ob5,*ob6;
    ob1=new ObligatoryCourse("�߼����Գ������-2",3);
    ob2=new ObligatoryCourse("���ݽṹ",4);
    ob3=new ObligatoryCourse("˼���������ۿΣ�����Ҫ",3);
    ob4=new ObligatoryCourse("ְҵ������滮",2);
    ob5=new ObligatoryCourse("���Դ���",4);
    ob6=new ObligatoryCourse("��Ԫ΢����",3);
    cin>>choose1;
    if(choose1<=0||choose1>6)
    {
        cout<<"���벻�Ϸ�!\n\n";
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
                cout<<"�Ѿ�ѡ�����ſγ̣������ظ�ѡ��!\n";
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
    cout<<"---------------ѡ�޿ογ��б�--------------\n\n";
    cout<<"   1.ϵͳ����ѧ��:1"<<endl;
    cout<<"   2.Java�������ѧ��:3"<<endl;
    cout<<"   3.��վ��Ƽ���ѧ��:1"<<endl;
    cout<<"   4.������ѧ����ѧ��:1"<<endl;
    cout<<"   5.��ҵ����ѧ��:1"<<endl;
    cout<<"   6.������ʶ����ѧ��:1"<<endl;
    cout<<"------------------------------------------\n\n";
    cout<<"��ѡ����Ҫѡ��ѡ�޿�: ";
    int choose2;
    int num=s.getCourseNumber();
    ElectiveCourse *el1,*el2,*el3,*el4,*el5,*el6;
    el1=new ElectiveCourse("ϵͳ����",1);
    el2=new ElectiveCourse("Java�������",3);
    el3=new ElectiveCourse("��վ��Ƽ���",1);
    el4=new ElectiveCourse("������ѧ����",1);
    el5=new ElectiveCourse("��ҵ����",1);
    el6=new ElectiveCourse("������ʶ����",1);
    cin>>choose2;
    if(choose2<=0||choose2>6)
    {
        cout<<"���벻�Ϸ�!\n\n";
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
                cout<<"�Ѿ�ѡ�����ſγ̣������ظ�ѡ��!\n";
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
        cout<<"����: "<<s.getName()<<" ��������: "<<s.getBirthDate()<<endl;
        cout<<"��δѡ��,Ŀǰû��ѡ����Ϣ\n\n";
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
        cout<<"��δѡ�Σ����ܽ����˿Σ�\n\n";
    }
    else if(num!=0)
    {
        cout<<"ѡ����Ϣ����:\n\n";
        cout<<s<<endl;
        cout<<"��ѡ��Ҫ�˿εĿ�Ŀ���: ";
        int key;
        cin>>key;
        if(key<=0||key>num)
        {
            cout<<"���벻�Ϸ�\n\n";
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
    cout<<"---------------ѡ��ϵͳ��ҳ��--------------\n\n";
    cout<<"             1.ѡ���޿γ�             \n";
    cout<<"             2.ѡѡ�޿γ�             \n";
    cout<<"             3.�鿴ѡ�����           \n";
    cout<<"             4.���ÿγ̳ɼ�           \n";
    cout<<"             5.�˿�                   \n";
    cout<<"             6.�˳�ѡ��ϵͳ           \n";
    cout<<"\n-------------------------------------------\n\n";
    cout<<"��ѡ����Ҫִ�еĲ���: ";
    int choose0;
    cin>>choose0;
    if(choose0<=0||choose0>6)
    {
        cout<<"���벻�Ϸ�!!!\n\n"<<endl;
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
        case 6: cout<<"\n\n--------------��ӭ����ѡ��--------------\n\n";
                exit(1);
    }
    }
}

int main()
{
    cout<<"---------------��ӭ����ѡ��ϵͳ--------------\n\n";
    cout<<"�������Ƹ�����Ϣ\n\n";
    cout<<"������ѧ������: ";
    char a[100];
    cin>>a;
    cout<<"\n�������������(��ʽ:2015 5 15): ";
    int y,m,d;
    cin>>y>>m>>d;
    Student stu1(a,y,m,d);
    cout<<"\n\n";
    zero(stu1);
	return 0;
}
