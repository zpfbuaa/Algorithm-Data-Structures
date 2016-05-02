#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n,n1;
    while(scanf("%d%d",&n,&n1)!=EOF)
    {
        cout<<max(n,n1)<<endl;
    }
}
