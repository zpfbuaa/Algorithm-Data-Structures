#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#define Maxsize 1010
int a[Maxsize];

using namespace std;
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int ans=0;
        int flag=1;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(a[i]>a[j])
                    ans++;
                else if(a[i]==a[j])
                    flag=0;
            }
        }
//        cout<<"flag="<<flag<<endl;
//        cout<<"ans="<<ans<<endl;
        if(flag==0)
            cout<<"0"<<endl;
        else
        {
            if(ans==0)
                cout<<"1"<<endl;
            else if(ans==1)
                cout<<"-1"<<endl;
            else if(ans>1)
            {
             int key=-1;
              for(int i=1;i<=ans;i++)
                key*=key;
              cout<<key<<endl;
            }

        }
    }
}
