#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <string>
#define maxsize 20
int a1[maxsize],b1[maxsize];
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        memset(a1,0,sizeof(a1));
        memset(b1,0,sizeof(b1));
        int lena=0,lenb=0;
        int len=0;
        int ans=0;
        if(a==0&&b==0)
            return 0;
        else
        {
            while(a!=0||b!=0)
            {
                if(a!=0)
                {
                    lena++;
                    a1[lena]=a%10;
                    a=a/10;
                }
                if(b!=0)
                {
                    lenb++;
                    b1[lenb]=b%10;
                    b=b/10;
                }
            }
            if(lena<=lenb)
            {
                len=lenb;
                for(int i=1; i<=len; i++)
                {
                    int num=a1[i]+b1[i];
                    if(num>=10&&num<20)
                    {
//                        if(i<=lena)
//                        a1[i+1]=a1[i+1]+1;
                        b1[i+1]=b1[i+1]+1;
                        ans++;
                    }
                    if(num>=20&&num<30)
                    {
//                        if(i<=lena)
//                        a1[i+1]=a1[i+1]+2;
                        b1[i+1]=b1[i+1]+2;
                        ans++;
                    }
                }
            }
            else
            {
                len=lena;
                for(int i=1; i<=len; i++)
                {
                    int num=a1[i]+b1[i];
                    if(num>=10&&num<20)
                    {
                        a1[i+1]=a1[i+1]+1;
//                        if(i<=lenb)
//                        b1[i+1]=b1[i+1]+1;
                        ans++;
                    }
                    if(num>=20&&num<30)
                    {
                        a1[i+1]=a1[i+1]+2;
//                        if(i<=lenb)
//                        b1[i+1]=b1[i+1]+2;
                        ans++;
                    }
                }
            }
            if(ans==0)
                cout<<"No carry operation."<<endl;
            else if(ans==1)
                cout<<ans<<" carry operation."<<endl;
            else if(ans>1)
                cout<<ans<<" carry operations."<<endl;
        }
    }
}

