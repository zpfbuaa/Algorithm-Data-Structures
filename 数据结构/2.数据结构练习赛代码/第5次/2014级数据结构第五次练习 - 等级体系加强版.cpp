#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>
#define Maxsize 30010
char ch[Maxsize];

using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int ans=0;
        scanf("%s",&ch);
        int len=strlen(ch);
        for(int i=0;i<len;i++)
        {
            switch(ch[i])
            {
            default:
                while(ch[i]!='('&&ch[i]!=','&&ch[i]!=')')
                {
                    i++;
                }
                if(ch[i]!='('||ch[i]=='('&&ch[i+1]==','&&ch[i+2]==')')
                    ans++;
                    i=i-1;
            case '(':break;
            case ',':break;
            case ')':break;
            }
        }
        printf("%d\n",ans);
    }
}
