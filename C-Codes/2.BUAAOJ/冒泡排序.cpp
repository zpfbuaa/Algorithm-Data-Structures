#include<iostream>
using namespace std;
int a[1000];
int main()
{
	int n;
	cout<<"��һ����������"<<endl; 
	cout<<"���������ݸ���n= ";
	while(cin>>n)
	{
		int count=1;
	cout<<"��������д���ݣ�"<<endl; 
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<n;i++)//һ��ѭ�� 
	{
		for(int j=1;j<=n-i;j++)//����ѭ�� 
		if(a[j]>a[j+1])//�Ƚ�a[j]��a[j+1]��С����� a[j]>a[j+1] 
		swap(a[j],a[j+1]); //�ͽ���a[j]��a[j+1]��ֵ 
	 } 
	 cout<<"�����ɴ��£�"<<endl; 
	 for(int i=1;i<=n;i++)
	 cout<<a[i]<<" ";
	 cout<<endl;
	 cout<<"��СΪ��"<<a[1]<<endl;
	 cout<<"���Ϊ��"<<a[n]<<endl;
	 count++;
	 cout<<"��"<<count<<"����������"<<endl; 
	 cout<<"���������ݸ���n= ";
	 
   }
 } 
