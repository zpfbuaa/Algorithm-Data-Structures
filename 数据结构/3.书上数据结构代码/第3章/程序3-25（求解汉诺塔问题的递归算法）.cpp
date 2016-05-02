//程序3-25（求解汉诺塔问题的递归算法）
#include<string.h>
void Hanoi(int n,string A,string B,string C)
{
	if(n==1)
	cout<<"Move top disk from "<<A<<"to "<<C<<endl;
	els
	{
		Hanoi(n-1,A,C,B);
		cout<<"Move top disk from "<<A<<"to "<<C<<endl;
		Hanoi(n-1,B,A,C);
	}
}
