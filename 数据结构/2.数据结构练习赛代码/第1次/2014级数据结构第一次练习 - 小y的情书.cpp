#include<iostream>
using namespace std;
long long wa(int x)
{
	if(x<=3) return x-1;
	else return (wa(x-1)+wa(x-2))*(x-1);
}
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<wa(n)<<endl;
	} 
}
