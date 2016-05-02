#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits.h>
#define Maxsize 110
#define maxWeight INT_MAX
int a[Maxsize][Maxsize];
int path[Maxsize][Maxsize]
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
        cerr<<"´æ´¢·ÖÅä´íÎó!"<<endl;
        exit(1);
    }
    G.Edge=new int*[Maxsize];
    if(!G.Edge)
    {
        cerr<<"´æ´¢·ÖÅä´íÎó!"<<endl;
        exit(1);
    }
    for(i=0; i<Maxsize; i++)
    {
        G.Edge[i]=new int[Maxsize];
        if(!G.Edge[i])
        {
            cerr<<"´æ´¢·ÖÅä´íÎó!"<<endl;
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

void CreateGraph(MGraph&G,int n,int m,int a[][Maxsize])
{
    int i,j,k,x;
    int e1,e2;
    int weight;
    G.numVertices=n;
    G.numEdges=n;
    for(i=0; i<n; i++)
    {
        G.VerticesList[i]=i;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i!=j)
            {
                x=GetVertexPos(G,i);
                k=GetVertexPos(G,j);
                if(x!=-1&&k!=-1)
                {
                    G.Edge[x][k]=G.Edge[k][x]=a[x][k];
                }
            }
        }
    }
}
void Floyd(MGraph&G,int a[][Maxsize],int path[][Maxsize])
{
    int i,j,k,n=NumberOfVertices(G);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            a[i][j]=GetWeight(G,i,j)
                    if(i!=j&&a[i][j]<maxWeight)path[i][j]=i;
            else path[i][j]=0;
        }
    }
    for(k=0; k<n; k++)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(a[i][k]+a[k][j]<a[i][j])
                {
                    a[i][j]=a[i][k]+a[k][j];
                    path[i][j]=path[k][j];
                }
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                scanf("%d",&a[i][j]);
        }
        MGraph g;
        InitGraph(g);
        CreateGraph(g,n,n,a)
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {

                }
            }
        }
    }
}
