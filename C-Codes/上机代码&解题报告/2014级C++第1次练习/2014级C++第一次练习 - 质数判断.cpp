#include <iostream>
#include <cmath>

using namespace std;

bool Prime(int n)
{
    if(n==1)return false;
    else
    {
        int key=sqrt(n);
        for(int i=2;i<=key;i++)
        {
            if(n%i==0)return false;
        }
        return true;
    }
}
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
       int x;
       cin>>x;
       if(Prime(x))cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
   }
}
