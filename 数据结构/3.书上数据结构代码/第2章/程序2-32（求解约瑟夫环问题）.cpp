//程序2-32（求解约瑟夫环问题）
//循环链表的应用举例：求解约瑟夫环问题

/*
#include "CircList.h"
void Josephus(CircNode *&Js,int n,int m)//一共n个人，每进行m次出去一个人
{
	CircNode *p=Js,*pre=NULL;int i,j;
	for(i=0;i<n-1;i++)//执行n-1次就可以了
	{
		for(j=1;j<=m;j++)//令p向后移动m-1个结点
		{
			pre=p;
			p=p->link;
		}
		cout<<"出列的人是:"<<p->data<<endl;//出列
		pre->link=p->link;//删除出列的人所对应的结点
		delete p;
		p=pre->link;
	}
	cout<<"最终优胜者是:"<<p->data<<endl;
};

int main()
{
	CircNode *clist,*last;int i,n,m;
	clist=new CircNode;
	if(!clist){cerr<<"存储分配错误!\n";exit(1);}
	cout<<"输入游戏人数（n）和报数间隔（m）：";
	cin>>n>>m;
	clist->data=1;(我把它修改了，和书上不一样了)
	clist->link=clist;
	last=clist;
	for(i=2;i<=n;i++)
	{
		last->link=new CircNode;
		if(!last->link){cerr<<"存储分配错误!\n";exit(1);}
		last=last->link; last->data=i;
	}
	last->link=clist;//构建循环链表（书上少了的一行代码）
	Josephus(clist,n,m);
}

*/
//上面的是书上的代码，感觉书上构建的不对
#include<iostream>
#include<cstdio>
using namespace std;
typedef struct node
{
    int data;
    struct node *link;
}cnode;
void jose(cnode *&c,int n,int m)
{
    cnode *p=c,*pre=NULL;
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<m;j++)
        {
            pre=p;
            p=p->link;
        }
        pre->link=p->link;
        delete p;
        p=pre->link;
    }
    printf("%d\n",p->data);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        cnode *c=new cnode,*last;
        c->data=1;
        c->link=c;
        last=c;
        for(int i=2;i<=n;i++)
        {
            last->link=new cnode;
            last=last->link;
            last->data=i;
        }
        last->link=c;
        jose(c,n,m);
    }
}







