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
    int i=courseNumber-1;	//�ͷſγ���Ϣ
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
        cout<<"��δѡ�Σ��������óɼ���"<<endl;
    }
    int mark=0;
    char grade='\0';
    for(int i=0;i<num;i++)
    {
        if(typeid(*(courseList[i]))==typeid(ObligatoryCourse))
        {
            cout<<"���޿γ� "<<courseList[i]->getName()<<" �ĳɼ�(0-100):";
            cin>>mark;
            dynamic_cast<ObligatoryCourse*>(courseList[i])->setScore(mark);
        }

        else if (typeid(ElectiveCourse)==typeid(*(courseList[i])))
            {
                cout<<"ѡ�޿γ̡�"<<courseList[i]->getName()<<"���ĳɼ�(A-E)��";
                cin>>grade;
                dynamic_cast<ElectiveCourse*>(courseList[i])->setScore(grade);
            }
    }
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
    if(courseNumber<MAX_SIZE){
		courseList[courseNumber++]=course;	//ֱ��ָ�븳ֵ
	}
	return (*this);
}

Student& Student::addCourse(const string &courseName, int creditHour)
{
    if(courseNumber<MAX_SIZE){
		courseList[courseNumber++]=new Course(courseName, creditHour);	//�½�һ���γ̶��󣬲��������ַ
	}
	return (*this);
}


bool Student::removeCourse(int i)
{
	if(i<courseNumber){
		delete courseList[i];	//�ͷŸ��ſγ̵���Ϣ��ע��˴�ͨ��delete�ͷţ����Ҫ��ǰ�����еĿγ̶���Ӧ����ͨ��new�����½���
		for(int j=i;j<courseNumber-1;j++){
			courseList[j]=courseList[j+1];	//���������Ŀγ�ǰ�ƣ����Ǳ�ɾ���Ŀγ���Ϣ
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
	for(i=0;i<courseNumber;i++){	//�ҵ���Ҫȡ���Ŀγ�λ��
		if (courseName==courseList[i]->getName()) break;
	}
	if (i<courseNumber){
		return removeCourse(i);	//����ҵ�����Ҫȡ���Ŀγ̣��������һ��ȡ������ȡ�����ſγ�
	}else{
		return false;
	}
}

ostream& operator<<(ostream& output, const Student& s)
{
	output<<"������"<<s.name<<"\t�������ڣ�"<<s.birthDate<<"��ѡ����Ϣ���£�\n";
	for(int i=0;i<s.courseNumber;i++){
		output<<"�γ�"<<i+1<<"    "<<(*s.courseList[i])<<"\n";
	}
	return output;
}
