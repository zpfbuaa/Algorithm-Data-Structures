//程序2-31（删除循环链表中指针p所指示的结点）

int Remove(CircNode *&p,DataType &x)//将链表中的指针p所指示结点的元素删去，
									//通过引用型参数x返回改元素的值
{
	CircNode *q=p->link;//下一结点被删去
	x=p->data;p->data=q->data;//传送被删结点的值
	p->link=q->link;//重新链接
	delete q;//删除结点
	return 1;//删除成功函数返回1
}
