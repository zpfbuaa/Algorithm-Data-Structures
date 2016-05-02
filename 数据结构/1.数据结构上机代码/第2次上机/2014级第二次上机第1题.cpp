////2014级数据结构第二次上机 - jhljx的情怀
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//using namespace std;
//
//typedef struct node
//{
//    string name;
//    struct node *link;
//} cnode,*nnode;
//
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        getchar();
//        cnode *first=new cnode;
//        if(!first)
//        {
//            cerr<<"存储分配失败\n";
//            exit(1);
//        }
//        first->link=NULL;
//        for(int i=1; i<=n; i++)
//        {
//            cnode *p=new cnode;
//            if(!p)
//            {
//                cerr<<"存储分配失败\n";
//                exit(1);
//            }
//            getline(cin,p->name);
//            p->link=first->link;
//            first->link=p;
//        }
//        first=first->link;
//        for(int i=1; i<=n; i++,first=first->link)
//        {
//            cout<<first->name<<endl;
//        }
//    }
//}
//
#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
typedef struct nnode
{
    string name;
    nnode *link;
} cnode,*node;

int main()
{
    int n;
    while(cin>>n)
    {
        getchar();
        node first=new cnode;
        if(!first)
        {
            cerr<<"存储分配失败\n";
            exit(1);
        }
        first->link=NULL;
        for(int i=1; i<=n; i++)
        {
            node last=new cnode;
            if(!last)
            {
                cerr<<"存储分配失败\n";
                exit(1);
            }
            last->link=first->link;
            getline(cin,last->name);
            first->link=last;
        }
        for(int i=1; i<=n; i++)
        {
            first=first->link;
            cout<<first->name<<endl;
        }
    }
}

