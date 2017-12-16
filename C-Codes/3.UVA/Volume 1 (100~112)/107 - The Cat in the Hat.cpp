#include <bits/stdc++.h>

using namespace std;

int main()
{
	int h,num;
	while(~scanf("%d%d",&h,&num))
    {
        if(0==h&&0==num)
            break;
        int left=1,right=10000000,mid;
        while(left)
        {
            mid=(left+right)/2;
            if(fabs(log(mid)*log(h)-log(mid+1)*log(num))<=0.000001) break;
            if(log(mid)*log(h)-log(mid+1)*log(num)>0)
                right=mid;
            else
                left=mid;
        }
        int x=0,y=h;
        left=1;
        while(h>1)
        {
            h/=(1+mid);
            left*=mid;
            x+=left;
            y+=h*left;
        }
        printf("%d %d\n",x-num+1,y);
    }
}


