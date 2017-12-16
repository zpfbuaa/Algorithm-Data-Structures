#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long x,y;
	while(scanf("%lld%lld",&x,&y)!=EOF)
	{
		if(x>y)
		swap(x,y);
		for(;x!=0||y!=0;)
		{
			if(x==y)
			{
				printf("%lld\n",x);
				break;
			}
			else
			{
			y/=2;
			if(x>y)
	     	swap(x,y);
	       }
		}
	}
}
