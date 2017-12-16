#include <bits/stdc++.h>
#define MAX 100010

using namespace std;

char Input()
{
    char str;
    scanf("%c",&str);
    while(str == ' ' || str == '\n')
        scanf("%c",&str);
    return str;
}

int work(int v,int *leaf)
{
    int temp, value;
    scanf("%d",&value);
    temp = Input();
    int max_num=0,left=0,right=0;
    if(temp == '(')
    {
        if(work(v-value,&left))  max_num=1;
        temp = Input();
        if(work(v-value,&right)) max_num=1;
        temp = Input();
        if(left&&right) max_num = (v == value);
    }
    else *leaf = 1;
    return max_num;
}
int main()
{
    int n,temp;
    while(~scanf("%d",&n))
    {
        Input();
        if(work(n,&temp))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}


