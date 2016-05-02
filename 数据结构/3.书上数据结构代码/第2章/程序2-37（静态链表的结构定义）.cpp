//程序2-37（静态链表的结构定义）

#define defaultSize 128//默认数组大小
typedef int DataType;
typedef struct node//静态链表结点定义
{
	DataType data;//结点数据
	int link;//后继结点指针
}SLinkNode;
typedef struct staticList//静态链表结构定义
{
	SLinkNode *elem;//结点数组
	int maxsize;//链表最大容量
	int n;//链表当前长度
}
//初始化静态链表
/*  SL.maxsize=defaultSize;
	SL.elem=new SLinkNode[SL.maxsize+1];
	if(!SL.elem){cerr<<"存储分配失败\n";exit(1);}
	for(int i=1;i<=SL.maxsize;i++)
	SL.elem[i]=-1;
	SL.elem[0]=0;
	
	
	
	
	
