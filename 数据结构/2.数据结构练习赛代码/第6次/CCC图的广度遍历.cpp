#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

typedef struct
{
    int * vertex;
    int **edge;
    int v,e;
} Graph;

void initGraph(Graph &g,int v,int e)
{
    g.v=v;
    g.e=e;
    g.vertex = new int[v];
    g.edge=new int*[v];
    for(int i=0; i<g.v; i++)
        g.edge[i]=new int[v];
    memset(g.vertex,0,sizeof(g.vertex));
    for(int i=0; i<g.v; i++)
        memset(g.edge[i],0,sizeof(g.edge));
}

void createGraph(Graph &g,int v,int e)//输入节点数、边数，端点编号，建立图
{
    for(int i=0; i<g.v; i++)
        for(int j=0;j<g.v;j++)
            g.edge[i][j]=0;
    g.v=v;
    g.e=e;
    int n1,n2;
    for(int i=0; i<g.e; i++)
    {
        cin>>n1>>n2;
        g.edge[n1][n2]=g.edge[n2][n1]=1;
    }
}

void bfs(Graph &g,int v)
{
    int *visited=new int[g.v];
    for(int i=0;i<g.v;i++)
        visited[i]=0;
    int *que=new int[g.v+1];
    int head=0,tail=0;
    que[tail++]=v;
    int temp;
    cout<<v<<" ";
    visited[v]=1;
    bool flag = true;
    while(flag)
    {
        flag=false;
        while(head!=tail)
        {
            temp=que[head++];
            for(int i=0; i<g.v; i++)
            {
                if(g.edge[temp][i]!=0&&visited[i]==0)
                {
                    cout<<i<<" ";
                    que[tail++]=i;
                    visited[i]=1;
                }
            }
        }
        for(int i=0;i<g.v;i++)
        {
            if(visited[i]==0)
            {
                v=i;
                flag=true;
                break;
            }
        }
    }
    cout<<endl;
    delete []visited;
    delete []que;
}

int main()
{
    Graph g;
    int T;
    cin>>T;
    while(T--)
    {
        int v,e;
        cin>>v>>e;
        initGraph(g,v,e);
        createGraph(g,g.v,g.e);
        bfs(g,0);
    }
}
