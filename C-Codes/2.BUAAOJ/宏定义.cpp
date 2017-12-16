#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
#define Maxsize 110
#define mset(a) memset(a,0,sizeof(a))
#define fcin(a,n) for(int i=1;i<=n;i++) cin>>a[i];
#define fput(a,n) for(int i=1;i<=n;i++) cout<<a[i]<<" ";
int a[Maxsize];

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		mset(a);
		fcin(a,n);
		fput(a,n);
	}
}

