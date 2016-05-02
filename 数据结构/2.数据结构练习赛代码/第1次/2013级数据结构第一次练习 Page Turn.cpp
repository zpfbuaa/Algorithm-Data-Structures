//#include<cstdio>
//int main()
//{
//    int n,p,k,start,end;
//    while(~scanf("%d%d%d",&n,&p,&k))
//    {
//        start=1+(p-k-1)*((p-k)>0);
//        end=n+(p+k-n)*(!(p+k>n));
//        if(start!=1)
//            printf("<< ");
//        for(int i=start;i<=end;i++)
//            (i==p)?printf("(%d) ",i):printf("%d ",i);
//        if(end!=n) printf(">>");
//        printf("\n");
//    }
//}
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,p,k;
    while(~scanf("%d%d%d",&n,&p,&k))
    {
        if(p-k>1)
            printf("<< ");
        for(int i=max(1,p-k); i<=min(n,p+k); ++i)
            printf(i==p?"(%d) ":"%d ",i);
        if(p+k<n)
            printf(">>");
        putchar('\n');
    }
}
