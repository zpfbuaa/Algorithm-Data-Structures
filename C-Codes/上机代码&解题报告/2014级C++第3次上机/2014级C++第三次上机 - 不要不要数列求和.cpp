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
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int sum1=0,sum2=0,k1=1,k2=1;
        for(int i=1;i<=n;i++)
        {
            k1=k1*(2*i+1)%10007;
            sum1=(sum1+k1)%10007;
        }
        for(int i=1;i<=m;i++)
        {
           k2=k2*(2*i)%10007;
           sum2=(sum2+k2)%10007;
        }
        if(sum1-sum2<0)
        cout<<((sum1-sum2)%10007+10007)%10007<<endl;
        else cout<<sum1-sum2<<endl;
    }
}






















