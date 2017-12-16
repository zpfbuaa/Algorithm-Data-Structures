#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    while(scanf("%d%d",&a,&b)!=EOF)
  {
     while(b!=0)
   {
     temp=b;
     b=a%b;
     a=temp;
   }
    if(1==a)
    printf("jhljxshidadoubi\n");
    else
    printf("shuishuowoshidadoubi\n");
  }
}

