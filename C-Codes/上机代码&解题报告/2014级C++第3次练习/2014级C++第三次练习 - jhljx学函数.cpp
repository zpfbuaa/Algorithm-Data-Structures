#include<iostream>
using namespace std;
void change(int a,int b)
    {
        int c;
        c=a;
        a=b;
        b=c;
        cout<<a<<" "<<b<<endl;
    }
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
    change(x,y);
    }

}

