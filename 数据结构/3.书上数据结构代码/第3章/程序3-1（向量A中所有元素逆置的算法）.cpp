//����3-1������A������Ԫ�����õ��㷨��

void Reverse(SElemType A[],int n)
{
	Stack S;
	InitStack(S);
	int i;
	for(i=1;i<n;i++)
	Push(S,A[i-1]);
	
	while(!StackEmpty(S))Pop(S,A[i-1]);//�����i�Ѿ�������1�ˣ�
		//��˿���ʹ��i������������൱�ڵݼ�
}





