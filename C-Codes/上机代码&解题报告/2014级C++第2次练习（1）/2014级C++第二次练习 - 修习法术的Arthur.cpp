#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    char a,b;
    while(cin>>a>>b)
    {
        if(a=='W')
        {
            if(b=='E'||b=='I')printf("Easy!\n");
            else if(b=='T'||b=='F')printf("Hard!\n");
            else printf("Normal!\n");
        }
        else if(a=='E')
        {
            if(b=='I'||b=='F')printf("Easy!\n");
            else if(b=='W'||b=='T')printf("Hard!\n");
            else printf("Normal!\n");
        }
        else if(a=='I')
        {
            if(b=='F'||b=='T')printf("Easy!\n");
            else if(b=='E'||b=='W')printf("Hard!\n");
            else printf("Normal!\n");
        }
        else if(a=='F')
        {
            if(b=='T'||b=='W')printf("Easy!\n");
            else if(b=='I'||b=='E')printf("Hard!\n");
            else printf("Normal!\n");
        }
        else if(a=='T')
        {
            if(b=='W'||b=='E')printf("Easy!\n");
            else if(b=='F'||b=='I')printf("Hard!\n");
            else printf("Normal!\n");
        }
    }
    return 0;
}


