//程序1-18 计算斐波那契书的递归算法
#include<iostream>
#include<cstdio>
using namespace std;

int Fib(long long k)
{
	if(k<1)return 0;
	else if(k==1||k==2)return k;
	else return Fib(k-1)+Fib(k-2);
}

int main()
{
	int n;
	while(~scanf("%lld",&n))
	{
		cout<<"第"<<n<<"项是:"<<Fib(n)<<endl;
	}
}
