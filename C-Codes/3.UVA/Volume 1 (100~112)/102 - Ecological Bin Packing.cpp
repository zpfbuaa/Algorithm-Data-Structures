#include <bits/stdc++.h>

using namespace std;

string s[6]={"BCG","BGC","CBG","CGB","GBC","GCB"};
int n[3][3];
int num[6];
int main()
{
    while(~scanf("%d%d%d%d%d%d%d%d%d",&n[0][0],&n[0][1],&n[0][2],&n[1][0],&n[1][1],&n[1][2],&n[2][0],&n[2][1],&n[2][2]))
    {
        int ans=0,i,j;
        num[0]=n[1][0] + n[2][0] + n[0][2] + n[2][2] + n[0][1] + n[1][1];
        num[1]=n[1][0] + n[2][0] + n[0][1] + n[2][1] + n[0][2] + n[1][2];
        num[2]=n[1][2] + n[2][2] + n[0][0] + n[2][0] + n[0][1] + n[1][1];
        num[3]=n[1][2] + n[2][2] + n[0][1] + n[2][1] + n[0][0] + n[1][0];
        num[4]=n[1][1] + n[2][1] + n[0][0] + n[2][0] + n[0][2] + n[1][2];
        num[5]=n[1][1] + n[2][1] + n[0][2] + n[2][2] + n[0][0] + n[1][0];
        for (j=i=0; ++i<6; j=num[i]<num[j] ? i : j);
        cout<<s[j]<<" "<<num[j]<<endl;
    }
}


