//����1-22������n���ĵݹ��㷨��
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
		printf("%d�Ľ׳�Ϊ:%d\n",n,Fact(n));
	}
}



