//程序3-33~3-34（顺序双端队列SeqDeque的结构定义以及主要操作的实现）
#include<iostream>
#define maxsize 100
typedef struct SeqDeque
{
	DQElemType elem[maxsize];
	int end1,end2;
};

int EnQueueHead(SeqDeque &Q,DQElemType &x)
{
	if(Q.end1==Q.end2)return 0;
	Q.end1=(Q.end1-1+maxSize)%maxSize;
	elements[end1]=x;
	return 1;
};

int DeQueueHead(SeqDeque &Q,DQElemType &x)
{
	if(Q.end1==Q.end2)return 0;
	x=Q.elem[Q.end1+1]%maxSize;
	return 1;
};

int GetHead(SeqDeque &Q,DQElemType &x)
{
	if(Q.end1==Q.end2)return 0;
	x=Q.elem[Q.end1];
	return 1;
};

int EnQueueTail(SeqDeque &Q,DQElemType x)
{
	if((Q.end2+1)%maxSize==Q.end1)return 0;
	Q.elem[Q.end2]=x;
	Q.end2=(Q.end2+1)%maxSize;
	return 1;
};

int DeQueueTail(SeqDeque &Q,DQElemType &x)
{
	if(Q.end1==Q.end2)return 0;
	Q.end2==(Q.end2-1+maxSize)%maxSize;
	x=Q.elem[Q.end2];
	return 1;
};

int GetTail(SeqDeque &Q,DQElemType &x)
{
	if(Q.end1==Q.end2)return 0;
	x=Q.elem[(Q.end2-1+maxSize)%maxSize];
	return 1;
}




