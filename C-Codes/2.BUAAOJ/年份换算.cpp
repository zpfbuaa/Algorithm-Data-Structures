#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
string t[11];
string d[13];
int my_find(int ans1,int ans2)
{
    if((ans1==4&&ans2==4)||(ans1==5&&ans2==5))
        cout<<"海中金";
    else if((ans1==6&&ans2==6)||(ans1==7&&ans2==7))
        cout<<"炉中火";
    else if((ans1==8&&ans2==8)||(ans1==9&&ans2==9))
        cout<<"大林木";
    else if((ans1==10&&ans2==10)||(ans1==1&&ans2==11))
        cout<<"路旁土";
    else if((ans1==2&&ans2==12)||(ans1==3&&ans2==1))
        cout<<"剑锋金";
    else if((ans1==4&&ans2==2)||(ans1==5&&ans2==3))
        cout<<"山头火";
    else if((ans1==6&&ans2==4)||(ans1==7&&ans2==5))
        cout<<"涧下水";
    else if((ans1==8&&ans2==6)||(ans1==9&&ans2==7))
        cout<<"城头土";
    else if((ans1==10&&ans2==8)||(ans1==1&&ans2==9))
        cout<<"白剌金";
    else if((ans1==2&&ans2==10)||(ans1==3&&ans2==11))
        cout<<"杨柳木";
    else if((ans1==4&&ans2==12)||(ans1==5&&ans2==1))
        cout<<"泉中水";
    else if((ans1==6&&ans2==2)||(ans1==7&&ans2==3))
        cout<<"屋上土";
    else if((ans1==8&&ans2==4)||(ans1==9&&ans2==5))
        cout<<"霹雳火";
    else if((ans1==10&&ans2==6)||(ans1==1&&ans2==7))
        cout<<"松柏木";
    else if((ans1==2&&ans2==8)||(ans1==3&&ans2==9))
        cout<<"长流水";
    else if((ans1==4&&ans2==10)||(ans1==5&&ans2==11))
        cout<<"沙中金";
    else if((ans1==6&&ans2==12)||(ans1==7&&ans2==1))
        cout<<"山下火";
    else if((ans1==8&&ans2==2)||(ans1==9&&ans2==3))
        cout<<"平地木";
    else if((ans1==10&&ans2==4)||(ans1==1&&ans2==5))
        cout<<"壁上土";
    else if((ans1==2&&ans2==6)||(ans1==3&&ans2==7))
        cout<<"金箔金";
    else if((ans1==4&&ans2==8)||(ans1==5&&ans2==9))
        cout<<"须灯火";
    else if((ans1==6&&ans2==10)||(ans1==7&&ans2==11))
        cout<<"天河水";
    else if((ans1==8&&ans2==12)||(ans1==9&&ans2==1))
        cout<<"大驿土";
    else if((ans1==10&&ans2==2)||(ans1==1&&ans2==3))
        cout<<"簪剑金";
    else if((ans1==2&&ans2==4)||(ans1==3&&ans2==5))
        cout<<"桑石木";
    else if((ans1==4&&ans2==6)||(ans1==5&&ans2==7))
        cout<<"大溪水";
    else if((ans1==6&&ans2==8)||(ans1==7&&ans2==9))
        cout<<"沙中土";
    else if((ans1==8&&ans2==10)||(ans1==9&&ans2==11))
        cout<<"天上火";
    else if((ans1==10&&ans2==12)||(ans1==1&&ans2==1))
        cout<<"石榴木";
    else if((ans1==2&&ans2==2)||(ans1==3&&ans2==3))
        cout<<"大海水";
}
int main()
{
    t[4] ="甲";
    t[5] ="乙";
    t[6] ="丙";
    t[7] ="丁";
    t[8] ="戊";
    t[9] ="己";
    t[10]="庚";
    t[1] ="辛";
    t[2] ="壬";
    t[3] ="癸";
    d[4] ="子";
    d[5] ="丑";
    d[6] ="寅";
    d[7] ="卯";
    d[8] ="辰";
    d[9] ="巳";
    d[10]="午";
    d[11]="未";
    d[12]="申";
    d[1] ="酉";
    d[2] ="戌";
    d[3] ="亥";
    cout<<"- - - - - - - - - - 年份换算 - - - - - - - - - -"<<endl;
    cout<<"请输入年份:";
    long long y;
    while(1)
    {
        cin>>y;
        long long ans1=y%60%10;
        long long ans2=y%60%12;
        if(ans1==0)ans1=10;
        if(ans2==0)ans2=12;
        cout<<t[ans1]<<d[ans2]<<"年   ";
        my_find(ans1,ans2);
        cout<<"\n请输入年份:";
    }


}
