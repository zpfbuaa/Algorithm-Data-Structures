//程序3-2（顺序栈的静态存储结构）

#define maxsize 100
typedef int SElmType;//栈元素数据结构
typedef struct
{
	SElemType elem[maxsize];
	int top;
}SeqStack;

/*  （1）顺序栈的静态存储结构需要先预定或申请栈的存储空间，
         也就是说栈空间的容量有限，且一旦装满不能扩充
    （2）因此在顺序栈中，当一个元素进栈之前，需要判断是否栈满
         若栈满，则元素进栈会发生上溢现象
    （3）因为向量下标是从0开始，栈空时应该S.top<0，因此空栈时栈顶指针S.top==-1
*/

