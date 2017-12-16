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

void f(int n,char start,char over,char middle)
{
    if(n==1)printf("%d %c->%c\n",n,start,over);
    else
    {
        f(n-1,start,middle,over);
        printf("%d %c->%c\n",n,start,over);
        f(n-1,middle,over,start);
    }
}
using namespace std;

int main()
{
    char A='A';
    char B='B';
    char C='C';
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        cout<<pow(2,n)-1<<endl;
        f(n,A,C,B);
    }
}























