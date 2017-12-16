#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n; int c; int d=0;
    cin>>n;
    while(n--)
    {
        int a;
        int b=0;
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            cin>>c;
            c+=d;
            b=b+abs(c);
            d=c;
        }
        cout<<b<<endl;
    }
}

