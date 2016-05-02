#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iomanip>
#define MAX_SIZE 100
int a[MAX_SIZE];
int b[MAX_SIZE];
int c[MAX_SIZE];
using namespace std;

int main()
{
    int n,k,m;
    while(cin>>n>>k>>m)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        for(int i=1;i<=n;i++)
        {
            a[i]=i;
        }
//        for(int i=1;i<=n;i++)
//            cout<<a[i]<<endl;
//        cout<<n<<" "<<k<<" "<<m;
//        system("pause");
        int ans=n;
        int left=1;int num1=1;
        int right=n;int num2=1;
        int flag=1;
        while(ans!=1)
        {
            for(;num1!=k;left=(left+1+n)%n)
            {
                if(a[left]!=0)
                {
                    num1++;
                }
            }
//            cout<<"num1="<<num1<<endl;
            b[flag]=a[left];
            for(;num2!=m;right=(right-1+n)%n)
            {
                if(a[right]!=0)
                {
                    num2++;
                }
            }
//            cout<<"num2="<<num2<<endl;
            c[flag]=a[right];

            a[left]=a[right]=0;
            num2=num1=1;
            cout<<ans<<" "<<flag<<endl;
            ans--;
            flag++;
        }
//        for(int i=1;i<=flag;i++)
//        {
//            cout<<b[i]<<endl;
//        }
//        for(int i=1;i<=flag;i++)
//        {
//            cout<<c[i]<<endl;
//        }
        for(int i=1;i<=flag;i++)
        {
            if(b[i]!=c[i])
            {
                cout<<b[i]<<" "<<c[i]<<" ";
            }
            else
            {
                cout<<",";
            }
        }
    }
}
