//just testing data~
#include<iostream>
#include<fstream>
#include<string.h>
#include<algorithm>
using namespace std;
int a[10010];
int dp[10010];
int main()
{
    int n;
    //ifstream cin("H:\in1.txt");
    //ofstream cout("H:\out1.txt");
    while(cin>>n){
        bool yes=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        a[n]=9999999999;
        dp[0]=1;
        for(int i=1;i<=n;i++){
            int maxx=0;
            int countt=0;
            for(int j=0;j<i;j++){
                if(a[j]<=a[i] && dp[j]>maxx) maxx=dp[j];
            }
            for(int j=0;j<i;j++){
                if(dp[j]==maxx) countt++;
            }
            if(countt>1 && maxx!=0) yes=true;
            dp[i]=maxx+1;
        }
        if(yes)
        cout<<dp[n]-1<<endl;
        else cout<<dp[n]-2<<endl;

    }
}
