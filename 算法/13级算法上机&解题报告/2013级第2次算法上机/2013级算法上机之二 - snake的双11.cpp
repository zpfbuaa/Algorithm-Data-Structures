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
#define max_size 5010
int a[max_size];

using namespace std;

int main ()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(a,0,sizeof(a));
        int key,i,j;
        if(n==0&&m==0)
            return 0;
        else
        {
            for(i=1;i<=m;i++)
            {
                int flag=0;
                scanf("%d",&key);
                if(a[key]==0)
                {
                    a[key]=key;
                }
                else if(a[key]!=0)
                {
                    if(key<n)
                    {
                    for(int t=key+1;t<=n;t++)
                    {
                        if(a[t]==0)
                        {
                            a[t]=key;
                            flag=1;
                            break;
                        }
                    }
                    }
                    if(flag==0)
                    {
                        for(int t=1;t<key;t++)
                        {
                            if(a[t]==0)
                            {
                                a[t]=key;
                                break;
                            }
                        }
                    }
                }
            }
            for(int i=1;i<=n;i++)
                printf("%d ",a[i]);
            printf("\n");
        }
    }
}
