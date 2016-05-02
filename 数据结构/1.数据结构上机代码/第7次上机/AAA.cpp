#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define Maxsize 100010
int array[Maxsize];

using namespace std;

int MergeArray(int arry[],int start,int mid,int end,int temp[])//数组的归并操作
{
    int i=mid;
    int j=end;
    int k=0;
    int count=0;
    while(i>=start&&j>mid)
    {
        if(arry[i]>arry[j])
        {
            temp[k++]=arry[i--];
            count+=j-mid;
        }
        else
        {
            temp[k++]=arry[j--];
        }
    }
    while(i>=start)
    {
        temp[k++]=arry[i--];
    }

    while(j>mid)
    {
        temp[k++]=arry[j--];
    }
    for(i=0;i<k;i++)
        arry[end-i]=temp[i];
    return count;

}

long long  Pairs(int arry[],int start,int end,int temp[])
{
    long long  ans = 0;
    if(start<end)
    {
        int mid=(start+end)/2;
        ans+=Pairs(arry,start,mid,temp);//找左半段的逆序对数目
        ans+=Pairs(arry,mid+1,end,temp);//找右半段的逆序对数目
        ans+=MergeArray(arry,start,mid,end,temp);//在找完左右半段逆序对以后两段数组有序，然后找两段之间的逆序对。最小的逆序段只有一个元素。
    }
    return ans;
}


long long  InversePairs(int arry[],int len)
{
    int *temp=new int[len];
    long long  num=Pairs(arry,0,len-1,temp);
    delete[] temp;
    return num;
}

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
        long long ans=0;
        ans=InversePairs(array,n);
        printf("%lld\n",ans);
    }
    system("pause");
}
