#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

bool Palindrome(string x)
{
    int len=x.size(),i;
    for(i=0;i<len;i++)
    {
        if(x[i]!=x[len-i-1])
            return false;
    }
    return true;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int k,i,ans=0;
        string s;
        scanf("%d",&k);
        for(i=1;i<=k;i++)
        {
            cin>>s;
            if(Palindrome(s))
               ans++;
        }
        printf("%d\n",ans);
    }
}
