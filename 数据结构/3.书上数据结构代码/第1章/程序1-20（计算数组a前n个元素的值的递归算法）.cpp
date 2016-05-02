//程序1-20 计算数组a前n个元素的值的递归算法
#include<iostream>
#include<cstdio>
#define maxsize 100010
using namespace std;

float rsum(float a[],int n)
{
	float ans=0;
	for(int i=0;i<n;i++)
	{
		ans+=a[i];
	}
	printf("前%d项之和为%d\n",n,ans);
}

float rrsum(float a[],int n,int m)
{
	float ans=0;
	for(int i=n-1;i<m;i++)
	{
		ans+=a[i];
	}
	printf("第%d项到第%d项的和为%d\n",n,m,ans);
}
int main()
{
	int len;
	printf("请输入数组的长度:\n");
	while(~scanf("%d",&len))
	{
		float f[len+1];
		printf("请输入这个数组中的%d个数\n",len);
		for(int i=0;i<len;i++)
			scanf("%d",&f[i]);
		printf("请输入:\n");
		printf("	1.计算前n项的和				\n");
		printf("	2.计算第n项到第m项的和		\n");
		printf("	0.退出程序				\n");
		int choose;
		scanf("%d",&choose);
		if(choose==0) return 0;
		else if(choose==1)
		{
			printf("请输入你要查询的项数n:\n");
			int x;
			scanf("%d",&x);
			rsum(f,x);
		}
		else if(choose==2)
		{
			printf("请输入你要查询的起始项n:\n");
			int c1;
			scanf("%d",&c1);
			printf("请输入你要查询的终止项m:\n");
			int c2;
			scanf("%d",&c2);
            rrsum(f,c1,c2);
		}
			printf("请输入数组的长度:\n");
	}
}
