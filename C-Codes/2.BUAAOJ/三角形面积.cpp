#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double x1,y1,z1,x2,y2,z2,x3,y3,z3;
	while(cin>>x1>>y1>>z1>>x2>>y2>>z2>>x3>>y3>>z3)
	{
	    double a1=x2-x1,b1=y2-y1,c1=z2-z1;
		double a2=x3-x1,b2=y3-y1,c2=z3-z1;
		double s1=b1*c2-b2*c1,s2=a2*c1-a1*c2,s3=a1*b2-b1*a2;
		double ans=s1*s1+s2*s2+s3*s3;
		cout<<"s1="<<s1<<" "<<"s2="<<s2<<" "<<"s3="<<s3<<endl; 
		cout<<fixed<<setprecision(30)<<pow(ans,0.5)/2<<endl;
	}
 } 
