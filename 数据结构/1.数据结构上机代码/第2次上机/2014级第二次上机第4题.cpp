//2014级数据结构第二次上机 - 链表的公共结点
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<memory.h>
#define maxsize 1010
using namespace std;
int a[maxsize],b[maxsize];
int main()
{
    int n,m,mmin;
    while(cin>>n>>m)
    {
        if(n<=m)mmin=n;
        else mmin=m;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        int i;
        for(i=1;i<=mmin&&a[n-i]==b[m-i];i++);
        if(i==1) cout<<"My God\n";
        else cout<<a[n-i+1]<<endl;
    }
}

