#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while (a--)
    {
    int n;
    cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            cout<<" ";
            for(int j=1;j<=i;j++)
                cout<<"*";
            for(int j=i-1;j>0;j-- )
                cout<<"*";
                cout<<endl;
        }
        for(int i=n-1;i>=1;i--)
        {
             for(int j=1;j<=n-i;j++)
            cout<<" ";
            for(int j=1;j<=i;j++)
                cout<<"*";
            for(int j=i-1;j>0;j-- )
                cout<<"*";
                cout<<endl;
        }
    }
}

