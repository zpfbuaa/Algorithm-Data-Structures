//程序1-15 求小于或等于x的最大素数
#include<cmath>
int primeCale(in n)
{
	int i,j,d=sqrt(n);
	for(i=n;i>=d;i--)
	{
		j=2;
		while(j<=d)
		{
			if(i%j==0)break;
			else j++;
			if(j>d)
			return i;
		}
	}
}
