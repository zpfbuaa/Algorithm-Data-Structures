#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;
typedef int DataType;
typedef struct node
{
    DataType data;
    struct node *link;
} CircNode, *CircList;
void Josephus(CircNode *&Js,int n,int m)
{
    CircNode *p=Js, *pre=NULL;
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=1; j<m; j++)
        {
            pre=p;
            p=p->link;
        }
        cout<<"���е����� "<<p->data<<endl;
        pre->link=p->link;
        delete p;
        p=pre->link;
    }
    cout<<"������ʤ����"<<p->data<<endl;
    cout<<p->data<<endl;
};
int main()
{
    int t;
    cout<<"������Ϸ������";
    cin>>t;
    while(t--)
    {
        CircNode *clist, *last;
        int i,n,m;
        clist=new CircNode;
        if(!clist)
        {
            cerr<<"�洢����ʧ�ܣ�\n";
            exit(1);
        }
        clist->data=1;
        clist->link=clist;
        last=clist;
        cout<<"������Ϸ�������ͱ��������";
        cin>>n>>m;
        for(i=2; i<=n; i++)
        {
            last->link=new CircNode;
            if(!last->link)
            {
                cerr<<"�洢����ʧ�ܣ�\n";
                exit(1);
            }
            last=last->link;
            last->data=i;
        }
        last->link=clist;
        Josephus(clist,n,m);
    }
}
