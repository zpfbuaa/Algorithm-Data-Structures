#include<iostream>
using namespace std;
int a[1000];
int main()
{
	int n;
	cout<<"第一次输入数据"<<endl; 
	cout<<"请输入数据个数n= ";
	while(cin>>n)
	{
		int count=1;
	cout<<"请输入这写数据："<<endl; 
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<n;i++)//一次循环 
	{
		for(int j=1;j<=n-i;j++)//二次循环 
		if(a[j]>a[j+1])//比较a[j]和a[j+1]大小，如果 a[j]>a[j+1] 
		swap(a[j],a[j+1]); //就交换a[j]与a[j+1]的值 
	 } 
	 cout<<"数据由大到下："<<endl; 
	 for(int i=1;i<=n;i++)
	 cout<<a[i]<<" ";
	 cout<<endl;
	 cout<<"最小为："<<a[1]<<endl;
	 cout<<"最大为："<<a[n]<<endl;
	 count++;
	 cout<<"第"<<count<<"次输入数据"<<endl; 
	 cout<<"请输入数据个数n= ";
	 
   }
 } 
