#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

const int MAXN=1000+10;
char str[MAXN];
string strs;

int main()
{
    while(gets(str))
    {
        int l=strlen(str);
        int jud,jud2,ans=0;
        for(int i=1; i<=l-1; i++)
        {
            if(l%i==0)
            {
                for(int k=0; k<l/i-1; k++)
                {
                    jud=0;
                    for(int j=0+i*k; j<(k+1)*i; j++)
                    {
                        if(str[j]==str[i+j]) jud++;
                        if(str[j]!=str[i+j]) jud=0;
                    }
                    if(jud==0)
                    {
                        ans=0;
                        break;
                    }
                    else ans=i;
                }
                if(ans==i) break;
            }
        }
        if(ans==0) printf("%d\n",l);
        else printf("%d\n",ans);
    }
}


