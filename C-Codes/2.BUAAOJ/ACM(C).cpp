#include<iostream>
#include<cstdio>
#define MAX_SIZE 100010
long long x[MAX_SIZE];
long long y[MAX_SIZE];
using namespace std;

int main()
{
	int n,k;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
	   for(int i=1;i<=n;i++)
	   {
		 scanf("%lld",&x[i]);
	   }
	   for(int i=1;i<=n-k+1;i++)
	   {
		 for(int j=i;j<=k;j++)
		 {
		 	for(int l=j;l<=k-i;l++)
		 	{
		 		if(x[l]<x[l+1])
		 		swap(x[l],x[l+1]);
			 }
			 for(int m=1;m<=k;m++)
			 {
			 	y[m]=x[j];
			 }
			 for(int a=1;a<=k;a++)
			 {
				for(int b=)
			 }
		 }
	   }
	}
}
