//程序2-24（集合Contains算法的实现）
//单链表的应用举例
//有序链表，e0<e1<e2<...<en。

SetNode *Contains(LinkSet &S,DataType x)
{
	SetNode *p=S.first->link;
	while(p!=NULL&&p->data<x)
		p=p->link;
	if(p!=NULL&&p->data==x)return p;
	else return NULL;
};


