//����1-17 ����쳲��������ĵ�����
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
		cout<<"��"<<n<<"����:"<<Fib(n)<<endl;
	}
}











