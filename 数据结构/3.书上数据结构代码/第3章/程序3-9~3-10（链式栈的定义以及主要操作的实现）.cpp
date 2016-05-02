//程序3-9~3-10（链式栈的定义以及主要操作的实现）
typedef int SElemType;
typedef struct node
{
	SElemType data;
	struct node *link;
}LinkNode, *LinkStack;

void InitStack(LinkStack &S)
{
	S=new LinkNode;
	if(!S){cerr<<"存储分配错误!\n";exit(1);}
	S->link=NULL;
}

void Push(LinkStack &S,SElemType x)
{
	LinkNode *p=new LinkNode;
	if(!p){cerr<<"存储分配错误!\n";exit(!);}
	p->data=x;
	p->link=S->link;
	S->link=p;
};

int Pop(LinkStack &S,SElemType &x)
{
	if(S->link==NULL)return 0;
	LinkNode *p=S->link;
	S->link=p->link;
	x=p->link;delete p;
	return 1;
};

int GetTop(LinkStack &S,SelemType &x)
{
	if(S->link==NULL)return 0;
	x=S->link->data;
	return 1;
};

int StackEmpty(LinkStack &S)
{
	return S->link==NULL;
};

int StackSize(LinkStack &S)
{
	LinkNode *p=S->link; int k=0;
	while(p!=NULL)
	{
		p=p->link;
		k++;
	}
	return k;
};







