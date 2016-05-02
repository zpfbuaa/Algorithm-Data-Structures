#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<cstring>
using namespace std;
typedef char SElemType;
typedef struct node
{
    SElemType data;
    struct node *link;
} LinkStack;
void InitStack(LinkStack *&s)
{
    s=new LinkStack;
    if(!s)
    {
        cerr<<"´æ´¢·ÖÅä´íÎó\n";
        exit(1);
    }
    s->link=NULL;
}
void Push(LinkStack *&s,SElemType x)
{
    LinkStack *p=new LinkStack;
    if(!p)
    {
        cerr<<"´æ´¢·ÖÅä´íÎó\n";
        exit(1);
    }
    p->data=x;
    p->link=s->link;
    s->link=p;
}
void Pop(LinkStack *&s)
{
    LinkStack *p=s->link;
    s->link=p->link;
    delete p;
}
int SEmpty(LinkStack *&s)
{
    return s->link==NULL;
}
int main()
{
    string a;
    while(cin>>a)
    {
        int l=a.length();
        if(l%2==1)
            cout<<"No"<<endl;
        else
        {
            LinkStack *slist;
            InitStack(slist);
            for(int i=0;i<l;i++)
            {
                if(a[i]=='*')
                    Push(slist,a[i]);
                else if(a[i]<=90 && a[i]>=65)
                {
                    if((slist->link->data)-a[i]==32)
                        Pop(slist);
                    else
                        Push(slist,a[i]);
                }
                else if(a[i]>=97)
                {
                    if(a[i]-(slist->link->data)==32 || slist->link->data=='%')
                    {
                        Pop(slist);
                    }
                    else
                        Push(slist,a[i]);
                }
                else if(a[i]=='%')
                {
                    if((slist->link->data)>=97)
                        Pop(slist);
                    else
                        Push(slist,a[i]);
                }
                else if(a[i]=='#')
                {
                    if((slist->link->data=='*'))
                        Pop(slist);
                }
            }
            if(slist->link==NULL)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}

