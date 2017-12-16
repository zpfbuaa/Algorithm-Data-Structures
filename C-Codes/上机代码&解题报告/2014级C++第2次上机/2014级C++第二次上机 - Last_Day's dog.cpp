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
    int a,b,c,d;
    while(cin>>a)
    {
        d=a*2-1;
        for(b=1; b<=a; b++)
        {
            for(c=1; c<=b-1; c++)
            {
                cout<<" ";
            }
            for(c=1; c<=d; c++)
            {
                cout<<"#";
            }
            d=d-2;
            cout<<endl;
        }
    }
}
