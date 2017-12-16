#include<iostream>
using namespace std;
int main()
{
    int n;int t;
    while(cin>>n)
    {
        t=0;
        char x[n];
        for(int i=0;i<=n-1;i++)
        {
            cin>>x[i];
        }
        for(int i=0;i<=n-1;i++)
        {
        if(int(x[i])-int(x[i-1])==1&&int(x[i-1])-int(x[i-2])==1)
            t++;
        }

     if(t>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}

