#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

bool isPrime(long long x)
{
	if(x==1)
	return false;
   else
	{
	for (int i=2;i<x;i++)
	{
		if(x%i==0)
		return false;
	}
	return true;
   }
}

int main()
{
      long long m,n;
      while(cin>>m>>n)
      {
      	for(int i=m;i<=n;i++)
		   if(isPrime(i))
		   cout<<i<<" ";
		cout<<endl;
      }

}

