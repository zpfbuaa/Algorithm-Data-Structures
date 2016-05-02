//程序3-15（计算阶乘的递归算法）
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

long Factorial(long long n)
{
	if(n<=0)return 1;
	else return n*Factorial(n-1);
}

int main()
{
	long long n;
	while(~scanf("%I64d",&n))
	{
		printf("%I64d\n",Factorial(n));
	}
}
