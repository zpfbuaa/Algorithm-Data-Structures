//程序2-17（单链表的删除算法）

int Remove(LinkList &first,int i,DataType &x)//将单链表的第i个元素删去，i从1开始，
											 //		引用型参数x返回被删元素的值
{
	LinkNode *q,*p;//p来表示第i-1个结点的位置,q来表示要删除的结点
	int k;
	if(i<=1){q=first,first=first->link;}//删除首结点
	else//删除链表中部或尾部结点
	{
		p=first;
		k=1;
		while(p!=NULL&&k<i-1)//找到第i-1个节点的位置
		{
			p=p->link;
			k++;
		}
		if(p==NULL||p->link==NULL)//如果表太短或表为空 则返回0
		{cerr<<"无效的删除位置!\n";return 0;}
		q=p->link;//保存第i个结点
		p->link=q->link;//将第i-1个结点和第i+1个结点链接
	}
	x=q->data;//取出被删结点的数据值
	delete q;//删除结点
	return 1
}
