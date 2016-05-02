#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
using namespace std;
char *str1= new char[100000];
char *str2= new char[100000];

 void Ins(char *str1,char *str2,int pos)
 {
     int len1=strlen(str1);
     int len2=strlen(str2);
     for(int i=len1-1;i>=pos-1;i--)
        str1[i+len2]=str1[i];
     for(int i=0;i<len2;i++)
        str1[pos+i-1]=str2[i];
    str1[len1+len2]='\0';
    cout<<str1<<endl;
 }

 void Rep(char *str1,char *str2,int pos)
 {
     int len1=strlen(str1);
     int len2=strlen(str2);
     for(int i=0;i<len2;i++)
        str1[pos-1+i]=str2[i];
    if(len1<len2+pos)
        str1[pos+len2]='\0';
    cout<<str1<<endl;
 }

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string action;
        int pos;
        cin>>action>>pos;
        switch(action[0])
        {
            case 'I':
                cin>>str1>>str2;
                Ins(str1,str2,pos);
                break;
            case 'R':
                cin>>str1>>str2;
                Rep(str1,str2,pos);
                break;
        }
    }
}
