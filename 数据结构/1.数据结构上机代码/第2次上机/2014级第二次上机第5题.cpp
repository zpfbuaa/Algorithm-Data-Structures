//2014�����ݽṹ�ڶ����ϻ� - Josephus��
#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

typedef struct nnode
{
    int data;
    struct nnode *link;
} cnode,*node;

void jose1(node c,int n,int m)
{
    node p=c,pre=NULL;
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<m; j++)
        {
            pre=p;
            p=p->link;
        }
        pre->link=p->link;
        delete p;
        p=pre->link;
    }
    printf("%d\n",p->data);
    delete pre,p;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        node first=new cnode;
        if(!first)
        {
            cerr<<"�洢�������\n";
            exit(1);
        }
        first->data=1;
        first->link=first;
        node last=first;
        for(int i=2; i<=n; i++)
        {
            last->link=new cnode;
            if(!last->link)
            {
                cerr<<"�洢����ʧ��\n";
                exit(1);
            }
            last=last->link;
            last->data=i;
        }
        last->link=first;
        jose1(first,n,m);
    }
}

