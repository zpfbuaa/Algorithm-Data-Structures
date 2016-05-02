//2014级数据结构第二次上机 - 括号匹配
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#define initsize 10010
using namespace std;
char Symbol[initsize];
typedef struct
{
    char *elem;
    int maxsize,top;
} cstack;

void initstack(cstack &s)
{
    s.elem=new char[initsize];
    if(!s.elem)
    {
        cerr<<"存储分配失败\n";
        exit(1);
    }
    s.maxsize=initsize;
    s.top=-1;
}
int stackfull(cstack &s)
{
    return s.top=s.maxsize;
}
int stackempty(cstack &s)
{
    return s.top==-1;
}

void overflowprocess(cstack &s)
{
    char *newarray=new char[s.maxsize*2];
    if(!newarray)
    {
        cerr<<"存储分配失败\n";
        exit(1);
    }
    for(int i=0; i<=s.top; i++)newarray[i]=s.elem[i];
    s.maxsize=2*s.maxsize;
    delete []s.elem;
    s.elem=newarray;
}
void push(cstack &s,char x)
{
    if(stackfull(s))overflowprocess(s);
    s.elem[++s.top]=x;
}
int pop(cstack &s)
{
    if(s.top==-1)return 0;
    --s.top;
    return 1;
}
//int top(cstack &s)
//{
//    return s.elem[top]
//}
bool match()
{
    cin>>Symbol;
    int flag=1;
    cstack val;
    initstack(val);
    for ( int i=0;i<strlen(Symbol)&&flag==1; i++ )
    {
        if ( Symbol[i] =='['||Symbol[i]=='('||Symbol[i]=='{')
            push(val,Symbol[i]);
        if ( Symbol[i] == ')' )
        {
            if ( !stackempty(val) && val.elem[val.top] =='(')
                pop(val);
            else
                flag = 0;
        }
        if ( Symbol[i]==']')
        {
            if ( !stackempty(val)&&val.elem[val.top]=='[')
                pop(val);
            else
                flag = 0;
        }
        if ( Symbol[i]=='}')
        {
            if ( !stackempty(val)&&val.elem[val.top]=='{')
                pop(val);
            else
                flag = 0;
        }
    }
     if ( stackempty(val) && flag ) return true;
     else
        return false;

}
int main()
{
    int n,flag;
    cin>>n;
    while(n--)
    {
        if(match())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
