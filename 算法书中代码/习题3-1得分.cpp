#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int key=0,ans=0;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='X')key=0;//����������ϳ�O�ĸ�����������0��
            else if(s[i]=='O'){key++;ans+=key;}
        }
        cout<<ans<<endl;
    }
}
