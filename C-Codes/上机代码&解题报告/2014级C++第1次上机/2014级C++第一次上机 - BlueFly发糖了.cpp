#include <iostream>

using namespace std;

int main()//等差数列求和
{
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        cout<<(k+1)*(2*n+k*m)/2<<endl;
    }
}
