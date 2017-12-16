#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n)
    {
        int t=0;
        m=n;
        for(;m!=1;)
        {
        if(m%2==0)
          {
           m=m/2;
           t++;
           }
        if(m%2!=0&&m!=1)
           {
           m=m*3+1;
           t++;
           }
        }
        cout<<t<<endl;
    }
}

