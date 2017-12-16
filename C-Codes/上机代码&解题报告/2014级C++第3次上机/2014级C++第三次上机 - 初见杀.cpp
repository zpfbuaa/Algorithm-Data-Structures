#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<=n/2;i++)
        {
            for(int j=i;j<n/2;j++)
            {
               cout<<" ";
            }
            for(int j=0;j<=i;j++)
                cout<<(char)('A'+j);
            for(int j=i-1;j>=0;j--)
                cout<<(char)('A'+j);
            cout<<endl;
        }
        for(int i=n/2-1;i>=0;i--)
        {
            for(int j=i;j<n/2;j++)
        {
            cout<<" ";
        }
         for(int j=0;j<=i;j++)
                cout<<(char)('A'+j);
            for(int j=i-1;j>=0;j--)
                cout<<(char)('A'+j);
            cout<<endl;
        }
    }
}

