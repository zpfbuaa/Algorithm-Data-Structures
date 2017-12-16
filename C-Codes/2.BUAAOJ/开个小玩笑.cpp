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
    int t,la,lb,sum;
    char a[105],b[105];
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%s%s",a,b);
        la=strlen(a);
        lb=strlen(b);
        for(int i=0;i<la;i++)
        {
            sum+=a[i]-'0';
        }
        for(int i=0;i<lb;i++)
        {
            sum+=b[i]-'0';
        }
        printf("%d\n",sum);
    }
}






















