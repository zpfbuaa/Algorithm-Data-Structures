#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#define Maxsize 110
int a[Maxsize];

using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
        {

            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                    swap(a[j],a[j+1]);
            }
        }
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}
