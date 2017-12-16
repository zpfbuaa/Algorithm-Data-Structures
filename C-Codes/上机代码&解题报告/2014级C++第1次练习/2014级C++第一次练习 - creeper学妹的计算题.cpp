#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a,b,c,d,e,f,g,h,s;
		cin>>a>>b>>c>>d>>e>>f>>g>>h;
		if(b!=0&&e!=0&&f!=0)
		s=(a*c*e*f+b*d*g*h)/(b*e*f);
		cout<<s<<endl;
	}
}
