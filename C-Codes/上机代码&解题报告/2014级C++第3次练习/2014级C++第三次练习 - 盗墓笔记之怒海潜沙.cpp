#include<iostream>
using namespace std;
int main()
{
    int a,a1,b,b1,c,d;
    while(cin>>a>>b)
    {
        a1=a;
        b1=b;
        if(a<b)
        {
            c=a;
            a=b;
            b=c;
        }
        while(a%b!=0)
        {
            d=b;
            b=a%b;
            a=d;
        }
        cout<<b*(a1/b)*(b1/b)<<endl;
    }
}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int a=0,b=0,c=0,d=0;
//	while(cin>>a>>b)
//	{
//		c=a;
//		d=b;
//		while(a!=b)
//		{
//		      if(a-b>0)
//			  a=a-b;
//			  else
//			  b=b-a;
//		}
//		cout<<a*(c/a)*(d/a)<<endl;
//	}
//}
//
//
//
