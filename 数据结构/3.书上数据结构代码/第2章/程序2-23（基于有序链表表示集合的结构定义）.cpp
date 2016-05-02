//程序2-23（基于有序链表表示集合的结构定义）
//单链表的应用举例
//有序链表，e0<e1<e2<...<en。

typedef int DataType;//假定集合元素的数据类型为int型
typedef struct node//集合的结点定义
{
	DataType data;//每个数据成员的数据
	struct node *link;//链接指针
}SetNode;

typedef struct LinkSet//集合的定义
{
	SetNode *first,*last;//表头与表尾指针
};
/*  （1）有序链表，假设元素按照升序排列，并且每个元素都不相等
    （2）在一个有序链表中查找以及集合元素时，
	     一般不需要查找整个链表，查找效率可以提高很多
    （3）此外，用有序链表表示集合，集合的成员可以无限的增加
    （4）用有序链表表示集合时的结构定义与带头结点的单链表大致相同








