#include <cstdio>
#include <cmath>
#include <cstring>
#define N 1000010
bool used[N];

long long gcd(long long a , long long b)
{ return b==0 ? a: gcd(b,a%b); }

int main()
{
    long long n,a,b,c;
    long long count1,count2;
    while(scanf("%lld",&n)!=EOF)
    {
        count1=count2=0;
        memset(used,0,sizeof(used));
        long long m=(long long)sqrt(n+0.5);
        for(long long t=1; t<=m; t+=2)
            for(long long s=t+2; s*t<=n; s+=2)
                if(gcd(s,t)==1)  //s>t>=1且s与t互质
                {
                    a=s*t;          //奇数
                    b=(s*s-t*t)/2;  //偶数
                    c=(s*s+t*t)/2;  //奇数
                    if(c<=n)        //在n范围内的PPT
                    {
                        count1++;
                        //printf("本原勾股数组：%lld %lld %lld\n",a,b,c);
                        if(!used[a]) { count2++; used[a]=1; }
                        if(!used[b]) { count2++; used[b]=1; }
                        if(!used[c]) { count2++; used[c]=1; }

                        for(int j=2; c*j<=n; j++)  //j是倍数
                        {
                            if(!used[a*j]) { count2++; used[a*j]=1; }
                            if(!used[b*j]) { count2++; used[b*j]=1; }
                            if(!used[c*j]) { count2++; used[c*j]=1; }
                        }
                    }
                }
            printf("%lld %lld\n",count1,n-count2);
    }
    return 0;
}
