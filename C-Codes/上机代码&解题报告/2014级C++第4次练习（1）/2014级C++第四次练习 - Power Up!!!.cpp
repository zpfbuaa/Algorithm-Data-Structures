#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double ans,a;
    while(cin>>a)
    {
        cout<<fixed<<setprecision(2)<<pow(a,acos(-1))<<endl;
//        ans=exp(acos(-1)*log(a));
//        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
}

