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
int fab[46];
using namespace std;

int main()
{
    int n,i;
    fab[0]=1;fab[2]=1;
    for(int i=2;i<=45;i++)
        fab[i]=fab[i-1]+fab[i-2];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<46;i++)
            if(n==fab[i])
                break;
        if(i==46)
            printf("Oh,yes!\n");
        else printf("Oh,holly shit!\n");
    }
}























