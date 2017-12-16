#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#define Maxsize 10010
int a[Maxsize];

using namespace std;

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int ans=0;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int choose;
		scanf("%d",&choose);
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{

				switch(choose)
				{
					case 1:
				if(a[j]<a[j+1])
				{
					swap(a[j],a[j+1]);
					ans++;
				}
				break;
				case 2:
				if(a[j]>a[j+1])
				{
					swap(a[j],a[j+1]);
					ans++;
				}
				break;
				}

			}
		}
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n%d\n",ans);
	}
}
