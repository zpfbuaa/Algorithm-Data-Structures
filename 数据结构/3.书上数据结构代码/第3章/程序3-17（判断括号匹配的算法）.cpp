//程序3-17（判断括号匹配的算法）
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
				cout<<j<<"与"<<i<<"匹配"<<endl;
			else cout<<"栈空，没有与第"<<i<<"个右括号匹配的左括号！"<<endl;
		}
	}
	while(!StackEmpty(s))
	{
		Pop(s,j);
		cout<<"没有与第"<<j<<"个左括号相匹配的右括号!"<<endl;
	}
}
