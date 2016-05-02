//程序1-12 计算课程学期总成绩的C++程序
#include<iostream>
#include<cstdio>
using namespace std;

void scoreCale(int number,float & score)
{
	int a,b,c;
	cin>>a>>b>>c;//Input
	score=0.3*a+0.2*b+0.5*c;
	cout<<score<<endl;
}
int main()
{
	while(1)
	{
		int num;
		float score;
		scoreCale(num,score);
	}
}
