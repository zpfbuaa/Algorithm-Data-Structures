//程序2-25（集合addMember算法的实现）
//单链表的应用举例
//有序链表，e0<e1<e2<...<en。

int addMember(LinkSet &S,DataType x)
//把新元素x加入到集合之中，若集合中已有此元素，则函数返回0，否则返回1
{
	SetNode *p=S.first->link,*pre=S.first;//p是扫描指针，pre时p的前驱
	while(p!=NULL&&p->link<x)//循环扫描
	{
		pre=p;
		p=p->link;
	}
	if(p!=NULL&&p->data==x)return 0;//若集合中已有此元素，不插入，函数返回0
	SetNode *q=new SetNode;//创建值为x的结点,用q指向
	if(!q){cerr<<"存储分配错误!\n";exit(1);}
	q->data=x; q->link=p; pre->link=q;//链入
	if(!p)S.last=q;//链到链尾时修改尾指针
	return 1;
};




