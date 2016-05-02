#include<iostream>
using namespace std;

int main()
{
	int m,n;
	while(cin>>m>>n)
	{
	if(n%(m+1)!=0)
	cout<<"WIN\n";
	else
	cout<<"LOST\n";
   }
}
