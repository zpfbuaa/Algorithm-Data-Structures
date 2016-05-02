//2014级数据结构第二次上机 - JosephusⅡ
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

typedef struct nnode
{
    int data;
    struct nnode *link;
} cnode,*node;//node构建指针

void jose2(node c,int n,int m)
{
    if(n==1)cout<<c->data<<endl;
    else
    {
        node p=c,pre=NULL;
        int pos=0,t=n;
        while(p->link!=c)
        {
            pre=p;
            p=p->link;
            pos++;
            if(pos%m!=0)
            {
                pre->link=p->link;
                delete p;
                t--;
                p=pre;
            }
        }
        jose2(p,t,++m);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        node first=new cnode;
        if(!first)
        {
            cerr<<"存储分配错误\n";
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
                cerr<<"存储分配失败\n";
                exit(1);
            }
            last=last->link;
            last->data=i;
        }
        last->link=first;
        jose2(first,n,2);
    }
}
