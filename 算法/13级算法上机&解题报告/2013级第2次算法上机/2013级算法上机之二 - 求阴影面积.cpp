#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        double x,y,ans=0,flag;
        int n=9e5+111;
        srand(time(NULL));
        for(int i=n;i>0;i--)
        {
            x=rand()%5000/2500.00000-1;
            y=rand()%5000/2500.00000-1;
            flag=a*x*x+b*y*y+c*x*y+d*x+e*y-f;
            if(flag<=0)
                ans++;
        }
        printf("%.2f\n",ans/n);
    }
}




