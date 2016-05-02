#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits.h>
#define Maxsize 110
#define maxWeight INT_MAX

using namespace std;

typedef struct MGraph
{
    int numVertices,numEdges;
    int* VerticesList;
    int**Edge;
};

void InitGraph(MGraph& G)
{
    int i,j;
    G.numVertices=0;
    G.numEdges=0;
    G.VerticesList=new int[Maxsize];
    if(!G.VerticesList)
    {
        cerr<<"存储分配错误!"<<endl;
        exit(1);
    }
    G.Edge=new int*[Maxsize];
    if(!G.Edge)
    {
        cerr<<"存储分配错误!"<<endl;
        exit(1);
    }
    for(i=0; i<Maxsize; i++)
    {
        G.Edge[i]=new int[Maxsize];
        if(!G.Edge[i])
        {
            cerr<<"存储分配错误!"<<endl;
            exit(1);
        }
    }
    for(i=0; i<Maxsize; i++)
    {
        G.VerticesList[i]=0;
        for(j=0; j<Maxsize; j++)
            G.Edge[i][j]=(i==j)?0:maxWeight;
    }
}

int NumberOfVertices(MGraph&G)
{
    return G.numVertices;
}

int NumberOfEdges(MGraph&G)
{
    return G.numEdges;
}

int GetVertexPos(MGraph&G,int x)
{
    for(int i=0; i<G.numVertices; i++)
        if(G.VerticesList[i]==x)return i;
    return -1;
}

int GetValue(MGraph&G,int i)
{
    if(i==-1)return 0;
    else return G.VerticesList[i];
}

int GetWeight(MGraph&G,int v1,int v2)
{
    if(v1!=-1&&v2!=-1)return G.Edge[v1][v2];
    else return 0;
}

int FirstNeighbor(MGraph&G,int v)
{
    if(v!=-1)
    {
        for(int col=0; col<G.numVertices; col++)
            if(G.Edge[v][col]>0&&G.Edge[v][col]<maxWeight)return col;
    }
    else return -1;
}

int NextNeighbor(MGraph&G,int v,int w)
{
    if(v!=-1&&w!=-1)
    {
        for(int col=w+1; col<G.numVertices; col++)
            if(G.Edge[v][col]>0&&G.Edge[v][col]<maxWeight)return col;
    }
    else return -1;
}

void CreateGraph(MGraph&G,int n,int m)
{
    int i,j,k;
    int e1,e2;
    int weight;
    G.numVertices=n;
    G.numEdges=m;
    for(i=0; i<n; i++)
    {
        cout<<"输入顶点"<<endl;
        cin>>e1;
        G.VerticesList[i]=e1;
    }
    i=0;
    while(i<m)
    {
        cout<<"输入边的三元数据(顶点1，顶点2，权重)"<<endl;
        cin>>e1>>e2>>weight;
        j=GetVertexPos(G,e1);
        k=GetVertexPos(G,e2);
        if(j!=-1&&k!=-1)
        {
            G.Edge[j][k]=G.Edge[k][j]=weight;
            i++;
        }
        else cout<<"边两端顶点信息有误，重新输入!"<<endl;
    }
}

void PrintGraph(MGraph&G)
{
    int i,j;
    int w;
    cout<<"图G的顶点数是"<<G.numVertices<<endl;
    cout<<"顶点向量的值是"<<endl;
    for(i=0; i<G.numVertices; i++)
        cout<<G.VerticesList[i]<<endl;
    cout<<"图G的边数是"<<G.numEdges<<endl;
    for(i=0; i<G.numVertices; i++)
    {
        for(j=i+1; j<G.numVertices; j++)
        {
            w=G.Edge[i][j];
            if(w>0&&w<maxWeight)
                cout<<"("<<i<<","<<j<<","<<w<<")"<<endl;
        }
    }
}
void DFS(MGraph&G,int v,int visited[])
{
    cout<<"值:"<<GetValue(G,v)<<" ";
    visited[v]=1;
    int w=FirstNeighbor(G,v);
    while(w!=-1)
    {
        if(visited[w]==0)DFS(G,w,visited);
        w=NextNeighbor(G,v,w);
    }
}

void DFS_Traversal(MGraph&G,int v)
{
    int i,n=NumberOfVertices(G);
    int *visited=new int[n];
    if(!visited){cerr<<"存储分配失败!"<<endl;exit(1);}
    for(i=0;i<n;i++)visited[i]=0;
    DFS(G,v,visited);
    delete[]visited;
}

int main()
{
    MGraph g;
    InitGraph(g);
    PrintGraph(g);
    cout<<"目前图中的顶点数: "<<NumberOfVertices(g)<<endl;
    cout<<"目前图中的边数为: "<<NumberOfEdges(g)<<endl;
    int n,m;
    cout<<"请输入你要建立的图包含的顶点个数: ";
    cin>>n;
    cout<<"请输入你要建立的图包含的边数: ";
    cin>>m;
    CreateGraph(g,n,m);
    PrintGraph(g);
    DFS_Traversal(g,0);
}


