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
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int a,b,ans=0;
        scanf("%d%d",&a,&b);
        for(int i=a; i<=b; i++)
        {
            int x=i%10;
            int y=i/10%10;
            int z=i/100%10;
            int key=pow(x,3)+pow(y,3)+pow(z,3);
            if(key==i)
            {
                printf("%d ",key);
                ans++;
            }
        }
        if(ans==0)printf("-1\n");
        else printf("\n");
    }

}

