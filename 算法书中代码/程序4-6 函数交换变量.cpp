#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int a=3, b=4;
    swap(a,b);
    cout<<"a:"<<a<<"\nb:"<<b<<endl;
    return 0;
}


