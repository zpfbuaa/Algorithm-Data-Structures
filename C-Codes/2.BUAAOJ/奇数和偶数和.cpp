#include<iostream>
#include<cstdio>
using namespace std;
int main()
{ 
	while(1)
	{
	int ans1=0,ans2=0;
	int n;
	while(cin>>n)
	{
		(n%2==0)?ans1+=n:ans2+=n;
		if(getchar()=='\n')break;
	}
	cout<<"偶数和为"<<ans1<<"\n"<<"奇数和为"<<ans2<<endl;	
   }
} 
