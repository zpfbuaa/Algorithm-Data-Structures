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
        string a;
        cin>>a;
        int num=0;
        for(int i=0;i<n-2;i++)
        {
            if(a[i]<='z'&&a[i]>='a'&&a[i+1]<='Z'&&a[i+1]>='A'&&a[i+2]<='z'&&a[i+2]>='a')
            {
                num++;
            }
        }
        if(num==0)cout<<"No\n";
        else cout<<"Yes\n";
    }
}























