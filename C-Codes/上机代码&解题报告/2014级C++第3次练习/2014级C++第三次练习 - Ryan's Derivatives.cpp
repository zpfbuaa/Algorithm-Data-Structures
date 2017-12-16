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
//我这为了避免麻烦直接弄了4个数组。分表代表系数、幂。求导后的系数和幂
		js=0;/*计数的初始化。。为了+号的出现和0。。就是说+号只能在数字后面。0就是没有任一个数输出时。*/
		for (int i=0;i<n;i++)
			cin>>a[i]>>b[i];
		for (int i=0;i<n;i++)
		{
			if (b[i]<m)//第一种。就是不够求导的，就是0了
			c[i]=0;
				else
			{
				c[i]=a[i];
					for (int j=0;j<m;j++)
				{
					c[i]*=b[i];
					b[i]--;
					d[i]=b[i];
				}//求m次导的结果。。
			}

		}//到这里就求导完了。。但是此题难在输出。。
		for (int i=0;i<n;i++)
		{
			if (c[i]!=0)//如果系数为0 不输出
			{
				if(d[i]==1)//次数为1的。
				cout <<c[i]<<"x";
				else if(d[i]==0)//次数为0的
				cout <<c[i];
				else
				cout <<c[i]<<"x^"<<d[i];//正常的情况
				js++;//每输出一项就加一。
			}
			 if(c[i+1]>0&&js!=0)
//如果下一项是正的，且不是第一项。如果是负的就不输出了，有符号代替减号
				cout <<"+";
			if(i==n-1&&js!=0)//最后一项时换行。
			cout <<endl;
		}
		if (js==0)//没有项输出时就输出0
		cout <<0<<endl;
	}

}
