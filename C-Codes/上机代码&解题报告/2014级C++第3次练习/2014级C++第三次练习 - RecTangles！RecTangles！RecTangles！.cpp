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
//���ǵ�һ��С���������ǰ�����������С������һ�¡����š��
//ע�������ô��ݵġ������������ȷ����С��ϵ������������
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
//���ǰ���������һ�¡��������������������ڶ��μ���ʱ�õ�
{
	int tem;
	tem=a;
	a=b;
	b=tem;
}
int pd(int x1,int x2,int x3)
{
//�����ж��������ж�һ�µ�3�����ǲ�����ǰ������֮��
	if (x3>=x1&&x3<=x2)
	return 1;
	else
	return 0;
}
int main()
{
 	int x1,x2,x3,x4,y1,y2,y3,y4;
 	int tem,px,py;//��ʱ��
 	while (cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
 	{
 		if (x1==x2||y1==y2||x3==x4||y3==y4)
 		cout <<"NO\n";//���Ǿ��β�����ʱ�������
 		else
 		{
 			px=0;
			py=0;//��ʼ��
 			for(int i=1;i<=2;i++)//�ظ����Ρ�
 			{
 				pp(x1,x2);
 				pp(y1,y2);//ȷ��һ�´�С��ϵ
 				if (pd(x1,x2,x3)==1||pd(x1,x2,x4)==1)
 					px=1;
/*���x3��x1,x2֮�����x4��x1��x2֮�䡣����ĳ�������������ھ�����
��Ϊ����4�����������x3��x4��y3��y4��2*2��ϡ������ȿ��Ǻ�������һ�����ϵġ�*/
				if (pd(y1,y2,y3)==1||pd(y1,y2,y4)==1)
 					py=1;//�����ꡣ��
 					hh(x1,x3);
 					hh(x2,x4);
 					hh(y1,y3);
 					hh(y2,y4);
//�����껻һ�¡���������2�μ��顣
 			}
 			if(px==1&&py==1)
//���μ��飬ֻҪ��һ�������������������ڷ�Χ�ھ����ཻ�ˡ�
 			cout <<"YES\n";
 			else
 			cout <<"NO\n";
 		}
	}
}

