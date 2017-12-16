#include<iostream>
using namespace std;
int main()
{
    int x,a,b,c;
	while(cin>>x)
	{
		a=(x%1000-x%100)/100;//百位
		b=(x%100-x%10)/10;//十位
		c=x%10;//个位
		cout<<c*100+b*10+a<<endl;
	}
}



