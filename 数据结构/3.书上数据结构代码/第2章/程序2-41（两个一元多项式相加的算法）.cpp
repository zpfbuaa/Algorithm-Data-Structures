//����2-41������һԪ����ʽ��ӵ��㷨��

/*������ʹ����������Ա�һ�������ģ��ؼ����ж����̫�鷳��
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<memory.h>
#define maxsize 510
int c[maxsize],d[maxsize],e[maxsize];
using namespace std;
typedef struct Term
{
    float coef;
    int exp;
    struct Term *link;
} List,*Polynomial;
void initTerm(Polynomial& first)
{
    first=new List;
    if(!first)
    {
        cerr<<"�洢����ʧ��\n";
    }
    first->link=NULL;
}
int main()
{
    int n,m,mnum;
    while(cin>>n>>m)
    {
        int counter=0;
        memset(c,0,sizeof(c));
        memset(d,0,sizeof(d));
        memset(e,0,sizeof(e));
        if(n>m)mnum=n;
        else mnum=m;
        Polynomial firsts,firstp,s,p,prs,prp;
        initTerm(firsts);
        initTerm(firstp);
        prs=firsts;
        prp=firstp;
        for(int i=0; i<=n; i++)
        {
            s=new List;
            s->link=prs->link;
            prs->link=s;
            prs=s;
            s->exp=i;
            cin>>s->coef;
        }
        for(int i=0; i<=m; i++)
        {
            p=new List;
            p->link=prp->link;
            prp->link=p;
            prp=p;
            p->exp=i;
            cin>>p->coef;
        }
        float a[510];
        if(n>=m)
        {
            for(int i=0; i<=m; i++)
            {
                firstp=firstp->link;
                firsts=firsts->link;
                c[i]=firstp->coef+firsts->coef;
            }

            for(int i=m+1; i<=n; i++)
            {
                firsts=firsts->link;
                c[i]=firsts->coef;
            }
        }
        if(n<m)
        {
            for(int i=0; i<=n; i++)
            {
                firstp=firstp->link;
                firsts=firsts->link;
                c[i]=firstp->coef+firsts->coef;
            }
            for(int i=n+1; i<=m; i++)
            {
                firstp=firstp->link;
                c[i]=firstp->coef;
            }
         }
           for(int i=0; i<=mnum; i++)
        {
            if(c[i]!=0)
            {
                d[counter]=c[i];
                e[counter]=i;
                counter++;
            }
        }
//        for(int i=0;i<counter;i++)
//            cout<<d[i]<<" ";
//        cout<<endl;
//        for(int i=0;i<counter;i++)
//            cout<<e[i]<<" ";
//            cout<<endl;
        if(e[0]==0)
        {
            cout<<d[0];
        }
        else if(e[0]==1)
        {
            if(d[0]>0)
            {
                if(d[0]==1)
                    cout<<"x";
                else
                    cout<<d[0]<<"x";
            }
            if(d[0]<0)
            {
                if(d[0]==-1)
                    cout<<"-x";
                else
                    cout<<d[0]<<"x";
            }
        }
        else
        {
            if(d[0]>0)
            {
                if(d[0]==1)
                    cout<<"x^"<<e[0];
                else
                    cout<<d[0]<<"x^"<<e[0];
            }
            if(d[0]<0)
            {
                if(d[0]==-1)
                    cout<<"-x^"<<e[0];
                else
                    cout<<d[0]<<"x^"<<e[0];
            }
        }
        for(int i=1; i<counter; i++)
        {
            if(e[i]==1)
            {
                if(d[i]>0)
                {
                    if(d[i]==1)
                        cout<<"+x";
                    else
                        cout<<"+"<<d[i]<<"x";
                }
                if(d[i]<0)
                {
                    if(d[i]==-1)
                        cout<<"-x";
                    else
                        cout<<d[i]<<"x";
                }
            }
            else
            {
                if(d[i]>0)
                {
                    if(d[i]==1)
                        cout<<"+"<<"x^"<<e[i];
                    else
                        cout<<"+"<<d[i]<<"x^"<<e[i];
                }
                if(d[i]<0)
                {
                    if(d[i]==-1)
                        cout<<"-x^"<<e[i];
                    else
                        cout<<d[i]<<"x^"<<e[i];
                }
            }
        }
        cout<<endl;
    }
}

*/
/*����ʹ�ô������������*/
//2014�����ݽṹ�ڶ����ϻ� - jhljx�������ʽ
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<memory.h>
#define maxsize 510
int a[maxsize],b[maxsize],c[maxsize],d[maxsize],e[maxsize];
//a[maxsize]��ʾ��һ������ʽ����ϵ����
//b[maxsize]��ʾ�ڶ�������ʽ����ϵ��
//c[maxsize]��ʾ��Ӻ����ʽ����ϵ��
//d[maxsize]��ʾϵ����Ϊ0��
//e[maxsize]��ʾϵ����Ϊ0����Ĵ���
using namespace std;

int main()
{
    int n,m,mnum;
    while(cin>>n>>m)
    {
        int counter=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        memset(d,0,sizeof(d));
        memset(e,0,sizeof(e));
        if(n>m)mnum=n;
        else mnum=m;
        for(int i=0; i<=n; i++)
            cin>>a[i];
        for(int j=0; j<=m; j++)
            cin>>b[j];
        for(int t=0; t<=mnum; t++)
            c[t]=a[t]+b[t];
        for(int i=0; i<=mnum; i++)
        {
            if(c[i]!=0)
            {
                d[counter]=c[i];
                e[counter]=i;
                counter++;
            }
        }
//        for(int i=0;i<counter;i++)
//            cout<<d[i]<<" ";
//        cout<<endl;
//        for(int i=0;i<counter;i++)
//            cout<<e[i]<<" ";
//            cout<<endl;
        if(e[0]==0)
        {
            cout<<d[0];
        }
        else if(e[0]==1)
        {
            if(d[0]>0)
            {
                if(d[0]==1)
                    cout<<"x";
                else
                    cout<<d[0]<<"x";
            }
            if(d[0]<0)
            {
                if(d[0]==-1)
                    cout<<"-x";
                else
                    cout<<d[0]<<"x";
            }
        }
        else
        {
            if(d[0]>0)
            {
                if(d[0]==1)
                    cout<<"x^"<<e[0];
                else
                    cout<<d[0]<<"x^"<<e[0];
            }
            if(d[0]<0)
            {
                if(d[0]==-1)
                    cout<<"-x^"<<e[0];
                else
                    cout<<d[0]<<"x^"<<e[0];
            }
        }
        for(int i=1; i<counter; i++)
        {
            if(e[i]==1)
            {
                if(d[i]>0)
                {
                    if(d[i]==1)
                        cout<<"+x";
                    else
                        cout<<"+"<<d[i]<<"x";
                }
                if(d[i]<0)
                {
                    if(d[i]==-1)
                        cout<<"-x";
                    else
                        cout<<d[i]<<"x";
                }
            }
            else
            {
                if(d[i]>0)
                {
                    if(d[i]==1)
                        cout<<"+"<<"x^"<<e[i];
                    else
                        cout<<"+"<<d[i]<<"x^"<<e[i];
                }
                if(d[i]<0)
                {
                    if(d[i]==-1)
                        cout<<"-x^"<<e[i];
                    else
                        cout<<d[i]<<"x^"<<e[i];
                }
            }
        }
        cout<<endl;
    }
}








