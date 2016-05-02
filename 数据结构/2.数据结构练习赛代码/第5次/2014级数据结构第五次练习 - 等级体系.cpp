#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
int x;
using namespace std;
typedef char Type;
typedef struct tree
{
    Type data;
    struct tree *lchild;
    struct tree *rchild;
} Bnode,*Btree;

typedef struct
{
    Bnode* data[100];
    int top;
} Stack;

int leaf(Btree T,int *x)
{
    Bnode *p=T;
    if(p->lchild==NULL&&p->rchild==NULL)
        *x=*x+1;
    if(p->lchild!=NULL)
        leaf(p->lchild,&*x);
    if(p->rchild!=NULL)
        leaf(p->rchild,&*x);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        Btree T;
        Bnode *p, *t;
        int key;
        char ch[30005];
        T=NULL;
        Stack S;
        S.top=0;
        cin>>ch;
        int len=strlen(ch);
        for(int i=0; i<len; i++)
        {
            switch(ch[i])
            {
            case '(':
                S.data[++S.top]=p;
                key=0;
                break;
            case ')':
                t=S.data[S.top--];
                break;
            case ',':
                key=1;
                break;
            default:
                p=new Bnode;
                p->data=ch[i];
                p->lchild=NULL;
                p->rchild=NULL;
                if(T==NULL)T=p;
                else
                {
                    t=S.data[S.top];
                    if(key==0)t->lchild=p;
                    else
                        t->rchild=p;
                }
            }
        }
        x=0;
        leaf(T,&x);
        cout<<x<<endl;
    }
}

