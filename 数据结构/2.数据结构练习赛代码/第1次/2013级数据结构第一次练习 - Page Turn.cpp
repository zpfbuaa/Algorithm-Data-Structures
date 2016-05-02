#include<iostream>
using namespace std;
void pageTurn(int n,int p,int k)
{
	if(p-k>1&&p+k<n)
	{
	cout<<"<< "; 
	for(int i=p-k;i<=p+k;i++)
	 {
		if(i==p)
		cout<<"("<<p<<") ";
		else
		cout<<i<<" "; 
	 }
	 cout<<">>";
	} 
	if(p-k<=1&&p+k<n)
	{
		for(int i=1;i<=p+k;i++)
		{
			if(i==p)
			cout<<"("<<p<<") ";
			else
			cout<<i<<" ";
		}
		cout<<">>";
	}
	if(p-k>1&&p+k>=n)
	{
	  	cout<<"<< "; 
	  	for(int i=p-k;i<=n;i++)
	  {
		if(i==p)
		cout<<"("<<p<<") ";
		else
		cout<<i<<" "; 
	  }
	}
	if(p-k<=1&&p+k>=n)
	{
	  	for(int i=1;i<=n;i++)
	  {
		if(i==p)
		cout<<"("<<p<<") ";
		else
		cout<<i<<" "; 
	  }
	}
}
int main()
{
	int n,p,k;
	while(cin>>n>>p>>k)
	{
		pageTurn(n,p,k);
		cout<<endl;
	}
}
