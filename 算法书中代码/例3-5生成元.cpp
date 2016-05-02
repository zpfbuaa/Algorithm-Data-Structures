#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
int search(int n)
{
    for(int i=1;i<n;i++)
    {
        int x=i,y=i;
        while(x>0){y+=x%10;x=x/10;}//每一位相加
        if(y==n)return i;
    }
    return 0;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(search(n))cout<<search(n)<<endl;
        else cout<<0<<endl;
    }
}
