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
    cout<<"- - - - - - - - - - -¼ȡ- - - - - - - - - - \n\n";
    int num;
    cout<<"������ѧУ����(������26��): "<<endl;
    while(cin>>num)
    {
       if(num>=1&&num<=26)
        break;
       else
        cout<<"���벻����,����������:";
    }

    for(int i=1;i<=num;i++)
    {
        Uni[i]=char(64+i);
    }
    cout<<"ѧУ�ֱ�Ϊ:"<<endl;
    for(int i=0;i<num;i++)
    cout<<Uni[i]<<" ";
    cout<<endl;
    int stu;
    cout<<"������ѧ������"<<endl;
    while(cin>>stu)
    {
        if(stu>=1)
            break;
        else
        {
            cout<<"���벻����,����������ѧ������"<<endl;
        }
    }
    int zhi;
    cout<<"������ƽ��־Ը����"<<endl;
    while(cin>>zhi)
    {
        if(zhi>0)
            break;
        else
        {
            cout<<"��������,����������"<<endl;
        }
    }
    cout<<"����������ѧ����Ϣ"<<endl;
    Sleep(100);
    system("CLS");
    cout<<"����������ѧ����Ϣ"<<endl;
//    for(int i=1;i<=stu;i++)
//    {
//
//    }
}























