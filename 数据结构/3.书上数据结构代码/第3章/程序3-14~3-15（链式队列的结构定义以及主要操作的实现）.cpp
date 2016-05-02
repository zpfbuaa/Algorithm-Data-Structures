//程序3-14~3-15（链式队列的结构定义以及主要操作的实现）
#include<cstdlib>
#include<iostream>
typedef int QElemType;
typedef struct node
{
	QElemType data;
	struct node *link;
}LinkNode;
typedef struct
{
	LinkNode *front;
	LinkNode *rear;
}LinkQueue;

void InitQueue(LinkQueue &Q)
{
	Q=new LinkNode;
	if(!Q){cerr<<"存储分配错误!\n";exit(1);}
	Q.front=Q.rear=Q;
};

int　EnQueue(LinkQueue &Q,QElemType x)
{
	Q.rear->link=new LinkNode;
	if(!Q.rear->link){cerr<<"存储分配错误!\n";exit(1);}
	Q.rear=Q.rear->link;
	Q.rear->data=x; Q.rear->link=NULL;
	return 1;
};

int DeQueue(LinkQueue &Q,QElemTYpe &x)
{
	if(Q.front->link)return 0;
	LinkNode *p=Q.front->link;
	x=p->data;
	Q.front->link=p->link;delete p;
	return 1;
};

int GetFront(LinkQueue &Q,QElmeType &x)
{
	if(!Q.front->link) return 0;
    x=Q.front->link->data;
    return 1;
};

int QueueEmpty(LinkQueue &Q)
{
	return(Q.front->link==NULL);
};

int QueueSize(LinkQueue &Q)
{
	LinkNode *p=Q.front->link; int k=0;
	while(P!=NULL)
	{
		p=p->link;
		k++;
	}
	return k;
};






