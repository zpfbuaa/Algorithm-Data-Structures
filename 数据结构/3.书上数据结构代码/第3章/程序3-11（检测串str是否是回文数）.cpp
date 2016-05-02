//程序3-11（检测串str是否是回文数）
#include<string.h>
#include "Stack.h"
#include "Queue.h"
typedef char SELemType;
typedef char QElemType;
int (char *str)
{
	Stack S;initStzck(S);
	Queue Q;initQueue(Q);
	char ch1,ch2;
	for(int i=0;i<strlen(str);i++)
	{
		EnQueue(Q,str[i]);
		Push(S,str[i]);
	}
	while(!StackEmpty(S)&&!QueueEmpty(Q))
	{
		Pop(S,ch1);
		DeQueue(Q,ch2);
		if(ch1!=ch2)
		return 0;
	}
	return 1;
}
