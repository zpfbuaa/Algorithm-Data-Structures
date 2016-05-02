//程序2-20 （用尾插法创建一个单链表）
#include<cstdio>
#include<cstdlib>
void insertRear(LinkList &first,LinkNode *&last,DataType endTag)
//endTag是约定的输入序列结束标志，如果输入序列时正整数，endTag可以是0或负数
//如果输入序列式字符，endTag可以是字符集中不会出现的字符，如“\0”
{
	DataType val;
	cin>>val;
	if(val==endTag)last->link==NULL;//链表收尾，停止创建
	else
	{
		last=new LinkNode;//创建新结点
		if(!last){cerr<<"存储分配错误!\n";exit(1);}
		last->data=val;//last结点赋值
		insertRear(first,last->link,endTag);//递归咯
	}
};

int main()
{
	LinkList L=new LinkNode;
	if(!L){cerr<<"存储分配错误!\n";exit(1);}
	cin>>L->data;//输入约定的终止标志
	LinkNode *rear=L;//尾指针，初始时指向头结点
	insertRear(L,rear->link,L->data);//递归创建单链表
};




