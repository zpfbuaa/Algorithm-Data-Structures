#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=0,c=0,ans=0;
	while(cin>>n)
	{
		cin>>a>>b;
		ans=a-b;
		if(a<b)
		a=b;
		for(int i=1;i<=n-2;i++)
		{
			cin>>c;
			if(a-c>ans)
			ans=a-c;
			if(c>a)
			a=c;
		}
		cout<<ans<<endl;
	}
}
