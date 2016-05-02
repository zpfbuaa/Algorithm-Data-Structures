#include<cstdio>
#include<limits.h>
double e[25][25],w[25][25];
double pi[25],qi[25];
int n;
void DP()
{
    for(int i=0; i<=n; i++)
        w[i+1][i] = e[i+1][i]=qi[i];
    for(int i=0; i<n; i++)
        for(int j=1; j<=n-i; j++)
        {
            int temp=j+i;
            e[j][temp]=INT_MAX;
            w[j][temp]=w[j][temp-1]+pi[temp]+qi[temp];
            for(int k=j; k<=temp; k++)
            {
                double t=e[j][k-1]+e[k+1][temp]+w[j][temp];
                if(t<e[j][temp])                     e[j][temp]=t;
            }
        }
}
int main()
{
    while(~scanf("%d",&n))
    {
        for(int i=1; i<=n; i++)             scanf("%lf",&pi[i]);
        for(int i=0; i<=n; i++)             scanf("%lf",&qi[i]);
        DP();
        printf("%.3lf\n",e[1][n]);
    }
}
