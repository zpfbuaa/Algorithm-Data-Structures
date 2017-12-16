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
    int n;
    while(~scanf("%d",&n))
    {
        int m;
        string a;
        cin>>a;
        for(int i=0;i<n;i++)
        {
            m=a[i]-'0';
            if(m>=0&&m<=9)cout<<m;
            else cout<<m+48;
        }
        cout<<endl;
    }
}






















