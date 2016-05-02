#include<iostream>
#include<string>
using namespace std;
typedef struct 
{
	string name;
	int num;
	int ave;
	int GPA;
}Girls;
int main()
{
	int n;
	Girls girl[1002];
	while(cin>>n)
	{
		for(int i=0;i<=n-1;i++)
			cin>>girl[i].name>>girl[i].num>>girl[i].ave>>girl[i].GPA;
        for(int i=0;i<n-1;i++)
			for(int j=0;j<n-i-1;j++)
			{
				if(girl[j].ave<girl[j+1].ave)
					swap(girl[j],girl[j+1]);
				else if(girl[j].ave==girl[j+1].ave)
				{
				     if(girl[j].GPA<girl[j+1].GPA)
					 	swap(girl[j],girl[j+1]);
					 else if(girl[j].GPA==girl[j+1].GPA)
					 	  if(girl[j].num>girl[j+1].num)
						  	swap(girl[j],girl[j+1]); 	
				}	    
	        }
	    for(int i=0;i<=n-1;i++)
	    	cout<<girl[i].name<<" "<<girl[i].num<<" "
			    <<girl[i].ave<<" "<<girl[i].GPA<<endl;
	}
}
