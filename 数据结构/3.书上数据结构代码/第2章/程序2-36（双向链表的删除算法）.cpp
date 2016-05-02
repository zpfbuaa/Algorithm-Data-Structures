//程序2-36（双向链表的删除算法）
int Remove(DblList &first,int i,DataType &x,int d)//在带头结点的双向链表中按照d所指的方向删除第i个结点
												  //被删元素的值通过引用型参数x
{
	DblNode *p=Locate(first,i,d);//按照d所指方向定位于第i个结点
	if(p==NULL)return 0;//空表或i不合理，删除失败
	p->rlink->llink=p->llink;//从llink链中摘下
	p->llink->rlink=p->rlink;//从rlink链中摘下
	x=p->data; delete p;//删除
	return 1;//删除成功函数返回1
}
