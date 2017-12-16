//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <queue>
//#include <map>
//#include <set>
//#include <stack>
//#include <iomanip>
//#include <algorithm>
//#include <vector>
//#include <sstream>
//#include <cmath>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    int x1,y1,x2,y2,x3,y3,x4,y4;
//    while(scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF)
//    {
//        int mx=max(x1,x2);
//        int lx=min(x1,x2);
//        int my=max(y1,y2);
//        int ly=min(y1,y2);
//        if(x3>=lx&&x3<=mx&&y3>=ly&&y3<=my)printf("YES\n");
//        else if(x3>=lx&&x3<=mx&&y4>=ly&&y4<=my)printf("YES\n");
//        else if(x4>=lx&&x4<=mx&&y4>=ly&&y4<=my)printf("YES\n");
//        else if(x4>=lx&&x4<=mx&&y3>=ly&&y3<=my)printf("YES\n");
//        else printf("NO\n");
//    }
//}
//
#include<iostream>
#include <stdio.h>
#include <cmath>
#include <string>
#define debug(x) cout <<#x<<"="<<x<<endl;
using namespace std;
void pp(int &a,int &b)
//这是第一个小函数。就是把两个数按从小到大排一下。排排。额。
//注意是引用传递的。这个函数用来确定大小关系。纯属懒。。
{
	int tem;
	if (a>b)
	{
		 tem=a;
		 a=b;
		 b=tem;
	}
}
void hh(int &a,int &b)
//这是把两个数换一下。换换，，就是用来做第二次检验时用的
{
	int tem;
	tem=a;
	a=b;
	b=tem;
}
int pd(int x1,int x2,int x3)
{
//这是判定，就是判断一下第3个数是不是在前两个数之间
	if (x3>=x1&&x3<=x2)
	return 1;
	else
	return 0;
}
int main()
{
 	int x1,x2,x3,x4,y1,y2,y3,y4;
 	int tem,px,py;//临时数
 	while (cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
 	{
 		if (x1==x2||y1==y2||x3==x4||y3==y4)
 		cout <<"NO\n";//就是矩形不存在时的情况。
 		else
 		{
 			px=0;
			py=0;//初始化
 			for(int i=1;i<=2;i++)//重复两次。
 			{
 				pp(x1,x2);
 				pp(y1,y2);//确定一下大小关系
 				if (pd(x1,x2,x3)==1||pd(x1,x2,x4)==1)
 					px=1;
/*如果x3在x1,x2之间或者x4在x1，x2之间。就是某个横坐标满足在矩形内
因为矩形4个点的坐标是x3，x4和y3，y4的2*2组合。所以先考虑横坐标有一个符合的。*/
				if (pd(y1,y2,y3)==1||pd(y1,y2,y4)==1)
 					py=1;//纵坐标。。
 					hh(x1,x3);
 					hh(x2,x4);
 					hh(y1,y3);
 					hh(y2,y4);
//把坐标换一下。用来做第2次检验。
 			}
 			if(px==1&&py==1)
//两次检验，只要有一次满足横坐标和纵坐标在范围内就是相交了。
 			cout <<"YES\n";
 			else
 			cout <<"NO\n";
 		}
	}
}

