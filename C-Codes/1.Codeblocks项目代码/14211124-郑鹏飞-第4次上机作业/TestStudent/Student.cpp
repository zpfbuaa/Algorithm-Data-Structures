#include "Student.h"
#include <cstring>
#include <iostream>
#include <typeinfo>
using namespace std;

int Student::count=0;

Student::Student(const char* const n, const Date &d)
    :birthDate(d)
{
    name=NULL;
    setName(n);
    count++;
    courseNumber=0;
}

Student::Student(const char* const n, int y, int m, int d)//构造函数
    :birthDate(y, m, d)
{
    name=NULL;
    setName(n);
    count++;
    courseNumber=0;
}

Student::Student(const Student &s)  //拷贝构造函数
    :birthDate(s.birthDate)
{
    name=NULL;
    setName(s.name);
    count++;
    courseNumber=0;
}

Student::~Student()
{
    int i=courseNumber-1;	//释放课程信息
	while(i>0){
		if (removeCourse(i)) i--;
	}

    delete[] name;
    count--;
}

Student& Student::setName(const char * const n)
{
    if(name) delete[] name;
    name = new char[strlen(n)+1];
    strcpy(name, n);
    return *this;
}
int Student::setCourseScore()
{
    int num=getCourseNumber();
    if(num==0)
    {
        cout<<"还未选课，不能设置成绩！"<<endl;
    }
    int mark=0;
    char grade='\0';
    for(int i=0;i<num;i++)
    {
        if(typeid(*(courseList[i]))==typeid(ObligatoryCourse))
        {
            cout<<"必修课程 "<<courseList[i]->getName()<<" 的成绩(0-100):";
            cin>>mark;
            dynamic_cast<ObligatoryCourse*>(courseList[i])->setScore(mark);
        }

        else if (typeid(ElectiveCourse)==typeid(*(courseList[i])))
            {
                cout<<"选修课程“"<<courseList[i]->getName()<<"”的成绩(A-E)：";
                cin>>grade;
                dynamic_cast<ElectiveCourse*>(courseList[i])->setScore(grade);
            }
    }
}
/*void Student::print() const
{
	cout<<"姓名："<<name
		<<"\t生日：";
	birthDate.print();
	cout<<"\n";
}*/

Student& Student::addCourse(Course *course)
{
    if(courseNumber<MAX_SIZE){
		courseList[courseNumber++]=course;	//直接指针赋值
	}
	return (*this);
}

Student& Student::addCourse(const string &courseName, int creditHour)
{
    if(courseNumber<MAX_SIZE){
		courseList[courseNumber++]=new Course(courseName, creditHour);	//新建一个课程对象，并保存其地址
	}
	return (*this);
}


bool Student::removeCourse(int i)
{
	if(i<courseNumber){
		delete courseList[i];	//释放该门课程的信息，注意此处通过delete释放，因此要求前面所有的课程对象都应该是通过new操作新建的
		for(int j=i;j<courseNumber-1;j++){
			courseList[j]=courseList[j+1];	//将数组后面的课程前移，覆盖被删除的课程信息
		}
		courseNumber--;
		return true;
	}else{
		return false;
	}
}

bool Student::removeCourse(const string& courseName)
{
    int i;
	for(i=0;i<courseNumber;i++){	//找到所要取消的课程位置
		if (courseName==courseList[i]->getName()) break;
	}
	if (i<courseNumber){
		return removeCourse(i);	//如果找到所需要取消的课程，则调用另一个取消函数取消该门课程
	}else{
		return false;
	}
}

ostream& operator<<(ostream& output, const Student& s)
{
	output<<"姓名："<<s.name<<"\t出生日期："<<s.birthDate<<"，选课信息如下：\n";
	for(int i=0;i<s.courseNumber;i++){
		output<<"课程"<<i+1<<"    "<<(*s.courseList[i])<<"\n";
	}
	return output;
}
