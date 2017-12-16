#include <bits/stdc++.h>

using namespace std;


int length(int n) {
    int len=1;
    while(n!=1)
    {
        if(n%2==1)
            n=3*n+1;
        else
            n=n/2;
        len=len+1;
    }
    return len;
}

int main(void) {
    int start,over;
    int s,o;
    int ans;
    while(~scanf("%d%d",&start,&over))
    {
        ans=1;
        s=start, o=over ;
        if(s>o) swap(s,o);
        for(int i=s;i<=o;i++)
        {
            int len=length(i);
            ans=max(ans,len);
        }
        printf("%d %d %d\n",start,over,ans);
    }
}
