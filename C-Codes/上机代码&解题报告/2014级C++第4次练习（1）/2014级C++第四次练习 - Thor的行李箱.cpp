#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,ans1,ans2;
    while(cin>>a>>b>>c>>d)
    {
        ans1=a;
        ans2=0;
        if(ans1<b)
            ans1=b;
        if(ans1<c)
            ans1=c;
        if(ans1<d)
            ans1=d;
        if(ans2<a&&a<ans1)
            ans2=a;
        if(ans2<b&&b<ans1)
            ans2=b;
        if(ans2<c&&c<ans1)
            ans2=c;
        if(ans2<d&&d<ans1)
            ans2=d;
        //cout<<ans1<<" "<<ans2<<endl;
        if((a==ans1&&(b==ans1||c==ans1||d==ans1))||((b==ans1)&&(a==ans1||c==ans1||d==ans1))||((c==ans1)&&(a==ans1||b==ans1||d==ans1))||((d==ans1)&&(a==ans1||b==ans1||c==ans1)))
            cout<<ans1*2<<endl;
        else
            cout<<ans1+ans2<<endl;
    }
}

