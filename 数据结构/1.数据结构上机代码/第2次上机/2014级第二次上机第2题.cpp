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
