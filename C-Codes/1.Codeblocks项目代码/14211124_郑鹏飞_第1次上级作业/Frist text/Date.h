#ifndef DATE_H
#define DATE_H

//C++��һ���ϼ� 2015/3/20 Fri
//14211124_֣����

class Date
{
    public:
        Date();         //-------------------------> ���캯��
        Date(Date &d);  //-------------------------> �������캯��
        int getYear();  //-------------------------> get���
        int getMonth(); //-------------------------> get�·�
        int getDay();   //-------------------------> get��
        void setDate(int,int,int);  //-------------> set�������޸�����
        bool isLeapYear();          //-------------> �ж��Ƿ�Ϊ����
        void nextDay();  //------------------------> ����һ�������
        void print();    //------------------------> ��ӡ����
        void printisLeapYear();     //-------------> ��ӡ�Ƿ�Ϊ����
    private:
    void legal();//-----------> �����Ƿ�Ϸ�
    int year;    //-----------> ��
    int month;   //-----------> ��
    int day;     //-----------> ��
};

#endif // DATE_H
