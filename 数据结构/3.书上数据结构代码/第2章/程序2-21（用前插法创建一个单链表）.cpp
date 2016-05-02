//程序2-21（用前插法创建一个单链表）
#include<cstdlib>
void insertFront(LinkList &first,DataType endTag)
//endTag是约定的输入序列结束标志
{
	DataType val;
	cin>>val;
	if(val==endTag)return ;//终止创建
	LinkNode *s=new LinkNode;
	if(!s){cerr<<"存储分配错误!\n";exit(1);}
	s->data=val;//s结点赋值
	s->link=first->link;//调整s结点的下一个结点
	first->link=s;//将s作为首结点
	insertFront(first,endTag);//递归创建单链表
};

int main()
{
	LinkList L=new LinkNode;
	if(!L){cerr<<"存储分配错误!\n";exit(1);}
	cin>>L->data;//输入约定的终止标志
	L->link=NULL;
	insertFront(L,L->data);//递归咯
};



