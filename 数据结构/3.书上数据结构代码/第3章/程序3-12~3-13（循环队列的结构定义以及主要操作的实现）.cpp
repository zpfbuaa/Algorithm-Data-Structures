//程序3-12~3-13（循环队列的结构定义以及主要操作的实现）
typedef int QElemType;
#define maxSize 20
typedef struct
{
	QElemType elem[maxSize];
	int front;
	int rear;
}CircQueue;

void InitQueue(CircQueue &Q)
{
	Q.front=Q.rear=0;
};

int EnQueue(CircQueue &Q,QElemTYpe x)
{
	if((Q.rear+1)%maxSize==Q.front)return 0;
	Q.elem[Q.rear]==x;
	Q.rear=(Q.rear+1)%maxSize;
	return 1;
};

int DeQueue(CircQueue &Q,QElemType &x)
{
	if(Q.front==Q.rear)return 0;
	x=Q.elem[Q.front];
	Q.front=(Q.front+1)%maxSize;
	return 1;
};

int GetFront(CircQueue &Q,QElemType &x)
{
	if(Q.front==Q.rear)return 0;
	x=Q.elem[Q.front];
	return 1;
};

int QueueEmpty(CircQueue &Q)
{
	return Q.front==Q.rear;
};

int QueueFull(CircQueue &Q)
{
	return (Q.rear+1)%maxSize==Q.front;
};

int QueueSize(CircQueue &Q)
{
	return (Q.rear-Q.front+maxSize)%maxSize;
};


