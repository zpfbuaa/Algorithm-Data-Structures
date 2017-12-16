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
    int y,m,d;
    while(~scanf("%d-%d-%d",&y,&m,&d))
    {
        if(m==1||m==2)
        {
            y--;
            m=m+12;
        }
        int key=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
        if(key==5)printf("Fire\n");
        else printf("Poor Creeper\n");
    }
}






















