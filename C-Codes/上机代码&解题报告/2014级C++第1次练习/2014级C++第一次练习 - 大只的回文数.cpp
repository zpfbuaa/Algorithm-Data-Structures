#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <string>


using namespace std;

long long m,n,x,y;
long long f[12]={0,9,18,108,198,1098,1998,10998,19998,109998,199998,1099998};    //预处理从1到10^i-1之间共有f[i]个回文数

long long find(long long x)
{
	if (x==0) return 0;		//边界情况
	if (x<10) return x;		//小于10时每个数字都是一个回文数
	long long len,i,ans,t,na,a,b,nx;
	len=0;
	nx=x;
	while (nx)			//求数x的位数
	{
		len++;
		nx/=10;
	}
	ans=f[len-1];			//ans初始化
	t=1;
	for (int k=1;k<=(len/2);k++) t*=10;
	if (len%2==0)     //处理位数为偶数的数
	{
		a=(x/t);
		b=(x%t);
		t=t/10;
		ans=ans+(a-t);
		na=0;
		while(a)
		{
			na=na*10+a%10;
			a/=10;
		}
	}
	else           //处理位数为奇数的数
	{
		a=(x/t);
		t*=10;
		b=(x%t);
		t=t/10;
		ans=ans+(a-t);
		na=0;
		while (a)
		{
			na=na*10+a%10;
			a/=10;
		}
	}
	if (b>=na) ans++;
	return ans;

}

int main()
{

	while (cin>>m>>n)
	{
		m=m-1;
		x=find(m);  //求1到m有多少个回文数
		y=find(n);  //求1到n有多少个回文数
		cout<<y-x<<endl;
	}
}
