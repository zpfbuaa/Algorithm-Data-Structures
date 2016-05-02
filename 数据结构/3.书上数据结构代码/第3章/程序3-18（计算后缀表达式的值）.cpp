//程序3-18（计算后缀表达式的值）
#include<cmath>
#include "Stack.h"
typedef int SelemType;
int DoOperator(LinkStack &OPND,char op)
{
	SElemType left,right;
	if(StackEmpty(OPED))
	{
		cout<<"缺少右运算对象!"<<endl;return 0;
	}
	Pop(OPED,right);
	if(StackEmpty(OPED))
	{
		cout<<"缺少左运算对象!"<<endl;return 0;
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
	cout<<"请输入后缀表达式(输入值限于0~9)，运算符限于+，-，*，/"<<endl;
	cin>>ch;
	while(ch!='#')
	{
		if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
			if(!DoOperator(ch)){cerr<<"运算出错!"<<endl;exit(1);}
		else if(ch>='0'&&ch<='9')Push(OPED,ch-48);
			else cout<<"输入了非法字符，请重新输入!"<<endl;
			cin>>ch;
	}
	Pop(OPED,result);
	cout<<"计算结果是: "<<result<<endl;
}














