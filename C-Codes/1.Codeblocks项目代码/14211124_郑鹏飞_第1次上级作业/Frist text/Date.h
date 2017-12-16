#ifndef DATE_H
#define DATE_H

//C++第一次上级 2015/3/20 Fri
//14211124_郑鹏飞

class Date
{
    public:
        Date();         //-------------------------> 构造函数
        Date(Date &d);  //-------------------------> 拷贝构造函数
        int getYear();  //-------------------------> get年份
        int getMonth(); //-------------------------> get月份
        int getDay();   //-------------------------> get日
        void setDate(int,int,int);  //-------------> set函数，修改日期
        bool isLeapYear();          //-------------> 判断是否为闰年
        void nextDay();  //------------------------> 求下一天的日期
        void print();    //------------------------> 打印日期
        void printisLeapYear();     //-------------> 打印是否为闰年
    private:
    void legal();//-----------> 日期是否合法
    int year;    //-----------> 年
    int month;   //-----------> 月
    int day;     //-----------> 日
};

#endif // DATE_H
