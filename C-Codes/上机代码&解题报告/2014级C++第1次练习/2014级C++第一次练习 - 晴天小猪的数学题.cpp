#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		double a,b,c,x,y;
		cin>>a>>b>>c;
		x=b*b-4*a*c;
		y=x/(a*a);
		if(x<0)
		cout<<"No Answer"<<endl;
		if(x==0)
		cout<<fixed<<setprecision(2)<<-b/2*a<<endl;
		if(x>0)
		cout<<fixed<<setprecision(2)<<sqrt(y)<<endl;
	}
}
