#include<iostream>
using namespace std;
#define maxn 22
char a[maxn][maxn];
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n+1;i+=2)
        {
            for(int b=i;b<=n-i+1;b++)
            {
                a[i][b]='*';
                a[b][i]='*';
                a[b][n-i+1]='*';
                a[n-i+1][b]='*';
            }
        }
        for(int i=2;i<=n+1;i+=2)
        {
            for(int b=i;b<=n-i+1;b++)
            {
                a[i][b]='#';//ио
                a[b][i]='#';//вС
                a[b][n-i+1]='#';//ср
                a[n-i+1][b]='#';//об
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
        }
        cout<<endl;
    }
}
