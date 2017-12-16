#include <bits/stdc++.h>

using namespace std;
bool exist[26];
int pos[26];
int main()
{
	string s;
	int i,j,lens;
	while(cin>>s)
    {
        int max_ans=0,start=0;
        lens=s.size();
        memset(pos,0,sizeof(pos));
        memset(exist,false,sizeof(exist));
        for(i=0;i<lens;i++)
        {
            if(exist[s[i]-'a'])
            {
                for(j=start;j<=pos[s[i]-'a'];j++)
                    exist[s[j]-'a']=false;

                start=pos[s[i]-'a']+1;
                exist[s[i]-'a']=true;
                pos[s[i]-'a']=i;
            }
            else
            {
                exist[s[i]-'a']=true;
                pos[s[i]-'a']=i;
                max_ans=max(max_ans,i-start+1);
            }
        }
        printf("%d\n",max_ans);
    }
    return 0;
}


