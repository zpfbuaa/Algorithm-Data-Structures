#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#define Maxsize 222
#define INF 0x3f3f3f3f
using namespace std;

typedef double Type;
typedef struct
{
    Type data[Maxsize];
    int parent[Maxsize];
    int lchild[Maxsize];
    int rchild[Maxsize];
}Tree;

//void InitTree(Tree &t)
//{
//    memset(t.parent,-1,sizeof(t.parent));
//    memset(t.lchild,-1,sizeof(t.lchild));
//    memset(t.rchild,-1,sizeof(t.rchild));
//}

void CreateTree(Tree &t,int n)
{
    memset(t.parent,-1,sizeof(t.parent));
    memset(t.lchild,-1,sizeof(t.lchild));
    memset(t.rchild,-1,sizeof(t.rchild));
    for(int i=0; i<n; i++)
        cin>>t.data[i];
    for(int i=n; i<2*n-1; i++)
    {
        double min1,min2;
        min1=min2=INF;
        int lchild=-1;
        int rchild=-1;
        for(int j=0;j<i;j++)
        {
            if(t.parent[j]==-1)
            {
                if(t.data[j]<min1)
                {
                    min2=min1;
                    rchild=lchild;
                    min1=t.data[j];
                    lchild=j;
                }
                else if(t.data[j]<min2)
                {
                    min2=t.data[j];
                    rchild=j;
                }
            }
        }
        t.data[i]=t.data[rchild]+t.data[lchild];
        t.lchild[i]=lchild;
        t.rchild[i]=rchild;
        t.parent[lchild]=t.parent[rchild]=i;
    }
}

int main()
{
    Tree t;
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        CreateTree(t,n);
        double ans=0;
        for(int i=n;i<2*n-1;i++)
            ans+=t.data[i];
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
}
