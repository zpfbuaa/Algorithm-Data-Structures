//程序3-16（使用栈实现数制转换的算法）
typedef int SElemType;
int main()
{
    int N,k,d;
    cout<<"请输入一个十进制非负整数: ";
    cin>>N;
    cout<<"要转换为多少进制数？【2/8/16】: ";cin>>k;
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
	
