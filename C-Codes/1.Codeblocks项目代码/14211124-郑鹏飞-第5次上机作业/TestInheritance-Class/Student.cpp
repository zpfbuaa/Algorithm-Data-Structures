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

Student::Student(const char* const n, int y, int m, int d)//���캯��
    :birthDate(y, m, d)
{
    name=NULL;
    setName(n);
    count++;
    courseNumber=0;
}

Student::Student(const Student &s)  //�������캯��
    :birthDate(s.birthDate)
{
    name=NULL;
    setName(s.name);
    count++;
    courseNumber=0;
}

Student::~Student()
{
  /*  int i=courseNumber-1;	//�ͷſγ���Ϣ
	while(i>0){
		if (removeCourse(i)) i--;
	}*///�����ͷſγ̣������渺���ͷ�

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
	cout<<"������"<<name
		<<"\t���գ�";
	birthDate.print();
	cout<<"\n";
}*/

Student& Student::addCourse(Course *course)
{
    if(course!=NULL)    //ֻ�зǿ�ʱ�ż���ϵͳ��
    {
        if(courseNumber<MAX_SIZE){
            courseList[courseNumber++]=course;	//ֱ��ָ�븳ֵ
        }
    }
	return (*this);
}

/*Student& Student::addCourse(const string &courseName, int creditHour)
{
    if(courseNumber<MAX_SIZE){
		courseList[courseNumber++]=new Course(courseName, creditHour);	//�½�һ���γ̶��󣬲��������ַ
	}
	return (*this);
}*/

bool Student::removeCourse(int i)
{
	if(i<courseNumber){
		//delete courseList[i];	//�˴������ͷſγ̶�����ڴ�ռ䣬��������û������ͷ�
		for(int j=i;j<courseNumber-1;j++){
			courseList[j]=courseList[j+1];	//���������Ŀγ�ǰ�ƣ����Ǳ�ɾ���Ŀγ���Ϣ
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
//    cout<<"������ѧ��:"<<obnum<<" "<<"ѡ����ѧ��:"<<elenum<<endl;
//    cout<<"������quan:"<<obcre<<" "<<"ѡ����quan:"<<elecre<<endl;
    else return 0.6*obcre/obnum+0.4*elecre/elenum;
}

bool Student::removeCourse(const string& courseName)
{
    int i;
	for(i=0;i<courseNumber;i++){	//�ҵ���Ҫȡ���Ŀγ�λ��
		if (courseName==courseList[i]->getName()) break;
	}
	if (i<courseNumber){
		return removeCourse(i);	//����ҵ�����Ҫȡ���Ŀγ̣��������һ��ȡ������ȡ�����ſγ�
	}else{
		return false;
	}
}


const Course& Student::operator[](int subscript) const
{
	if (subscript < 0 || subscript >=courseNumber ){
	   cerr <<"�±�Խ��: " << subscript << endl;
	   exit( 1 ); // ����Խ�磬�˳�����
	}
	return (*courseList[subscript]); //����ֵ��ֻ������ֵ�������޸�
}

Course& Student::operator[](int subscript)
{
	if (subscript < 0 || subscript >=courseNumber ){
	   cerr <<"�±�Խ��: " << subscript << endl;
	   exit( 1 ); // ����Խ�磬�˳�����
	}
	return (*courseList[subscript]); //����ֵ��ֻ������ֵ�������޸�
}

ostream& operator<<(ostream& output, const Student& s)
{
	output<<"������"<<s.name<<"\t�������ڣ�"<<s.birthDate<<"��ѡ����Ϣ���£�\n";
	for(int i=0;i<s.courseNumber;i++){
		output<<(*s.courseList[i])<<"\n";
	}
	return output;
}
