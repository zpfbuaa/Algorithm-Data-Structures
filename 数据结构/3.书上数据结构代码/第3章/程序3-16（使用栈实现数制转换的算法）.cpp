//����3-16��ʹ��ջʵ������ת�����㷨��
typedef int SElemType;
int main()
{
    int N,k,d;
    cout<<"������һ��ʮ���ƷǸ�����: ";
    cin>>N;
    cout<<"Ҫת��Ϊ���ٽ���������2/8/16��: ";cin>>k;
    LinkStack S;InitStack(S);
    while(N>0)
    {
    	Push(S,N%k);
    	N=N/k;
	}
	while(!StackEmpty(S))
	{
		Pop(S,d);
		cout<<d;
	}
	cout<<endl;
}
	
