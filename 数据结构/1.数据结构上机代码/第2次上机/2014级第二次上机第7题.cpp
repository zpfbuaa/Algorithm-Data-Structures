//2014级数据结构第二次上机 - JosephusⅢ
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

typedef struct nnode
{
    string name;
    struct nnode *link;
} cnode,*node;

void jose3(node c,int n,int m)
{
    node p=c,pre=NULL;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<m;j++)
        {
            pre=p;
            p=p->link;
        }
        pre->link=p->link;
        cout<<p->name<<endl;
        delete p;
        p=pre->link;
    }
}

int main()
{
    int n,w,s;
    cin>>n;
    getchar();
    node first=new cnode;
    if(!first){cerr<<"存储分配错误\n";exit(1);}
    getline(cin,first->name);
    first->link=first;
    node last=first;
    for(int i=2;i<=n;i++)
    {
        last->link=new cnode;
        if(!last->link){cerr<<"存储分配错误\n";exit(1);}
        last=last->link;
        getline(cin,last->name);
    }
    scanf("%d,%d",&w,&s);
    node p=first;
    last->link=p;
    for(int i=1;i<w;i++)
    {
        p=p->link;
    }
    jose3(p,n,s);
}
