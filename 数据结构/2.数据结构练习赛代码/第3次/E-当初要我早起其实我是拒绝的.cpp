#include<iostream>
#include<cstdio>
#include<cstring>
#define INIT_SIZE 100010
using namespace std;
typedef struct 
{
	char sex[INIT_SIZE];
	string name[INIT_SIZE];
	int rear;
}queue;

void init(queue &q)
{
	q.rear=0;
}

int enqueue(queue &q,char se,string na)
{
	q.rear++;
	q.sex[q.rear]=se;
	q.name[q.rear]=na;
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;char se;string na;
		queue qm;
		queue qf;
		init(qm);
		init(qf);
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>se>>na;
			if(se=='m')
			enqueue(qm,se,na);
			if(se=='f')
			enqueue(qf,se,na);
		}
		int mini;
		if(qm.rear<=qf.rear)
		mini=qm.rear;
		else
		mini=qf.rear;
		for(int i=1;i<=mini;i++)
		{
			cout<<qf.name[i]<<" "<<qm.name[i]<<endl;
		}
	}
} 
 





