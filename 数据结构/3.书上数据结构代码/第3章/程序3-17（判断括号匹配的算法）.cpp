//����3-17���ж�����ƥ����㷨��
#include<string.h>
#include "Stack.h"
typedef char SElemType;
void PrintMatchedPairs(char *expression)
{
	LinkStack s;
	int j,length=strlen(expression);
	for(int i=1;i<length;i++)
	{
		if(expression[i-1]=='(')Push(s,i);
		else if(expression[i-1]==')')
		{
			if(Pop(s,j))
				cout<<j<<"��"<<i<<"ƥ��"<<endl;
			else cout<<"ջ�գ�û�����"<<i<<"��������ƥ��������ţ�"<<endl;
		}
	}
	while(!StackEmpty(s))
	{
		Pop(s,j);
		cout<<"û�����"<<j<<"����������ƥ���������!"<<endl;
	}
}
