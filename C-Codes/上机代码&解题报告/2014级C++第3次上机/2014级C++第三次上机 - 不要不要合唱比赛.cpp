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
    int a=0,b=0,d=0,sum=0;
    char c;
    while(cin>>c)
    {
        if(c=='_')a++;
        else if(c=='=')b++;
        else d++;
    }
    sum=2*a+b+4*d;
    if(sum%4==0)cout<<sum/4<<endl;
    else if(sum%2==0)cout<<sum/2<<"/2"<<endl;
    else cout<<sum<<"/4"<<endl;
}






















