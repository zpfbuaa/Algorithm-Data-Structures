#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int panduan(string s,int x,int y)//���п��Եõ���С���ֵ���Ϊ��x������
{
    int len=s.size();
    int ans=0;
    for(int i=0;i<len;i++)
    {
        if(s[(x+i-1)%len]!=s[(y+i-1)%len])
            return s[(x+i-1)%len]<s[(y+i-1)%len];//������Ϊ���������ѭ���ҵ���С��
    }
    return 0;
}
int main()
{
    string s;
    while(cin>>s)
    {
        int len=s.size();
        int ans=1;//ansһֱ�������С���ֵ����ǵ�ans������
        //�����������1~len������0~len-1
        for(int i=1;i<=len;i++)
        {
            if(panduan(s,i,ans))
                ans=i;
        }
        for(int i=0;i<len;i++)
        {
            cout<<s[(i+ans-1)%len];
        }

        cout<<endl;
    }
}
