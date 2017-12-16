//À≥–Ú’ª 
#include<iostream>
#include<cstdlib>
#define initsize 100
using namespace std;
typedef struct
{
	char *elem;
	int maxsize,top;
}seqstack;

void initstack(seqstack &s)
{
	s.elem=new char[initsize];
	if(!s.elem){cerr<<"¥Ê¥¢∑÷≈‰ ß∞‹\n";exit(1);
	}
	s.maxsize=initsize;
	s.top=-1;
}
void overflowprocess(seqstack &s)
{
	char *newarray=new char[s.maxsize*2];
	if(!newarray){cerr<<"¥Ê¥¢∑÷≈‰ ß∞‹\n";exit(1);
	}
	for(int i=0;i<=s.top;i++)
	newarray[i]=s.elem[i];
	s.maxsize=2*s.maxsize;
	delete[] s.elem;
	s.elem=newarray;
}

int stackempty(seqstack &s)
{
	return s.top==-1;
}

int stackfull(seqstack &s)
{
	return s.top=s.maxsize;
}
void push(seqstack &s,int x)
{
	if(stackfull(s))overflowprocess(s);
	s.elem[++s.top]=x;
}

int pop(seqstack &s,char &x)
{
	if(s.top==-1)return 0;
	x=s.elem[s.top--];
	return 1;
}

int gettop(seqstack &s)
{
	char x;
	if(s.top==-1)return 0;
	x=s.elem[s.top];
	return 1;
}



int stacksize(seqstack &s)
{
	return s.top+1;
}

int match(char exp[],int n)
{
	int i=0;char e;seqstack *S;
	initstack(S);int state=1;
	while(i<n)
	{
		switch(exp[i])
		{
			case'[':
			case'(':
				{
					push(S,exp[i]);i++;break;
				}
			case')':
			{
			if(!stackempty(S)&&gettop(S)=='(')
			{
				pop(S,e);i++;
			}
			else 
			{
				state=0;
				break;
			}
		    }
			case']':if(!stackempty(S)&&gettop(S)=='[')
			{
				pop(S,e);i++;
			}
			else 
			{
				state=0;
				break;
			}
		    }
		}
	}
 } 
int main()
{
	
}





