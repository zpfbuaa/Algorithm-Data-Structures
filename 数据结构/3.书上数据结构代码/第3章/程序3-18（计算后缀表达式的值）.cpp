//����3-18�������׺���ʽ��ֵ��
#include<cmath>
#include "Stack.h"
typedef int SelemType;
int DoOperator(LinkStack &OPND,char op)
{
	SElemType left,right;
	if(StackEmpty(OPED))
	{
		cout<<"ȱ�����������!"<<endl;return 0;
	}
	Pop(OPED,right);
	if(StackEmpty(OPED))
	{
		cout<<"ȱ�����������!"<<endl;return 0;
	}
	Pop(OPED,left);
	switch(op)
	{
		case '+':Push(OPED,left+right);break;
		case '-':Push(OPED,left-right);break;
		case '*':Push(OPED,left*right);break;
		case '/':if(right==0.0)
			 		cerr<<"Divide by 0!"<<endl;return 0;
		   		 else Push(OPED,left/right);
		   		 break;
	   default: return 0;
	}
	return 1;
}

int main()
{
	LinkStack OPED;InitStack(OPED);
	char ch;SElemType result;
	cout<<"�������׺���ʽ(����ֵ����0~9)�����������+��-��*��/"<<endl;
	cin>>ch;
	while(ch!='#')
	{
		if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
			if(!DoOperator(ch)){cerr<<"�������!"<<endl;exit(1);}
		else if(ch>='0'&&ch<='9')Push(OPED,ch-48);
			else cout<<"�����˷Ƿ��ַ�������������!"<<endl;
			cin>>ch;
	}
	Pop(OPED,result);
	cout<<"��������: "<<result<<endl;
}














