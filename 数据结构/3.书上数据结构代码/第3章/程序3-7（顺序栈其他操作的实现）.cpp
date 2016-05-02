//程序3-7（顺序栈其他操作的实现）

int GetTop(SeqStack &S,SElemType &x)//仅仅是读取栈顶元素
{
	if(S.top==-1)return 0;
	x=S.elem[S.top];
	return 1;
};

int StackEmpty(SeqStack &S)//栈为空则函数返回1
{
	return S.top==-1;//返回S.top==-1的布尔式的运算结果
	                 //如果S.top!=-1,那么布尔式的运算结果是0，函数返回0
	                 //如果S.top==-1,那么布尔式的运算结果是1，函数返回1
}

int StackFull(SeqStack &S)
{
	return S.top==S.maxSize;
}

int StackSize(SeqStack &S)
{
	return S.top+1;//因为栈的第一个元素是S.elem[0]所以，栈的长度应该是S.top+1
}

void OverflowProcess(SeqStack &S)
{
	SElemType *newArray=new SElemType[S.maxSize*2];
	if(!newArray){cerr<<"存储分配失败\n";exit(1);}
	for(int i=0;i<=S.top;i++)
	newArray[i]=S.elem[i];
	S.maxSize=2*S.maxSize;
	delete[]S.elem;
    S.elem=newArray;
}

void Push(SeqStack &S,SElemType x)
{
	if(StsckFull(S))
	OverflowProcess(S);
	S.elem[++S.top]=x;
};

int Pop(SeqStack &S,SElemType &x)//退栈，若栈为空则函数返回0，
//栈不空则栈顶指针减一，退栈元素通过引用型参数x返回，退栈成功函数返回1
{
	if(S.top==-1)return 0;
	x=S.elem[S.top--];
	return 1;
};




