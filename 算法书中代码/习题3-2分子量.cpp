#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int len=s.size();
        double ans=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='C'&&s[i+1]!='H'&&s[i+1]!='O'&&s[i+1]!='N'&&s[i+1]!='C'&&i+1<len)
                ans+=12.01*double(s[i+1]-'0');
            else if(s[i]=='H'&&s[i+1]!='C'&&s[i+1]!='O'&&s[i+1]!='N'&&s[i+1]!='H'&&i+1<len)
                ans+=1.008*double(s[i+1]-'0');
            else if(s[i]=='O'&&s[i+1]!='H'&&s[i+1]!='C'&&s[i+1]!='N'&&s[i+1]!='O'&&i+1<len)
                ans+=16.00*double(s[i+1]-'0');
            else if(s[i]=='N'&&s[i+1]!='H'&&s[i+1]!='O'&&s[i+1]!='C'&&s[i+1]!='N'&&i+1<len)
                ans+=14.01*double(s[i+1]-'0');
            else {
                switch(s[i])
                {
                    case 'C':ans+=12.01;break;
                    case 'H':ans+=1.008;break;
                    case 'O':ans+=16.00;break;
                    case 'N':ans+=14.01;break;
                }
            }
        }
        cout<<s<<"的分子量是"<<fixed<<setprecision(3)<<ans<<"g/mol"<<endl;
    }
}
