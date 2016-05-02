//程序3-1（向量A中所有元素逆置的算法）

void Reverse(SElemType A[],int n)
{
	Stack S;
	InitStack(S);
	int i;
	for(i=1;i<n;i++)
	Push(S,A[i-1]);
	
	while(!StackEmpty(S))Pop(S,A[i-1]);//这里的i已经不再是1了，
		//因此可以使用i来进行输出，相当于递减
}





