#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#define Initsize 56
#define Maxsize 1010
typedef struct node
{
    char ch[Maxsize];
    int length;
}list;

using namespace std;

int answer(int ansT[],int ansA[],int ansG[],int ansC[],int n,int wa[])
{
    int flag1=0,flag2=0,flag=0;
    for(int i=0;i<n;i++)
    {
        flag1=max(ansT[i],ansA[i]);
        flag2=max(ansG[i],ansC[i]);
        flag=max(flag1,flag2);
        if(flag==ansA[i])wa[i]=1;
        else if(flag==ansC[i])wa[i]=2;
        else if(flag==ansG[i])wa[i]=3;
        else if(flag==ansT[i])wa[i]=4;
    }
}

int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        list l[Initsize];
        for(int i=1;i<=m;i++)
        {
            l[i].length=n;
        }
        for(int i=1;i<=m;i++)
        {
           for(int j=0;j<n;j++)
           {
               cin>>l[i].ch[j];
           }
        }
        int ansT[Maxsize],ansA[Maxsize],ansG[Maxsize],ansC[Maxsize];
        memset(ansT,0,sizeof(ansT));
        memset(ansA,0,sizeof(ansA));
        memset(ansG,0,sizeof(ansG));
        memset(ansC,0,sizeof(ansC));
        for(int i=1;i<=m;i++)
        {
            for(int j=0;j<n;j++)
            {
                switch(l[i].ch[j])
                {
                    case 'T':ansT[j]++;break;
                    case 'A':ansA[j]++;break;
                    case 'G':ansG[j]++;break;
                    case 'C':ansC[j]++;break;
                }
            }
        }
        int wa[Maxsize]={0};
        answer(ansT,ansA,ansG,ansC,n,wa);
        list anslist;
        anslist.length=n;
        for(int i=0;i<n;i++)
        {
            switch(wa[i])
            {
                case 1:anslist.ch[i]='A';break;
                case 2:anslist.ch[i]='C';break;
                case 3:anslist.ch[i]='G';break;
                case 4:anslist.ch[i]='T';break;
            }
        }
        int Hamming=0;
        for(int i=1;i<=m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(l[i].ch[j]!=anslist.ch[j])
                    Hamming++;
            }
        }
        cout<<"Hamming距离为:"<<Hamming<<endl;
        cout<<"最优DNA序列为:";
        for(int i=0;i<n;i++)
        {
            cout<<anslist.ch[i];
        }
        cout<<endl;
    }
}
