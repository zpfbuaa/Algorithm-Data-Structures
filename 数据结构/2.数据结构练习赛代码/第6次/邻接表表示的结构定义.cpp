#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <limits.h>
#define Maxsize 1010
#define maxWeight INT_MAX

using namespace std;

typedef struct EdgeNode
{
    int dest;
    int cost;
    struct EdgeNode* link;
};

typedef struct VertexNode
{
    int data;
    struct EdgeNode*first;
};

typedef struct ALGraph
{
    VertexNode*VerticesList;
    int numVertices,numEdges;
};

void InitGraph(ALGraph&G)
{
    G.numVertices=0;
    G.numEdges=0;
    G.VerticesList=new VertexNode[Maxsize];
    if(!G.VerticesList)
    {
        cerr<<"�洢����ʧ��!"<<endl;
        exit(1);
    }
    for(int i=0; i<Maxsize; i++)
        G.VerticesList[i].first=NULL;
};

int NumberOfVertices(ALGraph&G)
{
    return G.numVertices;
}

int NumberOfEdges(ALGraph&G)
{
    return G.numEdges;
}

int GetVertexPos(ALGraph&G,int x)
{
    for(int i=0; i<G.numVertices; i++)
        if(G.VerticesList[i].data=x)return i;
    return -1;
}

int GetValue(ALGraph&G,int i)
{
    if(i==-1)return 0;
    else return G.VerticesList[i].data;
}

int GetWeight(ALGraph&G,int v1,int v2)
{
    if(v1!=-1&&v2!=-1)
    {
        EdgeNode*p=G.VerticesList[v1].first;
        while(p!=NULL&&p->dest!=v2)
            p=p->link;
        if(p!=NULL)return p->cost;
    }
    else return 0;
}

int FirstNeighbor(ALGraph&G,int v)
{
    if(v!=-1)
    {
        EdgeNode*p=G.VerticesList[v].first;
        if(p!=NULL)return p->dest;
    }
    else return -1;
}

int NextNeighbor(ALGraph&G,int v,int w)
{
    if(v!=-1&&w!=-1)
    {
        EdgeNode*p=G.VerticesList[v].first;
        while(p!=NULL&&p->dest!=w)
            p=p->link;
        if(p!=NULL&&p->link!=NULL)
            return p->link->dest;
    }
    else return -1;
}

void CreateGraph(ALGraph&G,int n,int m)
{
    int i,j,k;
    int e1,e2;
    int weight;
    EdgeNode*q,*p;
    G.numVertices=n;
    G.numEdges=m;
    for(i=0; i<n; i++)
    {
        cout<<"���붥��"<<endl;
        cin>>e1;
        G.VerticesList[i].data=e1;
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
            p=G.VerticesList[e1].first;
            while(p!=NULL&&p->dest!=e2)
                p=p->link;
            if(p==NULL)
            {
                q=new EdgeNode;
                if(!q)
                {
                    cerr<<"�洢����ʧ��!"<<endl;
                    exit(1);
                }
                q->dest=e2;q->cost=weight;
                q->link=G.VerticesList[e1].first;
                G.VerticesList[e1].first=q;
                q=new EdgeNode;
                if(!q)
                {
                    cerr<<"�洢����ʧ��!"<<endl;
                    exit(1);
                }
                q->dest=e1;
                q->cost=weight;
                q->link=G.VerticesList[e2].first;
                G.VerticesList[e2].first=q;
                i++;
            }
            else cout<<"���ظ�,��������!"<<endl;
        }
        else cout<<"�����˶�����Ϣ����,��������!"<<endl;
    }
}

void PrintGraph(ALGraph&G)
{
    int i,j;EdgeNode*p;
    cout<<"ͼG�Ķ�������: "<<G.numVertices<<endl;
    cout<<"����������ֵ��: "<<endl;
    for(i=0;i<G.numVertices;i++)
    {
        cout<<"��"<<i<<"������Ķ���������"<<endl;
        cout<<G.VerticesList[i].data<<endl;
    }
    cout<<"ͼG�ı�����: "<<G.numEdges<<endl;
    for(i=0;i<G.numVertices;i++)
    {
        for(p=G.VerticesList[i].first;p!=NULL;p=p->link)
            cout<<"("<<i<<","<<p->dest<<","<<p->cost<<")"<<" ";
        cout<<endl;
    }
}

void DFS(ALGraph&G,int v,int visited[])
{
    cout<<"ֵ:"<<GetValue(G,v)<<" ";
    visited[v]=1;
    int w=FirstNeighbor(G,v);
    while(w!=-1)
    {
        if(visited[w]==0)DFS(G,w,visited);
        w=NextNeighbor(G,v,w);
    }
}
//void DFS_Traversal(ALGraph&G,int v)
//{
//    int i,n=NumberOfVertices(G);
//    int *visited=new int[n];
//    if(!visited){cerr<<"�洢����ʧ��!"<<endl;exit(1);}
//    for(i=0;i<n;i++)visited[i]=0;
//    DFS(G,v,visited);
//    delete[]visited;
//}
//
//void BFS_Traversal(ALGraph&G,int v)
//{
//    int i,j,k,w,n=NumberOfVertices(G);
//    int *visited=new int[n];
//    if(visited==NULL){cerr<<"�洢�������!"<<endl;exit(1);}
//    for(i=0;i<n;i++)visited[i]=0;
//    cout<<GetValue(G,v)<<" ";
//    visited[v]=1;
//    Queue Q;
//    EnQueue(Q,v);
//    while(!QueueEmpty(Q))
//    {
//        DeQueue(Q,k);
//        w=FirstNeighbor(G,k);
//        while(w!=-1)
//        {
//            if(visited[w]==0)
//            {
//                cout<<GetValue(G,w)<<" ";
//                visited[w]=1;
//                EnQueue(Q,w);
//            }
//            w=NextNeighbor(G,k,w);
//        }
//    }
//    delete[]visited;
//}
int main()
{
    ALGraph g;
    InitGraph(g);
    PrintGraph(g);
    cout<<"Ŀǰͼ�еĶ�����: "<<NumberOfVertices(g)<<endl;
    cout<<"Ŀǰͼ�еı���Ϊ: "<<NumberOfEdges(g)<<endl;
    int n,m;
    cout<<"��������Ҫ������ͼ�����Ķ������: ";
    cin>>n;
    cout<<"��������Ҫ������ͼ�����ı���: ";
    cin>>m;
    CreateGraph(g,n,m);
    PrintGraph(g);
//    DFS_Traversal(g,1);
}

