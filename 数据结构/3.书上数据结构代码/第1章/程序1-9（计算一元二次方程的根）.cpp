//����1-9 ����һԪ���η��̵ĸ�
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int Calculate(float a,float b,float c,float &x1,float &x2)
{
	float d=b*b-4*a*c;
	if(d>0)
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		return 1;
	}
	else if(d==0)
	{
		x1=x2=-b/(2*a);
		return 0;
	}
	else return -1;
}
int main()
{
	float a,b,c;
	while(~scanf("%f%f%f",&a,&b,&c))
	{
		float x1=0.0,x2=0.0;
		int flag=Calculate(a,b,c,x1,x2);
		printf("�б�ʽ��ֵΪ:%d\n",flag);
		flag==-1?printf("�޽�\n"):printf("x1=%d  x2=%d\n",x1,x2);
	}
}



