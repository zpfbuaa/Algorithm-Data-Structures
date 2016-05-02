//程序1-22（计算n！的递归算法）
#include<iostream>
#include<cstdio>
using namespace std;

long long Fact(long long n)
{
	if(n<=0)return 1;
	else return Fact(n-1)*n;
}

int main()
{
	long long n;
	while(~scanf("%d",&n))
	{
		printf("%d的阶乘为:%d\n",n,Fact(n));
	}
}



