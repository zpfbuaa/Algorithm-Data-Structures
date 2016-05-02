//程序2-27（集合Merge算法的实现）

void Merge(LinkSet &LA,LinkSet &LB,LinkSet &LC)
//求集合LA和集合LB的并，结果通过LC返回，要求LC已经存在且为空
{
	SetNode *pa=LA.first->link,*pb=LB.first->link;
	SetNode *p,*pc=LC.frist;
	while(pa!=NULL&&pb!=NULL)
	{
		if(pa->data<=pb->data)
		{
			pc->link=new SetNode;
			if(!pc->link){cerr<<"存储分配错误!";exit(1);}
			pc->link->data=pa->data;
			pa=pa->link;
			if(pa->data==pb->data)
			pb=pb->link;
		}
		else
		{
			pc->link=new SetNode;
			if(!pc->link){cerr<<"存储分配错误!";exit(1);}
			pc->link->data=pb->data;
			pb=pb->link;
		}
		pc=pc->link;
	}
	p=(pa!=NULL)?pa:pb;//处理未处理完的集合
	while(p!=NULL)//向结果链表中逐个复制
	{
		pc->link=new SetNode;
		if(!pc->link){cerr<<"存储分配错误!";exit(1);}
		pc->link->data=p->data;
		pc=pc->link;p=p->link;
	}
	pc->link=NULL;
	LC.last=pc;
}
/*  (1)对于不需要频繁插入和删除，但需要经常执行查找的线性表，可采用顺序表存储
	(2)对于需要频繁插入和删除，但查找次数不多的线性表，可采用单链表存储。
*/




