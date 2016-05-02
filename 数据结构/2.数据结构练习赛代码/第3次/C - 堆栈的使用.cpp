#include<iostream>
#include<cstdio>
#define MAX_SIZE 10010
using namespace std;
typedef struct 
{
	int elem[MAX_SIZE];
	int top;
}stack;
void init(stack&s)
{
	s.top=-1;
}
void push(stack &s,int x)
{
 	 s.elem[++s.top]=x;
}

int pop(stack &s)
{
	if(s.top==-1)return 0;
	s.top--;
	return 1;
}

int gettop(stack&s)
{
	if(s.top==-1)return 0;
	else return 1;
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)return 0;
		stack s;
		init(s);
		char x;int y;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			switch(x)
			{
				case 'P':
					{
						cin>>y;
						push(s,y);
						break;
					}
				case 'O':
					{
						pop(s);
						break;
					}
				case 'A':
					{
						if(gettop(s))
						printf("%d\n",s.elem[s.top]);
						else
						printf("E\n");	
					}
			}
		}
		cout<<endl;
	}
}




