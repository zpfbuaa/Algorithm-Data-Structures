#include <iostream>
#include <cstdio>
char ch[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
using namespace std;

int main()
{
    int i;
    char c;
    while((c=getchar())!=EOF)
    {
        for(i=1;ch[i]!=c;i++);
        cout<<ch[i-1];
    }
}
