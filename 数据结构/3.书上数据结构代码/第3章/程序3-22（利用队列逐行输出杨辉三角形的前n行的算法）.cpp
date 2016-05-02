//程序3-22（利用队列逐行输出杨辉三角形的前n行的算法）
#include "queue.h"
typedef int QElemType;
void YANGVI(int n)
{
	Queue q(n+3);
	InitQueue(q);
	EnQueue(q,1);
	EnQueue(q,1);
	int i,j;
	QElemType s=0,t;
	for(i=1;i<=n;i++)
	{
		cout<<endl;
		EnQueue(q,0);
		for(j=1;j<=i+2;j++)
		{
			DeQueue(q,t);
			EnQueue(q,s+t);
			s=t;
			if(j!=i+2)
			cout<<s<<" ";
		}
	}
}
