#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int panduan(string s,int x,int y)//其中可以得到最小的字典序为第x种排序
{
    int len=s.size();
    int ans=0;
    for(int i=0;i<len;i++)
    {
        if(s[(x+i-1)%len]!=s[(y+i-1)%len])
            return s[(x+i-1)%len]<s[(y+i-1)%len];//这里是为了下面进行循环找到最小的
    }
    return 0;
}
int main()
{
    string s;
    while(cin>>s)
    {
        int len=s.size();
        int ans=1;//ans一直标记着最小的字典序是第ans中排序
        //（排序个数从1~len）不是0~len-1
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
