//���� 1-8 �����Գ�
#include<cstdio>
#include<iostream>
#include<cstring>
#define maxsize 100
using namespace std;

void selfMul(int A1[][maxsize],int A2[][maxsize],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			A2[i][j]=0;
			for(int k=0;k<n;k++)
			A2[i][j]=A2[i][j]+A1[i][k]*A1[k][j];
		}
	}
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int a[maxsize][maxsize];
		int b[maxsize][maxsize];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		}//����a
		printf("a����Ϊ:\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}//���a
		
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				for(int k=0;k<n;k++)
//				b[i][j]=b[i][j]+a[i][k]*a[k][j];
//			}
//		}//����b
		selfMul(a,b,n);//����b
		printf("b����Ϊ:\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}//���b
		
   }
}







