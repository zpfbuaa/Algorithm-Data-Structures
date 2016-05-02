#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
	int buff,a[100100]={0};
    stack<int>b;	
    scanf("%d",&buff);
    b.push(buff);//第一项 

    for(int i=1,tmp=0;i<n;tmp=i++)
    {
        scanf("%d",&buff);

        while(!b.empty()&&buff>b.top())//下一项大于前面一项 
        {
            b.pop();//出栈 

            while(a[tmp])					
                tmp--;
            a[tmp--]=buff;
        }
        b.push(buff);//进栈 
    }

    for(int i=0;i<n;i++)
        printf("%d\n",(a[i]==0?-1:a[i]));

    
   }return 0;
}



