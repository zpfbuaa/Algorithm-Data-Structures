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
long long f[12]={0,9,18,108,198,1098,1998,10998,19998,109998,199998,1099998};    //Ԥ�����1��10^i-1֮�乲��f[i]��������

long long find(long long x)
{
	if (x==0) return 0;		//�߽����
	if (x<10) return x;		//С��10ʱÿ�����ֶ���һ��������
	long long len,i,ans,t,na,a,b,nx;
	len=0;
	nx=x;
	while (nx)			//����x��λ��
	{
		len++;
		nx/=10;
	}
	ans=f[len-1];			//ans��ʼ��
	t=1;
	for (int k=1;k<=(len/2);k++) t*=10;
	if (len%2==0)     //����λ��Ϊż������
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
	else           //����λ��Ϊ��������
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
		x=find(m);  //��1��m�ж��ٸ�������
		y=find(n);  //��1��n�ж��ٸ�������
		cout<<y-x<<endl;
	}
}
