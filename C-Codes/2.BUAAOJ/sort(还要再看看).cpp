#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define Maxsize 100010
int a[Maxsize];
using namespace std;

int partition(int a[],int low,int high)
{
    int key=a[low];
    while(low<high)
    {
        while(low<high && a[high]<=key)
        {
            high--;
        }
        a[low]=a[high];
        while(low<high && key<=a[low])
        {
            low++;
        }
        a[high]=a[low];
    }
    a[low]=key;
    return low;
}

void QS(int a[],int left,int right)
{
    if(left<right)
    {
        int key=partition(a,left,right);
        QS(a,left,key-1);
        QS(a,key+1,right);
    }
}

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        memset(a,0,sizeof(a));
        int i;
        for(i=0;i<n;i++)
            cin>>a[i];
        QS(a,0,n-1);
        for(i=n-1;i>=0;i--)
            printf("%d ",a[i]);
        printf("\n");
    }
}
