#include <stdio.h>
#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    cout<<"调用了swap(int &a,int &b)"<<endl;
    int t=a;a=b;b=t;
    cout<<"\nsizeof(t):"<<sizeof(t)<<"\nsizeof(a):"<<sizeof(a)<<"\nsizeof(b):"<<sizeof(b)<<endl;
}

void swap(int *a,int *b)
{
    cout<<"调用了swap(int *a,int *b)"<<endl;
    int t=*a;*a=*b;*b=t;
    cout<<"\nsizeof(t):"<<sizeof(t)<<"\nsizeof(a):"<<sizeof(a)<<"\nsizeof(b):"<<sizeof(&b)<<endl;
}

int main()
{
    int a=3, b=4;
    swap(&a,&b);
    printf("%d %d\n",a,b);
    swap(a,b);
    printf("%d %d\n",a,b);
    return 0;
}

