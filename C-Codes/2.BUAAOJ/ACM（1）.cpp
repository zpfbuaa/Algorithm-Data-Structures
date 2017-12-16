#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>

#define MAX_SIZE 1000000000
using namespace std;

int a,b,c;
long long flag;
int ans[1000];

int total(long long x)
{
    int num=0;
    while(x!=0)
    {
        num=num+x%10;
        x=x/10;
    }
    return num;
}

long long match(int a,int b,int c,int i)
{
    int x=1;
    for (int j=1;j<=a;j++)
        x=x*i;
    x=x*b;
    x=x+c;
    return x;
}
int main()
{
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        int rear=0;
        for(int i=1;;i++)
        {
            flag=match(a,b,c,i);
            if((flag>1e9)||(i>100)) break;
            if(flag>0)
            {
                if(total(flag)==i)
                ans[++rear]=flag;
            }
        }

        if(rear==0)
            printf("0\n");
        else
        {
             printf("%d\n",rear);
            for(int i=1;i<=rear;i++)
                printf("%d ",ans[i]);
            printf("\n");
        }
    }
}
