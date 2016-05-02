//程序2-26（集合delMember算法的实现）
//单链表的应用举例
//有序链表，e0<e1<e2<...<en。

int delMember(LinkSet &S,DataType x)
//把集合中成员x删去，若集合不空且元素x在集合中，则函数返回1，否则返回0
{
	SetNode *p=S.first->link, *pre=S.first;//pre一直是p结点的前驱
	while(p!=NULL&&p->data<x)//循环扫描
	{
		pre=p;
		p=p->link;
	}
	if(p!=NULL&&p->data==x)//若找到，可以删去结点p
	{
		pre->link=p->link;
		if(p==S.last) S.last==pre;//当p是尾结点时，要修改S.last的指向，
								  //维护S.last的正确性
		delete p;
		return 1;
	}
	else
	return 0;
}





