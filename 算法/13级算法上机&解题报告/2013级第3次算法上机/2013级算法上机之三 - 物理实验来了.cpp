//#include <cstdio>
//#define max_size 5010
//int a[max_size];
//int b[max_size];
//int c[max_size];
//int main()
//{
//
//    int n;
//    while(~scanf("%d",&n)&&n)
//    {
//        int ans=0;
//        for(int i=0; i<n; i++)
//        {
//            scanf("%d",&a[i]);
//        }
//        for(int i=0; i<n; i++)
//        {
//            b[i]=1;
//            c[n-1-i]=1;
//            for(int j=0; j<i; j++)
//            {
//                if(a[j]>a[i]&&b[j]+1>b[i])
//                    b[i]=b[j]+1;
//                if(a[n-1-i]<a[n-i-j]&&c[n-1-j]+1>c[n-i-i])
//                    c[n-1-i]=c[n-i-j]+1;
//            }
//        }
//        for(int i=0; i<n; i++)
//        {
//            if((c[i]-1)&&(b[i]-1)&&(c[i]+b[i]-1>ans))
//                ans=b[i]+c[i]-1;
//        }
//        if(ans)
//            printf("%d\n",ans);
//        else
//            printf("failed!\n");
//    }
//}
//
//
//
#include<cstdio>
#include<iostream>
int a[5011];
int left[5011],right[5011];
int main()
{
    int n;
    while(~scanf("%d",&n)&&n)
    {
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int ans=0;
        for(int i=0; i<n; i++)
        {
            left[i]=1;
            right[n-1-i]=1;
            for(int j=0; j<i; j++)
            {
                if(a[j]>a[i]&&left[j]+1>left[i])
                    left[i]=left[j]+1;
                if(a[n-1-i]<a[n-1-j]&&right[n-1-j]+1>right[n-1-i])
                    right[n-1-i]=right[n-1-j]+1;
            }
        }
        for(int i=0; i<n; i++)
            if((right[i]-1)&&(left[i]-1)&&(right[i]+left[i]-1>ans))
                ans=left[i]+right[i]-1;
        if(ans)
            printf("%d\n",ans);
        else
            printf("failed!\n");
    }
}
