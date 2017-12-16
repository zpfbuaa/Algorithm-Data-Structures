#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"请输入一个整数："<<endl; 
	while(cin>>n)
	{
		for(int i=0;i<=n/2+1;i++)
		{
			for(int j=i;j<=n/2;j++)
			{
				cout<<" "; 
			} 
			for(int j=0;j<=i;j++)
			{if(j==0)cout<<"@";
			  else cout<<"#";
			}   
            for(int j=i-1;j>=0;j--)
            {
            	if(j==0)cout<<"@";
				else cout<<"#";
			}   
            cout<<endl;
		}
		 for(int i=n/2;i>=0;i--)
        {
            for(int j=i;j<=n/2;j++)
        {
            cout<<" ";
        }
         for(int j=0;j<=i;j++)
         {
         	if(j==0)
         	cout<<"@";
			 else cout<<"#";
		 }
                
            for(int j=i-1;j>=0;j--)
            {
            	if(j==0)cout<<"@";
				else cout<<"#";
			}   
            cout<<endl;
        }
        cout<<"请输入一个整数："<<endl;
	}
}
