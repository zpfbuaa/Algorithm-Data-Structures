//����3-5����̬˳��ջ��ջ������ʵ�֣�

void StackFull(SeqStack &S)//�����ж�ջ�Ƿ�Ϊ����ջ���򷵻�1��ջ�����򷵻�0
{
	return (S.top==S.maxSize);//���ز�������ʽS.top==S.maxSize��������
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


/*  ��1��topָʾ��������ջ��Ԫ�صĴ洢λ��
    ��2����Ҫ�ж�ջ�Ƿ�����������top==maxSize-1��˵��ջ������λ�þ��Ѿ�ʹ�ã�ջ�Ѿ�����
    ��3������top++��Ȼ��Ԫ�ؼ��뵽ջ�У���ʱ�ոս�ջ��Ԫ�س�Ϊ�µ�ջ��Ԫ�ء�
*/

