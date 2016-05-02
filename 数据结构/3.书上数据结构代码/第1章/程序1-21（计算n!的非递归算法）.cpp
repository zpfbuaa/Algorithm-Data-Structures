//程序1-21（计算n!的非递归算法）
#include<iostream>
#include<cstdio>
using namespace std;

int Fact(long long n)
{
	long long product=1;
	for(int i=1;i<=n;i++)
	{
		product=i*product;
	}
	return product;
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		printf("%d的阶乘是:%d\n",n,Fact(n));
	}
}



