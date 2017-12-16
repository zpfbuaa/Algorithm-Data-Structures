#include<iostream>
using namespace std;
int main()
{
    int a,b,c,a1,b1,c1;
    while(cin>>a>>b>>c>>a1>>b1>>c1)
    {
        if((a*b1==a1*b)&&(a*c1!=a1*c))
            cout<<"Safe and Sound"<<endl;
        else
            cout<<"Dead End"<<endl;
    }
}

