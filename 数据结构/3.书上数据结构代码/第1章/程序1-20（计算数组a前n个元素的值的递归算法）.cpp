//����1-20 ��������aǰn��Ԫ�ص�ֵ�ĵݹ��㷨
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
	printf("ǰ%d��֮��Ϊ%d\n",n,ans);
}

float rrsum(float a[],int n,int m)
{
	float ans=0;
	for(int i=n-1;i<m;i++)
	{
		ans+=a[i];
	}
	printf("��%d���%d��ĺ�Ϊ%d\n",n,m,ans);
}
int main()
{
	int len;
	printf("����������ĳ���:\n");
	while(~scanf("%d",&len))
	{
		float f[len+1];
		printf("��������������е�%d����\n",len);
		for(int i=0;i<len;i++)
			scanf("%d",&f[i]);
		printf("������:\n");
		printf("	1.����ǰn��ĺ�				\n");
		printf("	2.�����n���m��ĺ�		\n");
		printf("	0.�˳�����				\n");
		int choose;
		scanf("%d",&choose);
		if(choose==0) return 0;
		else if(choose==1)
		{
			printf("��������Ҫ��ѯ������n:\n");
			int x;
			scanf("%d",&x);
			rsum(f,x);
		}
		else if(choose==2)
		{
			printf("��������Ҫ��ѯ����ʼ��n:\n");
			int c1;
			scanf("%d",&c1);
			printf("��������Ҫ��ѯ����ֹ��m:\n");
			int c2;
			scanf("%d",&c2);
            rrsum(f,c1,c2);
		}
			printf("����������ĳ���:\n");
	}
}
