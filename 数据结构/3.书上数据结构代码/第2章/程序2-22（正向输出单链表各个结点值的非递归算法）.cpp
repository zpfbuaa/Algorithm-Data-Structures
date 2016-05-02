//程序2-22（正向输出单链表各个结点值的非递归算法）
void write(LinkNode *first)//非递归算法（迭代）
{
	while(first->link!=NULL)//循环输出链表
	{
		cout<<first->link->data<<endl;//链表非空，输出结点数据
		first=first->link;//继续输出下一结点
	}
};



