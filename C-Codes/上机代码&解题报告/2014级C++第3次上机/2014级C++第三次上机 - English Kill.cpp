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
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int m,a=0;
        cin>>m;
        for(int j=1;j<=m;j++)
        {
            int c;
            cin>>c;
            if(c%3==0)a++;
        }
        if(a==m)cout<<"Case #"<<i<<": Yes"<<endl;
        else cout<<"Case #"<<i<<": No"<<endl;
    }
}






















