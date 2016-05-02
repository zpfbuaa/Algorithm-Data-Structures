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

void color(int a)//颜色的选择
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
				  cout<<i<<"是素数 "<<j<<"是素数"<<endl;
//				  cout<<"当输入的数为"<<x<<"时，该猜想成立"<<endl;
				 }
//				 if(ans!=0)
//				 break;
			}
		}
		if(ans!=0)
		cout<<"当输入的数为"<<x<<"时，该猜想成立"<<endl;
		color(5);
		cout<<"请输入一个大于5的偶数"<<endl;
}

int main()
{
	long long x;
	color(5);
	cout<<"请输入一个大于5的偶数"<<endl;
	while(cin>>x)
	{
		if(x%2==1||x<=5)
		{
		 color(12);
		 cout<<"输入有误，请重新输入"<<endl;
		 cout<<"请输入一个大于5!! 的 偶数!!"<<endl;
		}
		else
		{
		 color(10);
		long long i,j;
		print(i,j,x);
	    }
    }
}
