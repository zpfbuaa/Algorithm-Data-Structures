#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cin.get();
    while(T--)
    {
        string str;
        getline(cin,str);
        int len=str.length();
        int head=0,tail=len-1;
        char temp;

        while(head<tail)
        {
            temp=str[tail];
            str[tail]=str[head];
            str[head]=temp;
            head++;
            tail--;
        }

        int h=0,t=0;
        while(t<len)
        {
            if(str[t]==' ')
            {
                head=h,tail=t-1;
                while(head<tail)
                {
                    temp=str[head];
                    str[head]=str[tail];
                    str[tail]=temp;
                    head++;
                    tail--;
                }
                h=t+1;
            }
            t++;
        }

        head=h,tail=t-1;
//        cout<<head<<tail<<endl;
        while(head<tail)
        {
            temp=str[head];
            str[head]=str[tail];
            str[tail]=temp;
            head++;
            tail--;
        }
        for(int i=0; i<len; i++)
            cout<<str[i];
        cout<<endl;
    }
}
