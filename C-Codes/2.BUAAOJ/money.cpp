#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int s;
    while(scanf("%d",&s)!=EOF)
    {
        int ans=0;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int k=0;k<=100;k++)
            {
                if(i+2*j+5*k==s) ans++;
            }
        }
    }
    printf("%d\n",ans);
    }
    return 0;
}


