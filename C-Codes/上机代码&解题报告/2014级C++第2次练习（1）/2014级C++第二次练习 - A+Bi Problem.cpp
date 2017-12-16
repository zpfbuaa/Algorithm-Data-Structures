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
    double a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        char x;
        cin>>x;
        if(x=='+')cout<<fixed<<setprecision(2)<<a+c<<" "<<b+d<<endl;
        else if(x=='-')cout<<fixed<<setprecision(2)<<a-c<<" "<<b-d<<endl;
        else if(x=='*')cout<<fixed<<setprecision(2)<<a*c-b*d<<" "<<a*d+b*c<<endl;
        else if(x=='/')cout<<fixed<<setprecision(2)<<(a*c+b*d)/(c*c+d*d)<<" "<<(b*c-a*d)/(c*c+d*d)<<endl;
    }
}






















