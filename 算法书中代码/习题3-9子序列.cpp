#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;
int find(string s,string t)
{
    int lens=s.size();
    int lent=t.size();
    int index=0;
    int ans=0;
    for(int i=0; i<lent; i++)
    {
        for(int j=index; j<lens; j++)
        {
            if(t[i]==s[j])
            {
                index=j+1;
                ans++;
                bcbreak;
            }

        }
    }
    if(ans==lent)return 1;
    else return 0;
}
int main()
{
    string s,t;
    while(cin>>s>>t)
    {
        if(find(s,t))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
