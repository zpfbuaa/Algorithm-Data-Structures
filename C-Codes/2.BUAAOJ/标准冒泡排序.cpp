#include<iostream>
#include<cstdio>
#include<cstring>
int x[1010];
using namespace std;
int main()
{
    int n;
    int ans;
    while(cin>>n)
    {
        memset(x,0,sizeof(x));
        ans=0;
        for(int i=0; i<n; i++)
            cin>>x[i];
        for(int i=0; i<n; i++)
            for(int j=0; j<n-i-1; j++)
                if(x[j]>x[j+1])
                {
                    swap(x[j],x[j+1]);
                    ans++;
                }
        for(int i=0; i<n; i++)
            cout<<x[i]<<" ";
        cout<<endl;
    }
}


