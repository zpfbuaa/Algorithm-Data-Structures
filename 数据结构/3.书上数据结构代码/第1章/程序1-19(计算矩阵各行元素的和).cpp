//程序1-19 计算矩阵各行元素的和
#include<iostream>
#include<cstdio>
#include<cstring>
#define maxsize 100
using namespace std;

void example(float x[][maxsize],int m)
{
	float sum[m];int i,j;
	for(i=0;i<m;i++)
	{
		sum[i]=0;
		for(int j=0;j<m;j++)
		sum[i]=sum[i]+x[i][j];
	}
	for(int i=0;i<m;i++)
	{
		cout<<"Line "<<i<<":"<<sum[i]<<endl;
	}
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		float a[maxsize][maxsize];
		int i,j;
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		scanf("%d",&a[i][j]);
		example(a,n);
	}
}








