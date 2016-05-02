#include<iostream>
#define maxn 22
char a[maxn][maxn];
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int x=0,y=1;
        memset(a,0,sizeof(a));
        int tot=1,key=1;
        while(tot<n*n)
        {
            while(x+1<n&& !a[x+1][y])
            {
                a[++x][y]='*';
            }
            while(y-1>=0&& !a[x][y-1])
            {
                a[x][--y]='*';
            }
            while(x-1>=0&& !a[x-1][y])
            {
                a[--x][y]='*';
            }
            while(y+1>n &&)
        }
    }
}

