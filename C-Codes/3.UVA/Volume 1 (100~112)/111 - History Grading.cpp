#include <bits/stdc++.h>
const int MAX=21;
int x[MAX];
int y[MAX];
int DP[MAX][MAX];
int b[MAX][MAX];
int n,i,j,loc;

using namespace std;

void work(int x[],int y[],int n)
{
    memset(DP,0,sizeof(DP));
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(x[i]==y[j])
            {
                DP[i][j]=DP[i-1][j-1]+1;
            }
            else
                DP[i][j]=max(DP[i-1][j],DP[i][j-1]);
        }
    }
    cout<<DP[n][n]<<endl;
}

int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        cin>>loc;
        x[loc]=i;
    }
    while(~scanf("%d",&loc))
    {
        y[loc]=1;
        for(int j=2; j<=n; j++)
        {
            cin>>loc;
            y[loc]=j;
        }
        work(x,y,n);
        memset(y,0,sizeof(y));
    }
    return 0;
}
