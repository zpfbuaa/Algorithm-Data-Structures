//程序2-35（双向链表的插入算法）

int Insert(DblList &first,int i,DataType x,int d)//建立一个包含有值x的新结点，
												 //并将其按d的方向插入到第i个结点位置
{
	DblList *p=Locate(first,i-1,d);//定位到i-1个结点
	if(p==NULL)return 0;//i不合理，插入失败
	DblList *s=new DblNode;//创建新结点
	if(!s){cerr<<"存储分配失败\n";exit(1);}
	s->data=x;
	if(d==0)//在前驱方向插入
	{
		s->llink=p->llink;p->llink=s;
		s->llink->rlink=s;s->rlink=p;
	}
	else//在后继方向插入
	{
		s->rlink=p->rlink;p->rlink=s;
		s->rlink->llink=s;s->llink=p;
	}
	return 1;
}





