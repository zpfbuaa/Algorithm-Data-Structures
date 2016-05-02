//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <queue>
//#include <map>
//#include <set>
//#include <stack>
//#include <iomanip>
//#include <algorithm>
//#include <vector>
//#include <sstream>
//#include <cmath>
//#include <string>
//#define max_size 1000010
//char c[max_size];
//
//using namespace std;
//
//int main()
//{
//    int n;
//    while(~scanf("%d",&n))
//    {
//        scanf("%s",c);
//        for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<n-i-1;j++)
//            {
//                if(c[j]>=97&&c[j+1]>=97&&c[j]>c[j+1])
//                {
//                    swap(c[j],c[j+1]);
//                }
//                else if(c[j]<=90&&c[j+1]<=90&&c[j]<c[j+1])
//                {
//                    swap(c[j],c[j+1]);
//                }
//                else if(c[j]<=90&&c[j+1]>=97)
//                {
//                    swap(c[j],c[j+1]);
//                }
//            }
//        }
//        printf("%s\n",c);
//    }
//}
//
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define max_size 110
int num[max_size];

using namespace std;

int main()
{
    int n;
    char x;
    int i;
    while(~scanf("%d",&n))
    {
        memset(num,0,sizeof(num));
        getchar();
        while(n--)
        {
            x=getchar();
            if(x<'a') num[x-'A'+26]++;
            else num[x-'a']++;
        }
        x='a';
        for(i=0;i<26;i++)
        {
            while(num[i]--)
                printf("%c",x);
            x++;
        }
        i=26;
        x='Z';
        while(i--)
        {
            while(num[i+26]--)
                printf("%c",x);
            x--;
        }
        printf("\n");
    }
}


