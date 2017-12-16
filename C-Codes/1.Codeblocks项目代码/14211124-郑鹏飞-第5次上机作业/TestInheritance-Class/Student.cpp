#include "Student.h"
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <typeinfo>
#include "ObligatoryCourse.h"
#include "ElectiveCourse.h"
#include "Course.h"

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
  /*  int i=courseNumber-1;	//释放课程信息
	while(i>0){
		if (removeCourse(i)) i--;
	}*///不再释放课程，由外面负责释放

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

/*void Student::print() const
{
	cout<<"姓名："<<name
		<<"\t生日：";
	birthDate.print();
	cout<<"\n";
}*/

Student& Student::addCourse(Course *course)
{
    if(course!=NULL)    //只有非空时才加入系统中
    {
        if(courseNumber<MAX_SIZE){
            courseList[courseNumber++]=course;	//直接指针赋值
        }
    }
	return (*this);
}

/*Student& Student::addCourse(const string &courseName, int creditHour)
{
    if(courseNumber<MAX_SIZE){
		courseList[courseNumber++]=new Course(courseName, creditHour);	//新建一个课程对象，并保存其地址
	}
	return (*this);
}*/

bool Student::removeCourse(int i)
{
	if(i<courseNumber){
		//delete courseList[i];	//此处不再释放课程对象的内存空间，由外面的用户负责释放
		for(int j=i;j<courseNumber-1;j++){
			courseList[j]=courseList[j+1];	//将数组后面的课程前移，覆盖被删除的课程信息
		}
		courseNumber--;
		return true;
	}else{
		return false;
	}
}

const double Student::calcCredit()const
{
   // if(getCourseNumber())
    double obcre=0.0,elecre=0.0;
    int obnum=0,elenum=0;
    for(int i=0;i<getCourseNumber();i++)
    {
        if(typeid(ObligatoryCourse)==typeid(*courseList[i]))
            obnum+=courseList[i]->getCreditHour();
        else if (typeid(ElectiveCourse)==typeid(*courseList[i]))
            elenum+=courseList[i]->getCreditHour();
    }
    for(int i=0;i<getCourseNumber();i++)
    {
        if(typeid(ObligatoryCourse)==typeid(*courseList[i]))
            obcre+=courseList[i]->getScore()*courseList[i]->getCreditHour();
        else if (typeid(ElectiveCourse)==typeid(*courseList[i]))
            elecre+=courseList[i]->getScore()*courseList[i]->getCreditHour();
    }
    if(obnum==0&&elenum==0)return 0;
    else if(obnum!=0&&elenum==0)return 0.6*obcre/obnum;
    else if(obnum==0&&elenum!=0)return 0.4*elecre/elenum;
//    cout<<"必修总学分:"<<obnum<<" "<<"选修总学分:"<<elenum<<endl;
//    cout<<"必修总quan:"<<obcre<<" "<<"选修总quan:"<<elecre<<endl;
    else return 0.6*obcre/obnum+0.4*elecre/elenum;
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


const Course& Student::operator[](int subscript) const
{
	if (subscript < 0 || subscript >=courseNumber ){
	   cerr <<"下标越界: " << subscript << endl;
	   exit( 1 ); // 访问越界，退出程序
	}
	return (*courseList[subscript]); //返回值，只能作右值，不能修改
}

Course& Student::operator[](int subscript)
{
	if (subscript < 0 || subscript >=courseNumber ){
	   cerr <<"下标越界: " << subscript << endl;
	   exit( 1 ); // 访问越界，退出程序
	}
	return (*courseList[subscript]); //返回值，只能作右值，不能修改
}

ostream& operator<<(ostream& output, const Student& s)
{
	output<<"姓名："<<s.name<<"\t出生日期："<<s.birthDate<<"，选课信息如下：\n";
	for(int i=0;i<s.courseNumber;i++){
		output<<(*s.courseList[i])<<"\n";
	}
	return output;
}
