//程序3-5（动态顺序栈进栈操作的实现）

void StackFull(SeqStack &S)//函数判断栈是否为满，栈满则返回1，栈不满则返回0
{
	return (S.top==S.maxSize);//返回布尔代数式S.top==S.maxSize的运算结果
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


/*  （1）top指示的是最后进栈的元素的存储位置
    （2）先要判断栈是否已满，若（top==maxSize-1）说明栈中所有位置均已经使用，栈已经满了
    （3）先让top++，然后将元素加入到栈中，这时刚刚进栈的元素成为新的栈顶元素。
*/

