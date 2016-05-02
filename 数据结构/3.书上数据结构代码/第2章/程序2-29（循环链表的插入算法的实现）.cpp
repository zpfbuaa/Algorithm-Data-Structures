//程序2-29（循环链表的插入算法的实现）

int Insert(CircNode *first,int i,DataType x)//将新元素x插入在循环链表中第i（1<=i）的位置，
											//插入失败则函数返回0，插入成功函数返回1
{
	if(i<1)return 0;
	CircNode *p=first,*q;int k=0;
	while(p->link!=first&&k<i-1)//定位于第i-1个结点，如果i超过表长则插入到链尾
	{
		p=p->link;
		k++;
	}//p指向第i-1个结点，q时新创建的结点（也就是要被插入的结点）
	q=new CircNode;//创建新结点
	if(!q){cerr<<"存储分配错误!\n";exit(1);}
	q->data=x;
	q->link=p->link;p->link=q;//插入成功
	return 1;
}







