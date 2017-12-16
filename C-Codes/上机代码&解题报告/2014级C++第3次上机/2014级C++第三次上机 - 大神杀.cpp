#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double s,n2;
    int n1,l1,l2,t;
    while(cin>>s)
    {
    n1=floor(s);
    n2=s-n1;t=0;
    while (1==1)
    {
      l1=n1%10;
      n1=n1/10;
      l2=floor(n2*10+0.000009);
      n2=n2*10-l2;
      //cout<<l1<<" "<<l2<<endl;
      //cout<<n1<<" "<<n2<<endl;
      //cout<<floor(n2*100000)<<endl;
      if (l1!=l2)
        break;
      if (n1==0)
      {
        if (floor(n2*100000)<=0)
            t=1;
        break;
      }
     }
     if (t==1)
       cout <<"Yes"<<endl;
     else
       cout <<"No"<<endl;
     }
}


