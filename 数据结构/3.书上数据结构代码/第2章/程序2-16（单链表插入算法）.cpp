//程序2-16（单链表插入算法）

int Insert(LinkList& first,int i,DataType x)//将新元素x插入到第i个节点的位置。
											//i从1开始，i=1,表示插入到原首结点之前
{
	if(!first||i==1)//插入到空表或非空表的首元结点
	{
		LinkNode *newnode=new LinkNode;//建立新的结点
		if(!newnode){cerr<<"存储分配错误!\n";exit(1);}
		newnode->data=x;
		newnode->link=first;first=newnode;//新结点成为第一个结点
	}
	else//插入到链中或链尾
	{
		LinkNode *p=first;//为了找到第i-1个结点，需要新建一个指针来找到第i-1个结点
		int k=1;
		while(P!=NULL&&k<i-1)
		{
			p=p->link;
			k++;
		}//利用循环将p指向第i-1个结点的位置
		if(p==NULL&&first)
		{cerr<<"无效的插入位置!\n";return 0;}//判断是否合理，如果表为空或者表太短则返回0
		else//接下来就开始插入
		{
			LinkNode *newnode=new LinkNode;//建立一个新结点
			if(!newNode){cerr<<"存储分配错误!\n";exit(1);}
			newnode->data=x;
			newnode->link=p->link;
			p->link=newnode;
		}
	}
	return 1;
};







