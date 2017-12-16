//单链表常用操作 
#include<iostream>
#include<cstdlib>
#define initsize 100
using namespace std;
typedef struct node
{
	int data;
	struct node *link;
}*cnode,node;

void initlist(cnode &p)
{
	p =new node;//带头结点 
	if(!p){
		cerr<<"存储分配失败\n";exit(1); 
	}
	p->link=NULL;
} 

void cleanlist(cnode &p)
{
	cnode q;
	while(p->link!=NULL)
	{
		q=p->link;
		p->link=q->link;
		delete q;
	}
}

int length(cnode &p)
{
	cnode q=p->link;
	int counter=0;
	while(q!=NULL)
	{
		q=q->link;
		counter++;
	}
	return counter;
}

int isempty(cnode &p)
{
	return(p->link==NULL);
} 

cnode *search(cnode &p,int x)
{
	cnode q=p->link;
	while(q!=NULL&&q->data!=x)
		q=q->link;
//	return q;
}

cnode *locate(cnode &p,int i)
{
	if(i<0) return NULL;
	cnode q=p;
	int pos=0;
	while(q!=NULL&&pos<i)
	{
		q=q->link;
		pos++;
	}
//	return q;
}

//int insert(cnode &p,int i,int x)
//{
//	cnode *q=locate(p,i-1);
//	if(q==NULL)return 0;
//	node *s= new node;
//	is(!s){
//		cerr<<"存储分配失败\n";exit(1);
//	}
//	s->data=x;
//	s->link=q->link;
//	q->link=s;
//	return 1;
//} 
//
//int remove (cnode &p,int i,int &x)
//{
//	cnode *q=locate(p,i-1);
//	if(q==NULL||q->link==NULL)return 0;
//	cnode *s=q->link;
//	q->link=s->link;
//	x=q->data;
//	delect s;
//	return 1;
//}
//
//void copy(cnode &p1,cnode &p2)
//{
//	cnode *srcptr=p2->link;
//	cnode *destptr=p1;
//	while(srcptr->link!=NULL)
//	{
//		destptr->link=new node;
//		if(!destptr){
//			cerr<<"存储分配失败\n";exit(1);
//		}
//		destptr=destptr->link;
//		destptr->data=srcptr->data;
//		srcptr=srcptr->link;
//	}
//	destptr->link=NULL;
//}
int main()
{
	cout<<"sdasda"<<endl; 
}



