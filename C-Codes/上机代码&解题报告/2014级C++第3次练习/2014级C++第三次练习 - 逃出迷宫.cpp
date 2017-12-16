#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		long long x=1;
		for(int i=1;i<=n-1;i++)
		{
			x=x*x+1;
			if(x>100)
			x=x%100;
		}
		if(x<10)
		cout<<"0"<<endl;
		else
		cout<<(x/10)%10<<endl;
	}
}
