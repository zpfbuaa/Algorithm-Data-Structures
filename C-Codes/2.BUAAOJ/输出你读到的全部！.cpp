#include<cstdio>
#include<iostream>

using namespace std;
int main()
{
    int A,B,K;
    while(scanf("%d%d%d",&A,&B,&K)!=EOF)
    {
        int ans=0;
        int a=A,b=B;
        if(A==0&&B==0)
            break;
        else
        {
            for(int i=1;i<=K&&(A!=0||B!=0);i++)
            {
                if(A%10==B%10)
                    ans++;
                A/=10;
                B/=10;
            }
        }
        if(ans==K)
            cout<<"-1"<<endl;
        else
            cout<<a+b<<endl;
    }
}
