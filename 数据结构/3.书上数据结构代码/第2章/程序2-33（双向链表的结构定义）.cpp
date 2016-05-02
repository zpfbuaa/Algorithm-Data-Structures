//程序2-33（双向链表的结构定义）

typedef int DataType;
typedef struct node//双向链表的定义
{
	DataType data;//结点数据
	struct node *llink,*rlink;//前驱和后继结点
}DblNode, *DblList;

