//程序2-15（单链表的结构定义）

typedef int DataType;
typedef struct node//链表结点
{
	DataType data;//数据域
	struct node *link;//链接指针域
}LinkNode, *LinkList;

//单链表适用于插入或删除频繁、存储空间需求不定的情形

/*  （1）单链表中数据的逻辑结构与其物理结构可能不一致，
		 通过指针将各个元素按照线性表的逻辑顺序连接起来
    （2）单链表的长度可以扩充
    （3）对单链表的便利和查找只能从头指针指示的首元节点开始，
		 不能像顺序表那样直接访问某个指定的节点
    （4）当进行插入或删除运算时，只需修改相关结点的指针域即可，既方便又快捷
    （5）由于单链表的每个结点带有指针域，因而比顺序表需要的存储空间多
*/





