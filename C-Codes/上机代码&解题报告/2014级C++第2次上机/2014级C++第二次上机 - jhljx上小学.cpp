#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int  work(char n)
{
    int sum=0;
    while(n!='\n')
    {
        int num=int(n)-int('0');
        sum=(sum*10+num)%9;
        n=getchar();
    }
    return sum;
}

int main()
{
    char n;
    n=getchar(); 
    cout<<work(n)<<endl;
}
