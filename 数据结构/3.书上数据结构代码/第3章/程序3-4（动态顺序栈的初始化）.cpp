//程序3-4（动态顺序栈的初始化）

void InitStack(SeqStack &S)
{
	S.elem=new SElemType[initSize];
	if(!S.elem){cerr<<"存储分配失败!\n";exit(1);}
	S.maxSize=initSize;
	S.top==-1;
}

/*
	(1)按照initSize的大小为顺序栈动态分配存储空间，
	   首地址为S.elem，并以initSize作为最初的S.maxSize
	(2)一旦需要扩充，申请新的连续存储空间，
	   把原来栈中存放的所有栈元素转移到新的存储空间后
       一定要释放原来的存储空间，再让S.elem指针指示新的存储空间
       并且一定要修改S.maxSize的值，解决空间上溢的问题
*/
	

/*  （1）top指示的是最后进栈的元素的存储位置
    （2）先要判断栈是否已满，若（top==maxSize-1）说明栈中所有位置均已经使用，栈已经满了
    （3）先让top++，然后将元素加入到栈中，这时刚刚进栈的元素成为新的栈顶元素。





