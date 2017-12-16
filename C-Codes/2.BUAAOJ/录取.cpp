#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <string>
#include <windows.h>
#define maxszie 110;
using namespace std;

char Uni[10010];
int main()
{
    cout<<"- - - - - - - - - - -录取- - - - - - - - - - \n\n";
    int num;
    cout<<"请输入学校个数(不超过26个): "<<endl;
    while(cin>>num)
    {
       if(num>=1&&num<=26)
        break;
       else
        cout<<"输入不合理,请重新输入:";
    }

    for(int i=1;i<=num;i++)
    {
        Uni[i]=char(64+i);
    }
    cout<<"学校分别为:"<<endl;
    for(int i=0;i<num;i++)
    cout<<Uni[i]<<" ";
    cout<<endl;
    int stu;
    cout<<"请输入学生个数"<<endl;
    while(cin>>stu)
    {
        if(stu>=1)
            break;
        else
        {
            cout<<"输入不合理,请重新输入学生人数"<<endl;
        }
    }
    int zhi;
    cout<<"请输入平行志愿个数"<<endl;
    while(cin>>zhi)
    {
        if(zhi>0)
            break;
        else
        {
            cout<<"输入有误,请重新输入"<<endl;
        }
    }
    cout<<"下面请输入学生信息"<<endl;
    Sleep(100);
    system("CLS");
    cout<<"请依此输入学生信息"<<endl;
//    for(int i=1;i<=stu;i++)
//    {
//
//    }
}























