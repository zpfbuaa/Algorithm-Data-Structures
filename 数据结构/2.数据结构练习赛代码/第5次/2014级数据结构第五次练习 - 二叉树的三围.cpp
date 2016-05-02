#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>
#define Maxsize 1010

int num[Maxsize];
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int f=0;
        memset(num,0,sizeof(num));
        string s;

        cin>>s;
        int len=s.size();
        for(int i=0; i<len; i++)
        {
            switch(s[i])
            {
            default:
                while(s[i]!='('&&s[i]!=','&&s[i]!=')')
                {
                    i++;
                }
                num[f]++;
                i=i-1;
                break;
            case '(':
                f++;
                break;
            case ',':
                break;
            case ')':
                f--;
                break;
            }
        }
        int ans=0,pos;
        int j;
        for(int j=0;num[j]>0;j++)
        {
            if(num[j]>ans)
            {
                ans=num[j];
                pos=j;
            }
        }
        if(pos!=0&&pos!=j-1)
            cout<<num[pos-1]<<" "<<num[pos]<<" "<<num[pos+1]<<endl;
        else
            cout<<"Invalid tree!"<<endl;
    }
    return 0;

}
