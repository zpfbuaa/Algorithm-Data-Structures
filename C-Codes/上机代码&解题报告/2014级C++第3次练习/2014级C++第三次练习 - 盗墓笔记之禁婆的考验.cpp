#include<iostream>
using namespace std;
int main()
{
    int n,m,k,a,b,c;
    while(cin>>n>>m>>k)
    {
        c=0;
        a=1;
        while(a!=0)
        {
            b=n%m;
            a=n/m;
            n=a;
            if(b==k)
                c++;
        }
        cout<<c<<endl;
    }
}

