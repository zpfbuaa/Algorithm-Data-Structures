//程序1-23(在数组A中删除重复的整数)
#include<iostream>
#include<cstdio>
#include<limits.h>
#define maxsize 1010
#define delTag -(1<<30)
using namespace std;

void removeRedundancy(int A[],int &n)
{
	int i,j,k=0;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(A[i]==A[j])A[j]=delTag;
	for(i=0;i<n;i++)
		 if(A[i]!=delTag)
		  {
		    if(i!=k){
			 A[k]=A[i];
			 cout<<"我bububu爱你"<<i<<" "<<k<<endl;
			}
			k++;
		  }
	n=k;
	for(i=0;i<k;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int a[maxsize];
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		removeRedundancy(a,n);
	}
}
