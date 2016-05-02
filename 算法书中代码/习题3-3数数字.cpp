#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int ans0=0,ans1=0,ans2=0,ans3=0,ans4=0,ans5=0,ans6=0,ans7=0,ans8=0,ans9=0;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            switch(s[i])
            {
                case '0':ans0++;break;
                case '1':ans1++;break;
                case '2':ans2++;break;
                case '3':ans3++;break;
                case '4':ans4++;break;
                case '5':ans5++;break;
                case '6':ans6++;break;
                case '7':ans7++;break;
                case '8':ans8++;break;
                case '9':ans9++;break;
            }
        }
        cout<<"0出现的次数为:"<<ans0<<endl;
        cout<<"1出现的次数为:"<<ans1<<endl;
        cout<<"2出现的次数为:"<<ans2<<endl;
        cout<<"3出现的次数为:"<<ans3<<endl;
        cout<<"4出现的次数为:"<<ans4<<endl;
        cout<<"5出现的次数为:"<<ans5<<endl;
        cout<<"6出现的次数为:"<<ans6<<endl;
        cout<<"7出现的次数为:"<<ans7<<endl;
        cout<<"8出现的次数为:"<<ans8<<endl;
        cout<<"9出现的次数为:"<<ans9<<endl;
    }
}
