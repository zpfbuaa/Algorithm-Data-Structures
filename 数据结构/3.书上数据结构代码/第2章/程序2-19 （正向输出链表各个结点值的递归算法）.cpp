//程序2-19 （正向输出链表各个结点值的递归算法）
void write(LinkNode *first)
{
	if(first==NULL)return;//递归到底，空表返回
	cout<<first->data<<endl;//输出当前节点的值
	write(first->link);//以下一结点为表头继续递归输出
};



