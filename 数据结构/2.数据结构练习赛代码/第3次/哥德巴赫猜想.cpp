#include<iostream>
#include<windows.h>
using namespace std;
bool isPrime(long long x)
{
	if(x==1) return false;
    else
    {
    	for(int i=2;i<x;i++)
				if(x%i==0)
				return false;
		return true;
	}
	
}

void color(int a)//��ɫ��ѡ��
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}

void print(long long i,long long j,long long x)
{
	int ans=0;
		for(i=2;i<x;i++)
		{
			for(j=i;j<x;j++)
			{
                color(j%4);
				if(isPrime(i)&&isPrime(j)&&i+j==x)
				 {
 	              ans++;
				  cout<<x<<"="<<i<<"+"<<j<<endl;
				  cout<<i<<"������ "<<j<<"������"<<endl;
//				  cout<<"���������Ϊ"<<x<<"ʱ���ò������"<<endl;
				 }
//				 if(ans!=0)
//				 break;
			}
		}
		if(ans!=0)
		cout<<"���������Ϊ"<<x<<"ʱ���ò������"<<endl;
		color(5);
		cout<<"������һ������5��ż��"<<endl;
}

int main()
{
	long long x;
	color(5);
	cout<<"������һ������5��ż��"<<endl;
	while(cin>>x)
	{
		if(x%2==1||x<=5)
		{
		 color(12);
		 cout<<"������������������"<<endl;
		 cout<<"������һ������5!! �� ż��!!"<<endl;
		}
		else
		{
		 color(10);
		long long i,j;
		print(i,j,x);
	    }
    }
}
