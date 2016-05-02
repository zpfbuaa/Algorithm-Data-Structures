#include<iostream>
#include<cstdio>
#define MAX_SIZE 100010
int a[MAX_SIZE];
int b[MAX_SIZE];
using namespace std; 

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	 scanf("%d",&a[i]);
	 b[i]=i;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
	   cout<<a[i]<<" "; 
	}
	for(int i=n;i>=1;i--)
	{
		if(i==n)
		printf("-1\n");
		else
		{
			int counter=0;
			for(int j=i;j<=n;j++)
			{
			if(a[i]<a[j])
			{
			printf("%d\n",a[j]);
			break;
			}
			else
			
			}
	    } 
	}
	
	
}
