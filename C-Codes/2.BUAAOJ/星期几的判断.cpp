#include<iostream>
using namespace std;
int main()
{
	int y,m,d,w;
	while(cin>>y>>m>>d)
	{
	w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400) %7+1;
	cout<<w<<endl;
}
 } 
