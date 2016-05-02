#include<bits/stdc++.h>
#define MAX_SIZE 100010
int ans[MAX_SIZE];
typedef struct
{
	int data[MAX_SIZE][2];
	int top;
}stack;

void init(stack &s)
{
	s.top=1;
	memset(ans,-1,sizeof(ans));
}

int search(stack &s,int n)
{
	int next;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&next);
		if(s.top==1)
		{
			s.data[s.top][0]=next;
			s.data[s.top][1]=i;
			s.top++;
		} 
		else if(s.data[s.top-1][0]<next&&s.top-1>=1)
		{
			while(s.data[s.top-1][0]<next&&s.top-1>=1)
			{
				ans[s.data[s.top-1][1]]=next;
				s.top--;
			}
			s.data[s.top][0]=next;
			s.data[s.top][1]=i;
			s.top++;
		}
		else
		{
			s.data[s.top][0]=next;
			s.data[s.top][1]=i;
			s.top++;
		}
	}
}

int print(int n)
{
	for(int i=1;i<=n;i++)
    printf("%d\n",ans[i]);
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		stack s;
		init(s);
		search(s,n);
		print(n);
	}
 } 

