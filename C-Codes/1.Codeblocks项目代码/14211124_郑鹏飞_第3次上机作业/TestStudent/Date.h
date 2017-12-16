#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;

class Date
{
    friend ostream& operator<<(ostream& out,const Date& d);//------��Ԫ��������������������
    friend istream& operator>>(istream& in,Date& d);//-------------��Ԫ���������������������
    public:
//        void print() const ;   //--------------------------------��ӡ����������ǰ���ڴ�ӡ������̨
        Date& operator++();//
        Date operator++( int );
        void nextDay();     //-------------------------------------����ǰ���ڼ�1������һ����
        bool isLeapYear() const ;  //------------------------------�жϵ�ǰ����Ƿ�Ϊ����

        void setDate(int y, int m, int d);//-----------------------set��������������
        int getYear()const{return year;}     //--------------------get������������
        int getMonth()const{return month;}   //--------------------get������������
        int getDay()const{return day;}       //--------------------get������������

        Date(int y, int m, int d);//-------------------------------���캯��
        Date();                   //-------------------------------ȱʡ���캯��
        Date(const Date &d);  //-----------------------------------�������캯��
        virtual ~Date();//-----------------------------------------����������
    protected:
    private:
        bool checkDate();//--------------------���ߺ�������鵱ǰ���������Ƿ�Ϸ���
        //-------------------------------------������Ϸ������޸�ΪĬ�ϵĺϷ�ֵ��������false;���򷵻�true
        int maxDay() const ;//-----------------���ߺ��������ص�ǰ����±����µ��������

        int year;   //��
        int month;  //��
        int day;    //��
};

#endif // DATE_H
