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
    int a,b,c;
    while(~scanf("%d:%d:%d",&a,&b,&c))
    {
        if(a>=24)
            cout<<"No\n";
        else
        {
            if(b>=60)cout<<"No\n";
            else
            {
                if(c>=60)cout<<"No\n";
                else cout<<"Yes\n";
            }
        }
    }
}






















