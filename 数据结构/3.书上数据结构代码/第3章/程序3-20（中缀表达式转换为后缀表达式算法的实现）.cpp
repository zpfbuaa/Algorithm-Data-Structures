//程序3-20（中缀表达式转换为后缀表达式算法的实现）
#include "Stack.h"
typedef char SElemType;
void INFIX-to-PostFix()
{
	LinkStack OPTR;InitStack(OPTR);
	SElemType ch,ch1,op;
	Push(OPTR,'#');cin>>ch;
	while(!StackEmpty(OPTR)&&ch!='#')
		if(isdight(ch))
		{
			cout<<ch<<endl;
			cin>>ch;
		}
		else
		{
			GetTop(OPTR,ch1);
			if(isp(ch1)<icp(ch))
			{
				Push(OPTR,ch);
				cin>>ch;
			}
			else if(isp(ch1)>icp(ch))
			{
				Pop(OPTR,op);
				cout<<op<<endl;
			}
			else
			{
				Pop(OPTR,op);
				if(op=='(')
				cin>>ch;
			}
		}
	
}
