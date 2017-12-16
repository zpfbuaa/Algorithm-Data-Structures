#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,s;
        cin>>a>>b>>c;
        if(a<=b)
            cout<<"1"<<endl;
        else
        {
            if(b<=c)
                cout<<"fail"<<endl;
            else
            {
                if((a-b)%(b-c)!=0)
                    cout<<(a-b)/(b-c)+2<<endl;
                else
                    cout<<(a-b)/(b-c)+1<<endl;
            }
        }
    }
}
