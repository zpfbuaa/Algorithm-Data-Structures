#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int ans=0,num1=0,num2=0;
        int len=s.size(),i;
        for(i=0;i<len;i++)
        {
            if(s[i]=='(')
                num1++;
            else if(s[i]==')')
                num2++;
        }
        ans=fabs(num1-num2);
        printf("%d\n",ans);
    }
}
