#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int huiwen(string s)
{
    int len=s.size();
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
            return 0;
    }
    return 1;
}
int jingxiang(string s)
{
    char key[]="AEHIJLMOSTUVWXYZ012358";
    int length=strlen(key);
    int len=s.size();
    int ans=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<length;j++)
        {
            if(s[i]==key[j])
            {
                ans++;
                break;
            }
        }
    }
    if(ans==len)return 1;
    else return 0;
}
int main()
{
    string s;
    while(cin>>s)
    {
        int len=s.size();
        if(huiwen(s)&&jingxiang(s))
            cout<<s<<"\t--�����־���"<<endl;
        else if(huiwen(s)&&!jingxiang(s))
            cout<<s<<"\t--ֻ���Ĳ�����"<<endl;
        else if(!huiwen(s)&&jingxiang(s))
            cout<<s<<"\t--������ֻ����"<<endl;
        else
            cout<<s<<"\t--�����Ĳ�����"<<endl;
    }
}
