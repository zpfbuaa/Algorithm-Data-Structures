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
        cout<<"0���ֵĴ���Ϊ:"<<ans0<<endl;
        cout<<"1���ֵĴ���Ϊ:"<<ans1<<endl;
        cout<<"2���ֵĴ���Ϊ:"<<ans2<<endl;
        cout<<"3���ֵĴ���Ϊ:"<<ans3<<endl;
        cout<<"4���ֵĴ���Ϊ:"<<ans4<<endl;
        cout<<"5���ֵĴ���Ϊ:"<<ans5<<endl;
        cout<<"6���ֵĴ���Ϊ:"<<ans6<<endl;
        cout<<"7���ֵĴ���Ϊ:"<<ans7<<endl;
        cout<<"8���ֵĴ���Ϊ:"<<ans8<<endl;
        cout<<"9���ֵĴ���Ϊ:"<<ans9<<endl;
    }
}
