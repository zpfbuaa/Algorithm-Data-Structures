//����2-32�����Լɪ�����⣩
//ѭ�������Ӧ�þ��������Լɪ������

/*
#include "CircList.h"
void Josephus(CircNode *&Js,int n,int m)//һ��n���ˣ�ÿ����m�γ�ȥһ����
{
	CircNode *p=Js,*pre=NULL;int i,j;
	for(i=0;i<n-1;i++)//ִ��n-1�ξͿ�����
	{
		for(j=1;j<=m;j++)//��p����ƶ�m-1�����
		{
			pre=p;
			p=p->link;
		}
		cout<<"���е�����:"<<p->data<<endl;//����
		pre->link=p->link;//ɾ�����е�������Ӧ�Ľ��
		delete p;
		p=pre->link;
	}
	cout<<"������ʤ����:"<<p->data<<endl;
};

int main()
{
	CircNode *clist,*last;int i,n,m;
	clist=new CircNode;
	if(!clist){cerr<<"�洢�������!\n";exit(1);}
	cout<<"������Ϸ������n���ͱ��������m����";
	cin>>n>>m;
	clist->data=1;(�Ұ����޸��ˣ������ϲ�һ����)
	clist->link=clist;
	last=clist;
	for(i=2;i<=n;i++)
	{
		last->link=new CircNode;
		if(!last->link){cerr<<"�洢�������!\n";exit(1);}
		last=last->link; last->data=i;
	}
	last->link=clist;//����ѭ�������������˵�һ�д��룩
	Josephus(clist,n,m);
}

*/
//����������ϵĴ��룬�о����Ϲ����Ĳ���
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







