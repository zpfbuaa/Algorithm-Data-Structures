#include<iostream>
using namespace std;

int main()
{
    int n,s,t,j;
    while(cin>>n>>s)
    {
        t=0,j=n;
        int x[n];
       /* for(int i=0;i<=j-1;i++)
        {
            x[n]=0;
        }*/
        n=0;
        for(int i=0;i<=j-1;i++)
        {
            cin>>x[i];
        }
        for(int i=1;i<=j-1;i++)
        {
         for(int i=n+1;i<=j-1;i++)
          {
            if(x[n]+x[i]>s)
            t++;
          }
           n++;
        }
        cout<<t<<endl;
    }
}

