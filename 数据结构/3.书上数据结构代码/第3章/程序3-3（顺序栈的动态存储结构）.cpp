//程序3-3（顺序栈的动态存储结构）

#define initSize 100//栈空间的初始大小
typedef int SElemType;//栈内元素数据类型
typedef struct//顺序栈的结构定义
{
	SElemType *elem;//栈指针指向存储数组
	int maxSize;//栈空间最大容量
	int top;//栈顶指针(其实就是数组下标)
}SeqStack;




