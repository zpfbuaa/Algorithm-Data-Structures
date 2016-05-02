//程序1-17 计算斐波那契数的迭代法
#include<iostream>
#include<cstdio>
using namespace std;

int Fib(int k)
{
	if(k<2)return k;
	int f0,f1,i,fk;
	f0=0,f1=1;
	for(int i=2;i<=k;i++)
	{
		fk=f0+f1;
		f0=f1;f1=fk;
	}
	return fk;
}

int main()
{
	int n;
	while(cin>>n)
	{
		cout<<"第"<<n<<"项是:"<<Fib(n)<<endl;
	}
}











