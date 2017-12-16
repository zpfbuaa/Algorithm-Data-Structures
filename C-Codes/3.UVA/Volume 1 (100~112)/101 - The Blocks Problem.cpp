#include <bits/stdc++.h>
#define MAX 30
#define INF 10000000
using namespace std;
int MAP[MAX][MAX];
void find_pos(int MAP[MAX][MAX],int n,int temp,int &posx,int &posy)
{
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(MAP[i][j]==temp)
            {
                posx=i;
                posy=j;
                flag=true;
                break;
            }
            if(flag==true)
                break;
        }
    }
}

int main()
{
    int n,i,j;
    while(~scanf("%d",&n))
    {
        string s1,s2;
        int start,to;
        int posx,posy;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                if(j==0)
                    MAP[i][j]=i;
                else
                    MAP[i][j]=INF;
        }
        while(cin>>s1)
        {
            if(s1=="quit")
                break;
            else if(s1=="move")
            {
                cin>>start>>s2>>to;
                if(s2=="onto")
                {//判断是否在同一摞
                    int x1,x2;
                    find_pos(MAP,n,start,posx,posy);
                    x1=posx;
                    find_pos(MAP,n,to,posx,posy);
                    x2=posx;
                    if(x1==x2)
                        continue;
                    find_pos(MAP,n,start,posx,posy);
                    for(j=posy+1;j<n;j++)
                    {
                        if(MAP[posx][j]!=INF)
                        {
                            MAP[MAP[posx][j]][0]=MAP[posx][j];
                            MAP[posx][j]=INF;
                        }
                    }
                    MAP[posx][posy]=INF;
                    find_pos(MAP,n,to,posx,posy);
                    for(j=posy+1;j<n;j++)
                    {
                        if(MAP[posx][j]!=INF)
                        {
                            MAP[MAP[posx][j]][0]=MAP[posx][j];
                            MAP[posx][j]=INF;
                        }
                    }
                    MAP[posx][posy+1]=start;
                }
                else if(s2=="over")
                {
                    int x1,x2;
                    find_pos(MAP,n,start,posx,posy);
                    x1=posx;
                    find_pos(MAP,n,to,posx,posy);
                    x2=posx;
                    if(x1==x2)
                        continue;
                    find_pos(MAP,n,start,posx,posy);
                    for(j=posy+1;j<n;j++)
                    {
                        if(MAP[posx][j]!=INF)
                        {
                            MAP[MAP[posx][j]][0]=MAP[posx][j];
                            MAP[posx][j]=INF;
                        }
                    }
                    MAP[posx][posy]=INF;
                    find_pos(MAP,n,to,posx,posy);
                    for(j=posy+1;j<n;j++)
                    {
                        if(MAP[posx][j]==INF)
                        {
                            MAP[posx][j]=start;
                            break;
                        }
                    }
                }
            }
            else if(s1=="pile")
            {
                cin>>start>>s2>>to;
                if(s2=="onto")
                {
                    int x1,x2;
                    find_pos(MAP,n,start,posx,posy);
                    x1=posx;
                    find_pos(MAP,n,to,posx,posy);
                    x2=posx;
                    if(x1==x2)
                        continue;
                    find_pos(MAP,n,to,posx,posy);
                    for(j=posy+1;j<n;j++)
                    {
                        if(MAP[posx][j]!=INF)
                        {
                             MAP[MAP[posx][j]][0]=MAP[posx][j];
                             MAP[posx][j]=INF;
                        }
                    }
                    int tempx=posx,tempy=posy;
                    find_pos(MAP,n,start,posx,posy);
                    for(j=tempy+1;j<n;j++)
                    {
                        for(int j2=posy;j2<n;j2++)
                        {
                            if(MAP[posx][j2]!=INF)
                            {
                                MAP[tempx][j]=MAP[posx][j2];
                                MAP[posx][j2]=INF;
                                break;
                            }
                        }
                    }
                }
                else if(s2=="over")
                {
                    int x1,x2;
                    find_pos(MAP,n,start,posx,posy);
                    x1=posx;
                    find_pos(MAP,n,to,posx,posy);
                    x2=posx;
                    if(x1==x2)
                        continue;
                    find_pos(MAP,n,to,posx,posy);
                    int tempx=posx,tempy=posy;
                    for(j=posy;j<n;j++)
                    {
                        if(MAP[tempx][j]==INF)
                        {
                            tempy=j;
                            break;
                        }
                    }
                    find_pos(MAP,n,start,posx,posy);
                    for(j=tempy;j<n;j++)
                    {
                        for(int j2=posy;j2<n;j2++)
                        {
                            if(MAP[posx][j2]!=INF)
                            {
                                MAP[tempx][j]=MAP[posx][j2];
                                MAP[posx][j2]=INF;
                                break;
                            }
                        }
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d:",i);
            for(j=0;j<n;j++)
            {
                if(MAP[i][j]!=INF)
                {
                    printf(" %d",MAP[i][j]);
                }
            }
            printf("\n");/
        }
    }
}


