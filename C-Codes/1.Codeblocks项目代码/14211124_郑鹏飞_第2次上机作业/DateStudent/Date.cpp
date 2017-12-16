#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
    year=1900;
    month=1;
    day=1;
}

Date::Date(int y, int m, int d)
{
    setDate(y, m, d);//����set������������ֵ
}

Date::Date(const Date &d)
{
    setDate(d.year, d.month, d.day);//����set������������ֵ��ע�����
}

Date::~Date()
{
    //dtor
}

void Date::setDate(int y, int m, int d)
{
    year=y; //��ʼ�����ݳ�Ա
    month=m;
    day=d;
    checkDate();//��������Ƿ�Ϸ���������Ϸ����������֤���õ�����ֵ�Ϸ�
}

bool Date::checkDate()
{
    bool flag=true; //�����Ƿ�Ϸ���ȱʡ�Ϸ�
    //�겻���κ�����

    //��Ӧ����1~12֮��
    if ((month<1)||(month>12))
    {
        month=1;    //���¸�Ϊ�Ϸ�����
        flag=false;
    }
    //��Ӧ�����ض��µ����ڷ�Χ֮�ڣ�����1�ͱ����������֮��
    if ((day<1)||(day>maxDay()))
    {
        day=1;
        flag=false;
    }
    return flag;
}

int Date::maxDay()
{
    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if(isLeapYear()) return 29;
        else return 28;
    default: //�´����򷵻�0
        return 0;
    }
}

bool Date::isLeapYear()
{
    return ( ((year%4==0)&&(year%100)) || (year%400==0) );
}

void Date::nextDay()
{
    day++;
    if(!checkDate()) month++;
    if(!checkDate()) year++;
}

void Date::print()
{
    cout<<year<<"-"<<month<<"-"<<day;
    cout<<"\n";
}
