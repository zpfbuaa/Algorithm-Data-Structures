#include<iostream>
#include <stdio.h>
#include <cmath>
#include <string>
#define debug(x) cout <<#x<<"="<<x<<endl;
using namespace std;

int main()
{
	int m,n,js;
	while (cin>>n>>m)
	{
	long long a[999]={0},b[999]={0},c[999]={0},d[999]={0};
//����Ϊ�˱����鷳ֱ��Ū��4�����顣�ֱ����ϵ�����ݡ��󵼺��ϵ������
		js=0;/*�����ĳ�ʼ������Ϊ��+�ŵĳ��ֺ�0��������˵+��ֻ�������ֺ��档0����û����һ�������ʱ��*/
		for (int i=0;i<n;i++)
			cin>>a[i]>>b[i];
		for (int i=0;i<n;i++)
		{
			if (b[i]<m)//��һ�֡����ǲ����󵼵ģ�����0��
			c[i]=0;
				else
			{
				c[i]=a[i];
					for (int j=0;j<m;j++)
				{
					c[i]*=b[i];
					b[i]--;
					d[i]=b[i];
				}//��m�ε��Ľ������
			}

		}//������������ˡ������Ǵ��������������
		for (int i=0;i<n;i++)
		{
			if (c[i]!=0)//���ϵ��Ϊ0 �����
			{
				if(d[i]==1)//����Ϊ1�ġ�
				cout <<c[i]<<"x";
				else if(d[i]==0)//����Ϊ0��
				cout <<c[i];
				else
				cout <<c[i]<<"x^"<<d[i];//���������
				js++;//ÿ���һ��ͼ�һ��
			}
			 if(c[i+1]>0&&js!=0)
//�����һ�������ģ��Ҳ��ǵ�һ�����Ǹ��ľͲ�����ˣ��з��Ŵ������
				cout <<"+";
			if(i==n-1&&js!=0)//���һ��ʱ���С�
			cout <<endl;
		}
		if (js==0)//û�������ʱ�����0
		cout <<0<<endl;
	}

}
