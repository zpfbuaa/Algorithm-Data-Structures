#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
string t[11];
string d[13];
int my_find(int ans1,int ans2)
{
    if((ans1==4&&ans2==4)||(ans1==5&&ans2==5))
        cout<<"���н�";
    else if((ans1==6&&ans2==6)||(ans1==7&&ans2==7))
        cout<<"¯�л�";
    else if((ans1==8&&ans2==8)||(ans1==9&&ans2==9))
        cout<<"����ľ";
    else if((ans1==10&&ans2==10)||(ans1==1&&ans2==11))
        cout<<"·����";
    else if((ans1==2&&ans2==12)||(ans1==3&&ans2==1))
        cout<<"�����";
    else if((ans1==4&&ans2==2)||(ans1==5&&ans2==3))
        cout<<"ɽͷ��";
    else if((ans1==6&&ans2==4)||(ans1==7&&ans2==5))
        cout<<"����ˮ";
    else if((ans1==8&&ans2==6)||(ans1==9&&ans2==7))
        cout<<"��ͷ��";
    else if((ans1==10&&ans2==8)||(ans1==1&&ans2==9))
        cout<<"���ݽ�";
    else if((ans1==2&&ans2==10)||(ans1==3&&ans2==11))
        cout<<"����ľ";
    else if((ans1==4&&ans2==12)||(ans1==5&&ans2==1))
        cout<<"Ȫ��ˮ";
    else if((ans1==6&&ans2==2)||(ans1==7&&ans2==3))
        cout<<"������";
    else if((ans1==8&&ans2==4)||(ans1==9&&ans2==5))
        cout<<"������";
    else if((ans1==10&&ans2==6)||(ans1==1&&ans2==7))
        cout<<"�ɰ�ľ";
    else if((ans1==2&&ans2==8)||(ans1==3&&ans2==9))
        cout<<"����ˮ";
    else if((ans1==4&&ans2==10)||(ans1==5&&ans2==11))
        cout<<"ɳ�н�";
    else if((ans1==6&&ans2==12)||(ans1==7&&ans2==1))
        cout<<"ɽ�»�";
    else if((ans1==8&&ans2==2)||(ans1==9&&ans2==3))
        cout<<"ƽ��ľ";
    else if((ans1==10&&ans2==4)||(ans1==1&&ans2==5))
        cout<<"������";
    else if((ans1==2&&ans2==6)||(ans1==3&&ans2==7))
        cout<<"�𲭽�";
    else if((ans1==4&&ans2==8)||(ans1==5&&ans2==9))
        cout<<"��ƻ�";
    else if((ans1==6&&ans2==10)||(ans1==7&&ans2==11))
        cout<<"���ˮ";
    else if((ans1==8&&ans2==12)||(ans1==9&&ans2==1))
        cout<<"������";
    else if((ans1==10&&ans2==2)||(ans1==1&&ans2==3))
        cout<<"������";
    else if((ans1==2&&ans2==4)||(ans1==3&&ans2==5))
        cout<<"ɣʯľ";
    else if((ans1==4&&ans2==6)||(ans1==5&&ans2==7))
        cout<<"��Ϫˮ";
    else if((ans1==6&&ans2==8)||(ans1==7&&ans2==9))
        cout<<"ɳ����";
    else if((ans1==8&&ans2==10)||(ans1==9&&ans2==11))
        cout<<"���ϻ�";
    else if((ans1==10&&ans2==12)||(ans1==1&&ans2==1))
        cout<<"ʯ��ľ";
    else if((ans1==2&&ans2==2)||(ans1==3&&ans2==3))
        cout<<"��ˮ";
}
int main()
{
    t[4] ="��";
    t[5] ="��";
    t[6] ="��";
    t[7] ="��";
    t[8] ="��";
    t[9] ="��";
    t[10]="��";
    t[1] ="��";
    t[2] ="��";
    t[3] ="��";
    d[4] ="��";
    d[5] ="��";
    d[6] ="��";
    d[7] ="î";
    d[8] ="��";
    d[9] ="��";
    d[10]="��";
    d[11]="δ";
    d[12]="��";
    d[1] ="��";
    d[2] ="��";
    d[3] ="��";
    cout<<"- - - - - - - - - - ��ݻ��� - - - - - - - - - -"<<endl;
    cout<<"���������:";
    long long y;
    while(1)
    {
        cin>>y;
        long long ans1=y%60%10;
        long long ans2=y%60%12;
        if(ans1==0)ans1=10;
        if(ans2==0)ans2=12;
        cout<<t[ans1]<<d[ans2]<<"��   ";
        my_find(ans1,ans2);
        cout<<"\n���������:";
    }


}
