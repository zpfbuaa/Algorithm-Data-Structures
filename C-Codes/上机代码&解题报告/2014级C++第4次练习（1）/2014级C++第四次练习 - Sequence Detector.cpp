#include<iostream>
using namespace std;
int main()
{
    int n;int a,b,c;
    while(cin>>n)
    {
        cin>>a>>b;
        int e=1,d=1;
        for(int i=3;i<=n;i++)
        {
            cin>>c;
            if(b-a==c-b)
            {
                e++;
            }
            if(b*b==a*c)
            {
                d++;
            }
            a=b;
            b=c;
        }
        if(e==n-1&&d!=n-1)
           cout<<"1"<<endl;
        if(e!=n-1&&d==n-1)
            cout<<"2"<<endl;
        if(e==n-1&&d==n-1)
            cout<<"3"<<endl;
        if(e!=n-1&&d!=n-1)
            cout<<"4"<<endl;
        //cout<<e<<" "<<d<<endl;
    }
}
