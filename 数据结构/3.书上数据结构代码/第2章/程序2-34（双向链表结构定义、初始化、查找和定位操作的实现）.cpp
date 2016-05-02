//程序2-34（双向链表结构定义、初始化、查找和定位操作的实现）

typedef int DataType;
typedef struct node//双向链表的定义
{
	DataType data;//结点数据
	struct node *llink,*rlink;//前驱和后继结点
}DblNode, *DblList;

void initDblList(DblList &first,DataType Val)//初始化操作：
//建立双向链表的头结点，它包含一个特定的值Val
{
	first=new DblNode;
	if(!first){cerr<<"存储分配失败!\n";exit(1);	}
	first->data=Val;
	first->rlink=first->llink=first;
};

DblList *Search(DblList &first,DataType x,int d)
//查找操作：在带头结点的双向链表中寻找其值等于x的结点，若找到，则函数返回该结点地址
//否则函数返回NULL，参数d=0，按照前驱方向查找；d!=0，按后继方向查找

{
	DblNode *p=(d==0)?first->llink:first->rlink;
	while(p!=first&&p->data!=x)
		p=(d==0)?p->lLink:p->lrink
	return (p!=first)?p : NULL;//返回查找地址，返回NULL则失败
}














