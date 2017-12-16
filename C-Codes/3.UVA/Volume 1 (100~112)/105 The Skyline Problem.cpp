#include<bits/stdc++.h>
#define MAX 10010

using namespace std;

int height[MAX];

int main()
{
    int i,l,h,r,max_right=-1;
    while (~scanf("%d%d%d", &l, &h, &r))
    {
        memset(height,0,sizeof(height));
        for (i=l; i<r; i++)
            height[i]=max(height[i], h); //注意右端点处不记录高度
        max_right=max(max_right,r);
    }
    for (i=1; i<max_right; i++)
        if (height[i]!=height[i-1])
            printf("%d %d ",i,height[i]);
    printf("%d 0\n", max_right);
    return 0;
}
