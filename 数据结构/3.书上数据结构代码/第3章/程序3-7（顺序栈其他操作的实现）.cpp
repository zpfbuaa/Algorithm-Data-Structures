//����3-7��˳��ջ����������ʵ�֣�

int GetTop(SeqStack &S,SElemType &x)//�����Ƕ�ȡջ��Ԫ��
{
	if(S.top==-1)return 0;
	x=S.elem[S.top];
	return 1;
};

int StackEmpty(SeqStack &S)//ջΪ����������1
{
	return S.top==-1;//����S.top==-1�Ĳ���ʽ��������
	                 //���S.top!=-1,��ô����ʽ����������0����������0
	                 //���S.top==-1,��ô����ʽ����������1����������1
}

int StackFull(SeqStack &S)
{
	return S.top==S.maxSize;
}

int StackSize(SeqStack &S)
{
	return S.top+1;//��Ϊջ�ĵ�һ��Ԫ����S.elem[0]���ԣ�ջ�ĳ���Ӧ����S.top+1
}

void OverflowProcess(SeqStack &S)
{
	SElemType *newArray=new SElemType[S.maxSize*2];
	if(!newArray){cerr<<"�洢����ʧ��\n";exit(1);}
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

int Pop(SeqStack &S,SElemType &x)//��ջ����ջΪ����������0��
//ջ������ջ��ָ���һ����ջԪ��ͨ�������Ͳ���x���أ���ջ�ɹ���������1
{
	if(S.top==-1)return 0;
	x=S.elem[S.top--];
	return 1;
};




