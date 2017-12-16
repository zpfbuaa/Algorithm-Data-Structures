#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
long long x[100];
using namespace std;
int main()
{
	long long a,b,c;
	while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF)
 {
		long long MAX_SIZE;
	    long long j=0;
		memset(x,0,sizeof(x));
		switch(a)
		{
			case 1:
				{
					if(b+c<=0)
					MAX_SIZE=2;
					else
					MAX_SIZE=b+c+22222;
				}
			case 2:
				MAX_SIZE=6666666;break;
			case 3:
				MAX_SIZE=666666;break;
			case 4:
				MAX_SIZE=666666;break;
			case 5:
				MAX_SIZE=666666;break;
		}
		for(long long n=1;n<=MAX_SIZE;n++)
		{
		long long i=n;
		long long ans=0;
		  while(i!=0)
		 {
			ans+=i%10;
			i=i/10;
		 }
	      if(b*pow(ans,a)+c==n)
		 {
			x[++j]=n;
		 }
		}
		if(j==0)
		printf("0\n");
		else
		{
			printf("%lld\n",j);
			for(long long i=1;i<=j;i++)
			{
				printf("%lld ",x[i]);
			}
			printf("\n");
		}

 }

}
