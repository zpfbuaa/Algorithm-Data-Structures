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
        cerr<<"�洢�������!"<<endl;
        exit(1);
    }
    G.Edge=new int*[Maxsize];
    if(!G.Edge)
    {
        cerr<<"�洢�������!"<<endl;
        exit(1);
    }
    for(i=0; i<Maxsize; i++)
    {
        G.Edge[i]=new int[Maxsize];
        if(!G.Edge[i])
        {
            cerr<<"�洢�������!"<<endl;
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
        cout<<"���붥��"<<endl;
        cin>>e1;
        G.VerticesList[i]=e1;
    }
    i=0;
    while(i<m)
    {
        cout<<"����ߵ���Ԫ����(����1������2��Ȩ��)"<<endl;
        cin>>e1>>e2>>weight;
        j=GetVertexPos(G,e1);
        k=GetVertexPos(G,e2);
        if(j!=-1&&k!=-1)
        {
            G.Edge[j][k]=G.Edge[k][j]=weight;
            i++;
        }
        else cout<<"�����˶�����Ϣ������������!"<<endl;
    }
}

void PrintGraph(MGraph&G)
{
    int i,j;
    int w;
    cout<<"ͼG�Ķ�������"<<G.numVertices<<endl;
    cout<<"����������ֵ��"<<endl;
    for(i=0; i<G.numVertices; i++)
        cout<<G.VerticesList[i]<<endl;
    cout<<"ͼG�ı�����"<<G.numEdges<<endl;
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

void ShortestPath(MGraph&G,int v,int dist[],int path[])
{

    int n=NumberOfVertices(G);
    int *S=new int[n];
    int i,j,k;int w,min;
    for(i=0;i<n;i++)
    {
        dist[i]=GetWeight(G,v,i);
        S[i]=0;
        if(i!=v&&dist[i]<maxWeight)path[i]=v;
        else path[i]=-1;
    }
    S[v]=1;dist[v]=0;
    for(i=0;i<n-1;i++)
    {
        min=maxWeight;int u=v;
        for(j=0;j<n;j++)
        {
            if(!S[j]&&dist[j]<min)
            {
                u=j;
                min=dist[j];
            }
        }
        S[u]=1;
        for(k=0;k<n;k++)
        {
            w=GetWeight(G,u,k);
            if(!S[k]&&w<maxWeight&&dist[u]+w<dist[k])
            {
                dist[k]=dist[u]+w;
                path[k]=u;
            }
        }
    }
}


//void DFS(MGraph&G,int v,int visited[])
//{
//    cout<<"ֵ:"<<GetValue(G,v)<<" ";
//    visited[v]=1;
//    int w=FirstNeighbor(G,v);
//    while(w!=-1)
//    {
//        if(visited[w]==0)DFS(G,w,visited);
//        w=NextNeighbor(G,v,w);
//    }
//}
//
//void DFS_Traversal(MGraph&G,int v)
//{
//    int i,n=NumberOfVertices(G);
//    int *visited=new int[n];
//    if(!visited){cerr<<"�洢����ʧ��!"<<endl;exit(1);}
//    for(i=0;i<n;i++)visited[i]=0;
//    DFS(G,v,visited);
//    delete[]visited;
//}

int main()
{
    MGraph g;
    InitGraph(g);
//    PrintGraph(g);
//    cout<<"Ŀǰͼ�еĶ�����: "<<NumberOfVertices(g)<<endl;
//    cout<<"Ŀǰͼ�еı���Ϊ: "<<NumberOfEdges(g)<<endl;
    int n,m;
    while(cin>>n>>m)
    {
//    cout<<"��������Ҫ������ͼ�����Ķ������: ";
//    cout<<"��������Ҫ������ͼ�����ı���: ";
    CreateGraph(g,n,m);
//    PrintGraph(g);
    int dist[Maxsize];
    int path[Maxsize];
    int a,b;
    cout<<"�������a:"<<endl;
    cin>>a;
    cout<<"�������b"<<endl;
    cin>>b;
    ShortestPath(g,a,dist,path);
    cout<<dist[b]<<endl;
    }
}



