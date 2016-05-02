//程序2-18（单链表部分常用操作的实现）
//带头结点的单链表
void initList(LinkList &first)//初始化单链表
{
	first=new LinkNode;
	if(!first){cerr<<"存储分配错误!\n";exit(1);}
	first->link=NULL;
};

void clearList(LinkList &first)//清空单链表
{
	LinkNode *q;//借用指针
	while(first->link!=NULL)//当链表不空时，删除所有的结点
	{
		q=first->link;
		first->link=q->link;//保存被删结点，从链表上摘下该结点
		delete q;//删除该结点
	}
};

int Length(LinkList &first)//计算表的长度（结点个数减一）
{
	LinkNode *p=first->link;
	int count=0;
	while(p!=NULL)
	{
		p=p->link;
		count++;
	}
};

int isEmpty(LinkList &first)//判断单链表是否为空，为空则返回1；不空则返回0
{
	return (first->link==NULL);
}

LinkLode* Search(LinkList &first,DataType x)//在单链表中查找第一个等于x的结点，查找成功则返回该结点的位置，否则返回NULL
{
	LinkNode *p=first->link;
	while(p!=NULL&&p->data!=x)
	{
		p=p->link;
	}
	return p;
};

LinkNode *Locate(LinkList &first,int i)//在单链表对第i个结点定位，函数返回第i个结点的位置，否则返回NULL
{
	if(i<0)return NULL;
	LinkNode *p=first;
	int k=0;
	while(P!=NULL&&k<i)
	{
		p=p->link;
		k++;
	}
	return p;
};

int Insert(LinkList &first,int i,DataType x)//将新的元素x插入到表中第i个位置，如果i不合理则函数返回0，否则返回1
{
	LinkNode *p=Locate(first,i-1);//调用定位函数，将p指针指向单链表的第i个位置
	if(p==NULL)return 0;//如果i不合理，返回0
	LinkNode *s=new LinkNode;
	if(!s){cerr<<"存储分配错误!\n";exit(1);}
	s->data=x;
	s->link=p->link;//将s链接到p之后
	p->link=s;//调整p的下一个结点，指向s
	return 1;//插入成功，函数返回1
};

int Remove(LinkList &first,int i,DataType &x)
{
	LinkNode *p=Locate(first,i-1);//将p指向单链表的第i-1个位置
	if(P==NULL||p->link==NULL)return 0;//i不合理则函数返回0
	LinkNode *q=p->link;//用q来保存被删的结点
	p->link=q->link;//重新连接 将第i-1个结点和第i+1个结点链接
	x=q->data;//取出被删结点的数据
	delete q;//删除这个结点
	return 1;//删除成功则函数返回1
};

void Copy(LinkList &first1,LinkList &first2)
//函数假定链表first1已存在且为空，即first1的头结点已创建且first1->link==NULL;
//复制链表first2的全部结点到空链表first1中
{
	LinkNode *srcptr=frist2->link;//srcptr是源指针
	LinkNode *destptr=first1;//destptr是目标链尾指针
	while(srcptr->link!=NULL)//利用while循环，将first2中的每个结点复制到first1中
	{
		destptr->link=new LinkNode;//新结点链接到目标链尾
		if(!destptr){cerr<<"存储分配错误!\n";exit(1);}
		destptr=destptr->link;
		destptr->data=srcptr->data;//节点数据的传送
		srcptr=srcptr->link;//传送源链指针到下一结点
	}
	destptr->link=NULL;//目标链收尾
};





