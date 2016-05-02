#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    float a,b;
    while(cin>>a>>b)
    cout<<fixed<<setprecision(42)<<a/b<<endl;
}
