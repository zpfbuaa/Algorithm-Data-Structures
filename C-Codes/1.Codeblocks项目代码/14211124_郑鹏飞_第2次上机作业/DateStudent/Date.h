#ifndef DATE_H
#define DATE_H


class Date
{
public:
    void print();   //��ӡ����������ǰ���ڴ�ӡ������̨

    void nextDay();     //����ǰ���ڼ�1������һ����
    bool isLeapYear();  //�жϵ�ǰ����Ƿ�Ϊ����

    void setDate(int y, int m, int d);//set��������������
    int getYear()
    {
        return year;   //get������������
    }
    int getMonth()
    {
        return month;   //get������������
    }
    int getDay()
    {
        return day;   //get������������
    }

    Date(int y, int m, int d);//���캯��
    Date();//ȱʡ���캯��
    Date(const Date &d);  //�������캯��
    virtual ~Date();//����������
private:
    bool checkDate();//���ߺ�������鵱ǰ���������Ƿ�Ϸ���������Ϸ������޸�ΪĬ�ϵĺϷ�ֵ��������false;���򷵻�true
    int maxDay();//���ߺ��������ص�ǰ����±����µ��������

    int year;   //��
    int month;  //��
    int day;    //��
};

#endif // DATE_H
