#include "Date.h"
#include<iostream>
#include<iomanip>
using namespace std;

Date::Date()//���캯��
{
    year=2015;
    month=3;
    day=20;
}

Date::Date(Date &d)//�������캯��
{
    year=d.year;
    month=d.month;
    day=d.day;
}

int Date::getYear()//��ȡ���
{
    return year;
}

int Date::getMonth()//��ȡ�·�
{
    return month;
}
int Date::getDay()//��ȡ��
{
    return day;
}

void Date::setDate(int y,int m,int d)//�޸�����
{
    year=y;
    month=m;
    day=d;
    legal();
}

bool Date::isLeapYear()//�Ƿ�Ϊ����
{
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Date::nextDay()//��һ������
{
    int ny,nm,nd;
    if(month==12&&day==31)
    {
        ny=year+1;
        nm=1;
        nd=1;
    }
    else if((month==4||month==6||month==9||month==11)&&day==30)
    {
        ny=year;
        nm=month+1;
        nd=1;
    }
    else if((month==1||month==3||month==5||month==7||month==8||month==10)&&day==31)
    {
        ny=year;
        nm=month+1;
        nd=1;
    }
    else if(month==2)
    {
        if(isLeapYear())
        {
        if(day==29)
        {
            ny=year;
            nm=month+1;
            nd=1;
        }
        }
        else if(day==28)
        {
            ny=year;
            nm=month+1;
            nd=1;
        }
        else
        {
            ny=year;
            nm=month;
            nd=day+1;
        }
    }
    else
    {
        ny=year;
        nm=month;
        nd=1;
    }
    cout<<"Next day:"<<ny<<"/"<<nm<<"/"<<nd<<endl;
}

void Date::print()//��ӡ����
{
    cout<<setfill('0')<<year<<"/"<<month<<"/"<<day<<endl;
}
void Date::printisLeapYear()//��ӡ�Ƿ�Ϊ����
{
    if(isLeapYear())
    cout<<year<<"/"<<month<<"/"<<day<<" "<<"is leap year"<<endl;
    else
    cout<<year<<"/"<<month<<"/"<<day<<" "<<"is not leap year"<<endl;
}
void Date::legal()//�����Ƿ�Ϸ�
{
    if(year<0) year=2015;
    if(month<0||month>12) month=3;
    if(day<0||day>31) day=20;
    else if(month==2)
    {
        if(isLeapYear())
        {
            if(day>29) day=20;
        }
        else if(day>28)
            day=20;
    }
    else if((month==4||month==6||month==9||month==11)&&day>30)
        day=20;
}

