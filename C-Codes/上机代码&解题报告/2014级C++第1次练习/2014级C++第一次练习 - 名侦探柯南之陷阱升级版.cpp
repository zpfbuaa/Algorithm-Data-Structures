#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b)
        {
            cout<<"1"<<endl;
        }
        else if(b<=c&&b<d)
        {
            cout<<"fail"<<endl;
        }
        else if(b==c&&b==d)
        {
            int t;
            t=a/b;
            if(b*t==a)
            {cout<<t<<endl;}
            else if(b*t<a)
            {cout<<t+1<<endl;}
        }
        else
        {
            int t=0,l=0,m;
            m=d;
            while(l<a)
            {
                t=t+1;
                l=l+b;
                if(l>=a) {break;}
                while(l>=m)
                {
                    m=m+d;
                }
                m=m-d;
                if(l-c>m)
                {
                    l=l-c;
                }
                else if(l-c<=m)
                {
                    l=m;
                }
            }
            cout<<t<<endl;
        }
    }
}
