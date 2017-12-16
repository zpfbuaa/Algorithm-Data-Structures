#include<iostream>
#include<cstdio>
int shu[500001];
using namespace std;
int main()
{
    int n,m,i,j,num;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        shu[0]=0;
        for(int k=1;k<=n;k++)
        {
            scanf("%d",&num);
            shu[k]=shu[k-1]+num;
        }
        for(int l=0;l<m;l++)
        {
            scanf("%d%d",&i,&j);
            printf("%d\n",shu[j]-shu[i-1]);
        }
        printf("\n");
    }
}
