#include<iostream>
#include<cstdio>
#define INIT_SIZE 1010
using namespace std;
typedef struct
{
    
	int elem[INIT_SIZE];
	int maxsize;int front;
}queue;

void init(queue &q,int n)
{
	q.front=0;
	q.maxsize=n;
}

int empty(queue &q)
{
	if(q.front==0)
	return 1;
	else
	return 0;
}

int full(queue &q)
{
	if(q.front==q.maxsize)
	return 1;
	else
	return 0;
}

int enqueue(queue &q,int m)
{
		q.elem[++q.front]=m;
		return 1;
}

int dequeue(queue &q)
{
		--q.front;
		return 1;
}

int main()
{
	int n,t;
	queue q;
	cin>>n>>t;
	init(q,n);
//	cout<<q.maxsize<<endl;
//	enqueue(q,1);
//	enqueue(q,2);
//	enqueue(q,3);
//	enqueue(q,4);
	int m; char x;
	for(int i=1;i<=t;i++)
	{
		cin>>x;
		switch(x)
		{
			case 'E':
				{
					cin>>m;
					if(full(q))
					{
						printf("I Am Full!");
						return 0;
					}
					else
					enqueue(q,m);
					break;
				}
			case 'D':
				{
					if(empty(q))
					{
						printf("Has No Element!");
						return 0;
					 } 
					 else
					 dequeue(q);
					 break;
				}
		}
	}
	
	for(int i=q.front-1;i>=0;i--)
	{
		printf("%d ",q.elem[i+1]);
	}
	return 0;
}




