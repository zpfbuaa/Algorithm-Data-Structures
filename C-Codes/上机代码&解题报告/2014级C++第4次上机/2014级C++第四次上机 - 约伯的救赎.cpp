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
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            switch(i%4)
            {
                case 1:
                case 2:
                    cout<<"#";
                    break;
                case 3:
                case 0:
                    cout<<"*";
                    break;
                default:break;
            }
            if(i%2==0)cout<<endl;
        }if(i%2==0)cout<<endl;
    }
}
