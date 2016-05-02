#include <iostream>
#include <cstdio>
#include <cstring>
#define Maxsize 10
int a[Maxsize][Maxsize];

using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        memset(a,0,sizeof(a));
        int x=0,y=n-1,tot=1;
        a[x][y]=tot;
        while(tot<n*n)
        {
        while(x+1<n&&!a[x+1][y])a[++x][y]=++tot;
        while(y-1>=0&&!a[x][y-1])a[x][--y]=++tot;
        while(x-1>=0&&!a[x-1][y])a[--x][y]=++tot;
        while(y+1<n&&!a[x][y+1])a[x][++y]=++tot;
        }
        for(x=0;x<n;x++)
        {
            for(y=0;y<n;y++)
                cout<<a[x][y]<<" ";
            cout<<endl;
        }
    }
}
