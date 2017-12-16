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

using namespace std;

int main()
{
    long long n,m;
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            printf("-1\n");
        else if(n!=0&&m==0)
            printf("1\n");
        else if(n==0&&m!=0)
            printf("0\n");
        else
        {
            int key=n%10;
            switch(key)
            {
                case 0:printf("0\n");break;
                case 1:printf("1\n");break;
                case 2:if(m%4==0)printf("6\n");
                       else if(m%4==1)printf("2\n");
                       else if(m%4==2)printf("4\n");
                       else if(m%4==3)printf("8\n");break;
                case 3:if(m%4==0)printf("1\n");
                       else if(m%4==1)printf("3\n");
                       else if(m%4==2)printf("9\n");
                       else if(m%4==3)printf("7\n");break;
                case 4:if(m%2==0)printf("6\n");
                       else if(m%2==1)printf("4\n");break;
                case 5:printf("5\n");break;
                case 6:printf("6\n");break;
                case 7:if(m%4==0)printf("1\n");
                       else if(m%4==1)printf("7\n");
                       else if(m%4==2)printf("9\n");
                       else if(m%4==3)printf("3\n");break;
                case 8:if(m%4==0)printf("6\n");
                       else if(m%4==1)printf("8\n");
                       else if(m%4==2)printf("4\n");
                       else if(m%4==3)printf("2\n");break;
                case 9:if(m%2==0)printf("1\n");
                       else if(m%2==1)printf("9\n");break;
                default:break;
            }
        }
    }
}






















