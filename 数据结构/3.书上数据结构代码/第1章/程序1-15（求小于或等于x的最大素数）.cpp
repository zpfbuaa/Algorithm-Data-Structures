//����1-15 ��С�ڻ����x���������
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
