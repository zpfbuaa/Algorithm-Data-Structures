#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,s;
    char a[10010]={};
    while(scanf("%d %d %s",&n,&s,a)==3)
    {
        int biao=0;
        for(int i=1;i<=n-s;i++)
        {
            char t=127;
            for(int j=biao;j<=s-1+i;j++)
            {
                if(t>a[j])
                {
                    if((a[j]!='0'||i>1))
                    {
                        t=a[j];
                        biao=j+1;
                    }
                }
            }
            printf("%c",t);
        }
        printf("\n");
    }
}
