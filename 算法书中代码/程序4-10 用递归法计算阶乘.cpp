#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

int f(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return f(n-1)*n;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    cout<<f(n)<<endl;
    return 0;
}




