#include<iostream>
#include<stdlib.h>
#include <string>
#include <cstring>
using namespace std;
typedef struct{
char data;
double weight;
int parent;
int lchild;
int rchild;
}HTNode;
void CreateHT(HTNode ht[],int n)
{
    int i,j,k,lnode,rnode;
    double min1,min2;
    for(i=0;i<2*n-1;i++)
        ht[i].parent=ht[i].lchild=ht[i].rchild=-1;
    for(i=n;i<2*n-1;i++)
    {
        min1=min2=32767;
        lnode=rnode=-1;
        for(k=0;k<=i-1;k++)
            if(ht[k].parent==-1)
        {
            if(ht[k].weight<min1)
               {
                min2=min1;rnode=lnode;
                min1=ht[k].weight;lnode=k;
               }
               else if(ht[k].weight<min2)
               {
                   min2=ht[k].weight;rnode=k;
               }
        }
        ht[i].weight=ht[lnode].weight+ht[rnode].weight;
        ht[i].lchild=lnode;ht[i].rchild=rnode;
        ht[lnode].parent=i;ht[rnode].parent=i;

    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        HTNode ht[2005];
        int n=0;
        char a[2005];
        cin>>a;
        int l=strlen(a);
        int count[2005]={};
        for(int i=0; i<l; ++i)
            ++count[a[i]-'a'];
            for(int i=0; i<26; ++i)
            if(count[i]>0)
                ht[n++].weight=count[i];
        CreateHT(ht,n);
        int ans=0;
        for(int i=n; i<2*n-1; ++i)
            ans+=ht[i].weight;
        cout<<ans<<endl;

    }
}
