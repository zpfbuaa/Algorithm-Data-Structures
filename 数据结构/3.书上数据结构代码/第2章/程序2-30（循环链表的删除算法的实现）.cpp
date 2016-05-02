//程序2-30（循环链表的删除算法的实现）
int Remove(CircList &first,int i,DataType &x)//将链表中的第i个元素删去，通过引用型参数x返回改元素的值
                                             //如果i不合理则删除失败，函数返回0，删除成功则函数返回1
{
    if(i<1)return 0;//i太小，不合理函数返回0
    CircNode *p=first,*q;
	int k=0;
    while(p->link!=first&&k<i-1)//将p指向循环链表的第i-1个结点
    {
		p=p->link;
		k++;
	}
	if(p->link==L)return 0;//如果i太大，被删结点不存在 函数返回0
	q=p->link;//用q来保存被删结点
	p->link=q->link;//将第i-1个结点和第i+1结点链接
	x=q->data;//取出被删除的元素的值
	delete q;//删除这个结点
	return 1;//删除成功函数返回1
}


