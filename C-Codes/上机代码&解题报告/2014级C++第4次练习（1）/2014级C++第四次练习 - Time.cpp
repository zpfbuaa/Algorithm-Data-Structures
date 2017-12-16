#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d:%d:%d",&a,&b,&c)!=EOF)
    {
        printf("%d",a*60*60+b*60+c);
        cout<<endl;
    }

}

